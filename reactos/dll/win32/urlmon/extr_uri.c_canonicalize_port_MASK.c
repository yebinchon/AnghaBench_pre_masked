
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ scheme_type; scalar_t__ port_value; int port_len; scalar_t__ port; scalar_t__ has_port; } ;
typedef TYPE_1__ parse_data ;
typedef int WCHAR ;
struct TYPE_8__ {int port_offset; int has_port; size_t canon_len; int authority_start; char* canon_uri; scalar_t__ port; } ;
typedef TYPE_2__ Uri ;
typedef scalar_t__ USHORT ;
struct TYPE_9__ {scalar_t__ scheme; scalar_t__ port; } ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 size_t FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_3(const parse_data *VAR_4, Uri *VAR_5, DWORD VAR_6, BOOL VAR_7) {
    BOOL VAR_8 = VAR_0;
    USHORT VAR_9 = 0;
    DWORD VAR_10;

    VAR_5->port_offset = -1;


    for(VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); ++VAR_10) {
        if(VAR_3[VAR_10].scheme == VAR_4->scheme_type) {
            VAR_8 = VAR_1;
            VAR_9 = VAR_3[VAR_10].port;
            break;
        }
    }

    VAR_5->has_port = VAR_4->has_port || VAR_8;







    if(VAR_8 && VAR_4->has_port && VAR_4->port_value == VAR_9) {

        if(VAR_6 & VAR_2) {
            VAR_5->port_offset = VAR_5->canon_len-VAR_5->authority_start;
            if(!VAR_7)
                VAR_5->canon_uri[VAR_5->canon_len] = ':';
            ++VAR_5->canon_len;

            if(VAR_4->port) {

                if(!VAR_7)
                    FUNC_1(VAR_5->canon_uri+VAR_5->canon_len, VAR_4->port, VAR_4->port_len*sizeof(WCHAR));
                VAR_5->canon_len += VAR_4->port_len;
            } else {
                if(!VAR_7)
                    VAR_5->canon_len += FUNC_2(VAR_5->canon_uri+VAR_5->canon_len, VAR_4->port_value);
                else
                    VAR_5->canon_len += FUNC_2(((void*)0), VAR_4->port_value);
            }
        }

        VAR_5->port = VAR_9;
    } else if(VAR_4->has_port) {
        VAR_5->port_offset = VAR_5->canon_len-VAR_5->authority_start;
        if(!VAR_7)
            VAR_5->canon_uri[VAR_5->canon_len] = ':';
        ++VAR_5->canon_len;

        if(VAR_6 & VAR_2 && VAR_4->port) {

            if(!VAR_7)
                FUNC_1(VAR_5->canon_uri+VAR_5->canon_len, VAR_4->port, VAR_4->port_len*sizeof(WCHAR));
            VAR_5->canon_len += VAR_4->port_len;
        } else {
            if(!VAR_7)
                VAR_5->canon_len += FUNC_2(VAR_5->canon_uri+VAR_5->canon_len, VAR_4->port_value);
            else
                VAR_5->canon_len += FUNC_2(((void*)0), VAR_4->port_value);
        }

        VAR_5->port = VAR_4->port_value;
    } else if(VAR_8)
        VAR_5->port = VAR_9;

    return VAR_1;
}
