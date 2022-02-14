
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_3__ {int perl; } ;
typedef TYPE_1__ ngx_http_perl_main_conf_t ;
typedef int ngx_cycle_t ;
typedef int I32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;
 TYPE_1__* FUNC_5 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_cycle_t *VAR_5)
{
    ngx_http_perl_main_conf_t *VAR_6;

    VAR_6 = FUNC_5(VAR_5, VAR_3);

    if (VAR_6) {
        FUNC_3(VAR_6->perl);
        FUNC_1(VAR_6->perl);
        FUNC_2(VAR_6->perl);



        FUNC_6(FUNC_0(FUNC_4("$", VAR_2, VAR_1)), (I32) VAR_4);
    }

    return VAR_0;
}
