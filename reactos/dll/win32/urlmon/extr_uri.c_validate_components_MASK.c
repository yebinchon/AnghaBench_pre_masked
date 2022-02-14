
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ scheme_type; int is_opaque; int has_port; int host; int password; int username; int is_relative; } ;
typedef TYPE_2__ parse_data ;
struct TYPE_25__ {TYPE_1__* uri; scalar_t__ username; scalar_t__ password; } ;
typedef TYPE_3__ UriBuilder ;
struct TYPE_23__ {int userinfo_split; int userinfo_start; } ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_3__ const*,TYPE_2__*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (TYPE_3__ const*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_3__ const*,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_3__ const*,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_3__ const*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_3__ const*,TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_3__ const*,TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_3__ const*,TYPE_2__*,int ) ;

__attribute__((used)) static HRESULT FUNC_10(const UriBuilder *VAR_3, parse_data *VAR_4, DWORD VAR_5) {
    HRESULT VAR_6;

    FUNC_2(VAR_4, 0, sizeof(parse_data));

    FUNC_1("(%p %p %x): Beginning to validate builder components.\n", VAR_3, VAR_4, VAR_5);

    VAR_6 = FUNC_8(VAR_3, VAR_4, VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;


    if(VAR_4->scheme_type == VAR_2) {
        if((VAR_3->password || (VAR_3->uri && VAR_3->uri->userinfo_split > -1)) ||
           (VAR_3->username || (VAR_3->uri && VAR_3->uri->userinfo_start > -1))) {
            FUNC_1("(%p %p %x): File schemes can't contain a username or password.\n",
                VAR_3, VAR_4, VAR_5);
            return VAR_0;
        }
    }

    VAR_6 = FUNC_9(VAR_3, VAR_4, VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    FUNC_3(VAR_3, VAR_4, VAR_5);


    if(!VAR_4->is_relative)
        VAR_4->is_opaque = !VAR_4->username && !VAR_4->password && !VAR_4->host && !VAR_4->has_port
            && VAR_4->scheme_type != VAR_2;
    else
        VAR_4->is_opaque = !VAR_4->host && !VAR_4->has_port;

    VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    VAR_6 = FUNC_7(VAR_3, VAR_4, VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    FUNC_1("(%p %p %x): Finished validating builder components.\n", VAR_3, VAR_4, VAR_5);

    return VAR_1;
}
