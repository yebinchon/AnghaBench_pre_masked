
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int ngx_uint_t ;
typedef int ngx_err_t ;




 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int VAR_1 ;

ngx_err_t
FUNC_1(u_char *VAR_2, ngx_uint_t VAR_3)
{
    u_char *VAR_4, VAR_5;
    ngx_err_t VAR_6;

    VAR_6 = 0;




    VAR_4 = VAR_2 + 1;


    for ( ; *VAR_4; VAR_4++) {
        VAR_5 = *VAR_4;

        if (VAR_5 != '/') {
            continue;
        }

        *VAR_4 = '\0';

        if (FUNC_0(VAR_2, VAR_3) == VAR_0) {
            VAR_6 = VAR_1;

            switch (VAR_6) {
            case 128:
                VAR_6 = 0;
            case 129:
                break;

            default:
                return VAR_6;
            }
        }

        *VAR_4 = '/';
    }

    return VAR_6;
}
