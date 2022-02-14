
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_3__ {int id; int manager; } ;
typedef int Scope ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *,char*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*,int ) ;
 int FUNC_6 (int *,int *) ;

int FUNC_7(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        Scope *VAR_5 = VAR_3;
        int VAR_6;

        FUNC_1(VAR_2);
        FUNC_1(VAR_5);

        VAR_6 = FUNC_3(FUNC_0(VAR_5), VAR_2, "stop", VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_2(FUNC_0(VAR_5)->manager, VAR_2, VAR_4);
        if (VAR_6 < 0)
                return VAR_6;
        if (VAR_6 == 0)
                return 1;

        VAR_6 = FUNC_4(VAR_5);
        if (VAR_6 == -VAR_1)
                return FUNC_5(VAR_4, VAR_0, "Scope %s is not running, cannot abandon.", FUNC_0(VAR_5)->id);
        if (VAR_6 < 0)
                return VAR_6;

        return FUNC_6(VAR_2, ((void*)0));
}
