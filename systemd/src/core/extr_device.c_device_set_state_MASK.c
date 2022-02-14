
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
typedef scalar_t__ DeviceState ;
typedef TYPE_1__ Device ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int * VAR_1 ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(Device *VAR_2, DeviceState VAR_3) {
        DeviceState VAR_4;
        FUNC_1(VAR_2);

        if (VAR_2->state != VAR_3)
                FUNC_2(FUNC_0(VAR_2), 0);

        VAR_4 = VAR_2->state;
        VAR_2->state = VAR_3;

        if (VAR_3 == VAR_0)
                FUNC_4(VAR_2);

        if (VAR_3 != VAR_4)
                FUNC_5(FUNC_0(VAR_2), "Changed %s -> %s", FUNC_3(VAR_4), FUNC_3(VAR_3));

        FUNC_6(FUNC_0(VAR_2), VAR_1[VAR_4], VAR_1[VAR_3], 0);
}
