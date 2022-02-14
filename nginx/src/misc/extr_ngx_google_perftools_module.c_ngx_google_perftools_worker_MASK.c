
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_int_t ;
struct TYPE_7__ {scalar_t__ len; } ;
struct TYPE_5__ {TYPE_3__ profiles; } ;
typedef TYPE_1__ ngx_google_perftools_conf_t ;
struct TYPE_6__ {int log; int conf_ctx; } ;
typedef TYPE_2__ ngx_cycle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*) ;
 int * FUNC_4 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int ,char*,int *) ;
 int VAR_5 ;
 int FUNC_8 (int *,char*,TYPE_3__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_cycle_t *VAR_6)
{
    u_char *VAR_7;
    ngx_google_perftools_conf_t *VAR_8;

    VAR_8 = (ngx_google_perftools_conf_t *)
                FUNC_6(VAR_6->conf_ctx, VAR_4);

    if (VAR_8->profiles.len == 0) {
        return VAR_2;
    }

    VAR_7 = FUNC_4(VAR_8->profiles.len + VAR_0 + 2, VAR_6->log);
    if (VAR_7 == ((void*)0)) {
        return VAR_2;
    }

    if (FUNC_3("CPUPROFILE")) {

        FUNC_2();
    }

    FUNC_8(VAR_7, "%V.%d%Z", &VAR_8->profiles, VAR_5);

    if (FUNC_1(VAR_7)) {

        FUNC_0();

    } else {
        FUNC_7(VAR_1, VAR_6->log, VAR_3,
                      "ProfilerStart(%s) failed", VAR_7);
    }

    FUNC_5(VAR_7);

    return VAR_2;
}
