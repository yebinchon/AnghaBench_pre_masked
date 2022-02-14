
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
typedef int ngx_err_t ;
struct TYPE_3__ {int log_error; int log; } ;
typedef TYPE_1__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_1(ngx_connection_t *VAR_15, ngx_err_t VAR_16, char *VAR_17)
{
    ngx_uint_t VAR_18;



    if ((VAR_16 == VAR_2



        ) && VAR_15->log_error == 130)
    {
        return 0;
    }







    if (VAR_16 == 0
        || VAR_16 == VAR_2



        || VAR_16 == VAR_9

        || VAR_16 == VAR_8
        || VAR_16 == VAR_11
        || VAR_16 == VAR_1
        || VAR_16 == VAR_6
        || VAR_16 == VAR_7
        || VAR_16 == VAR_3
        || VAR_16 == VAR_4)
    {
        switch (VAR_15->log_error) {

        case 129:
        case 130:
        case 128:
            VAR_18 = VAR_14;
            break;

        default:
            VAR_18 = VAR_13;
        }

    } else {
        VAR_18 = VAR_12;
    }

    FUNC_0(VAR_18, VAR_15->log, VAR_16, VAR_17);

    return VAR_10;
}
