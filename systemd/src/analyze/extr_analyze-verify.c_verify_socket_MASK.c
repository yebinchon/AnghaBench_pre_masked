
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ type; int id; } ;
typedef TYPE_1__ Unit ;
struct TYPE_13__ {scalar_t__ load_state; int id; } ;
struct TYPE_12__ {int service; } ;
typedef int Service ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_1__*) ;
 TYPE_8__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,int ) ;
 int FUNC_7 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int,char*) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_10(Unit *VAR_3) {
        int VAR_4;

        FUNC_5(VAR_3);

        if (VAR_3->type != VAR_2)
                return 0;




        VAR_4 = FUNC_9(FUNC_1(VAR_3));
        if (VAR_4 < 0)
                return FUNC_8(VAR_3, VAR_4, "Socket cannot be started, failed to create instance: %m");


        if (FUNC_4(FUNC_1(VAR_3)->service)) {
                Service *VAR_5;

                VAR_5 = FUNC_0(FUNC_3(FUNC_1(VAR_3)->service));
                FUNC_6(VAR_3, "Using %s", FUNC_2(VAR_5)->id);

                if (FUNC_2(VAR_5)->load_state != VAR_1) {
                        FUNC_7(VAR_3, "Service %s not loaded, %s cannot be started.", FUNC_2(VAR_5)->id, VAR_3->id);
                        return -VAR_0;
                }
        }

        return 0;
}
