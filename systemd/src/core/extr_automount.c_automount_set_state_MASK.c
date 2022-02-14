
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ state; } ;
typedef scalar_t__ AutomountState ;
typedef TYPE_1__ Automount ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int * VAR_2 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(Automount *VAR_3, AutomountState VAR_4) {
        AutomountState VAR_5;
        FUNC_2(VAR_3);

        if (VAR_3->state != VAR_4)
                FUNC_5(FUNC_1(VAR_3), 0);

        VAR_5 = VAR_3->state;
        VAR_3->state = VAR_4;

        if (VAR_4 != VAR_0)
                FUNC_4(VAR_3);

        if (!FUNC_0(VAR_4, VAR_1, VAR_0))
                FUNC_8(VAR_3);

        if (VAR_4 != VAR_5)
                FUNC_6(FUNC_1(VAR_3), "Changed %s -> %s", FUNC_3(VAR_5), FUNC_3(VAR_4));

        FUNC_7(FUNC_1(VAR_3), VAR_2[VAR_5], VAR_2[VAR_4], 0);
}
