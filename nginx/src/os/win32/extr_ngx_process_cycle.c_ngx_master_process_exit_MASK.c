
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_7__ {int pool; TYPE_1__** modules; int log; } ;
typedef TYPE_2__ ngx_cycle_t ;
struct TYPE_6__ {int (* exit_master ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(ngx_cycle_t *VAR_7)
{
    ngx_uint_t VAR_8;

    FUNC_2(VAR_7);

    FUNC_1(VAR_1);
    FUNC_1(VAR_6);
    FUNC_1(VAR_3);
    FUNC_1(VAR_5);
    FUNC_1(VAR_4);
    FUNC_1(VAR_2);

    FUNC_4(VAR_0, VAR_7->log, 0, "exit");

    for (VAR_8 = 0; VAR_7->modules[VAR_8]; VAR_8++) {
        if (VAR_7->modules[VAR_8]->exit_master) {
            VAR_7->modules[VAR_8]->exit_master(VAR_7);
        }
    }

    FUNC_3(VAR_7->pool);

    FUNC_0(0);
}
