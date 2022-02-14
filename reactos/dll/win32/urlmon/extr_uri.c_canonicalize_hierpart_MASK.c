
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ scheme_type; scalar_t__ host_len; int has_implicit_scheme; int path_len; int path; scalar_t__ username; scalar_t__ password; scalar_t__ is_relative; scalar_t__ has_port; scalar_t__ host; int is_opaque; } ;
typedef TYPE_1__ parse_data ;
struct TYPE_12__ {size_t canon_len; char* canon_uri; size_t path_start; int path_len; int userinfo_start; int userinfo_split; int host_start; int authority_start; int domain_offset; int port_offset; int extension_offset; int port; void* has_port; int display_modifiers; scalar_t__ authority_len; int host_type; scalar_t__ host_len; scalar_t__ userinfo_len; } ;
typedef TYPE_2__ Uri ;
struct TYPE_13__ {scalar_t__ scheme; int port; } ;
typedef size_t INT ;
typedef size_t DWORD ;
typedef void* BOOL ;


 size_t FUNC_0 (TYPE_3__*) ;
 void* VAR_0 ;
 int FUNC_1 (char*) ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__ const*,TYPE_2__*,size_t,void*) ;
 int FUNC_3 (int ,int ,scalar_t__,int,size_t,int ,char*) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_2__*,size_t,void*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_7(const parse_data *VAR_6, Uri *VAR_7, DWORD VAR_8, BOOL VAR_9) {
    if(!VAR_6->is_opaque || (VAR_6->is_relative && (VAR_6->password || VAR_6->username))) {






        if((VAR_6->is_relative && (VAR_6->host || VAR_6->has_port)) ||
           (!VAR_6->is_relative && VAR_6->scheme_type != VAR_3)) {
            if(VAR_6->scheme_type == VAR_3)
                FUNC_1("Here\n");

            if(!VAR_9) {
                INT VAR_10 = VAR_7->canon_len;

                VAR_7->canon_uri[VAR_10] = '/';
                VAR_7->canon_uri[VAR_10+1] = '/';
           }
           VAR_7->canon_len += 2;
        }

        if(!FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9))
            return VAR_0;

        if(VAR_6->is_relative && (VAR_6->password || VAR_6->username)) {
            if(!FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9))
                return VAR_0;
        } else {
            if(!VAR_9)
                VAR_7->path_start = VAR_7->canon_len;
            VAR_7->path_len = FUNC_3(VAR_6->path, VAR_6->path_len, VAR_6->scheme_type, VAR_6->host_len != 0,
                    VAR_8, VAR_6->has_implicit_scheme, VAR_9 ? ((void*)0) : VAR_7->canon_uri+VAR_7->canon_len);
            VAR_7->canon_len += VAR_7->path_len;
            if(!VAR_9 && !VAR_7->path_len)
                VAR_7->path_start = -1;
        }
    } else {

        VAR_7->userinfo_start = VAR_7->userinfo_split = -1;
        VAR_7->userinfo_len = 0;
        VAR_7->host_start = -1;
        VAR_7->host_len = 0;
        VAR_7->host_type = VAR_4;
        VAR_7->has_port = VAR_0;
        VAR_7->authority_start = -1;
        VAR_7->authority_len = 0;
        VAR_7->domain_offset = -1;
        VAR_7->port_offset = -1;

        if(FUNC_6(VAR_6->scheme_type)) {
            DWORD VAR_11;




            VAR_7->display_modifiers |= VAR_2;


            for(VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); ++VAR_11) {
                if(VAR_6->scheme_type == VAR_5[VAR_11].scheme) {
                    VAR_7->has_port = VAR_1;
                    VAR_7->port = VAR_5[VAR_11].port;
                    break;
                }
            }
        }

        if(!FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9))
            return VAR_0;
    }

    if(VAR_7->path_start > -1 && !VAR_9)

        VAR_7->extension_offset = FUNC_5(VAR_7->canon_uri+VAR_7->path_start, VAR_7->path_len);
    else
        VAR_7->extension_offset = -1;

    return VAR_1;
}
