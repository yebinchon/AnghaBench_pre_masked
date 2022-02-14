
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_2__ {int Code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_11 ;

VOID
FUNC_2()
    {
    int VAR_12;
    VAR_4 = 0;
    for (VAR_12=0 ; VAR_12< VAR_7 ; VAR_12++)
        {
        if(VAR_1 == FUNC_0(VAR_3[VAR_12],VAR_0,0,0))
            VAR_4 |= VAR_11[VAR_12].Code;
        FUNC_1(VAR_3[VAR_12],VAR_9);
        }

    for (; VAR_12< VAR_6 ; VAR_12++)FUNC_1(VAR_3[VAR_12],VAR_9);
    for (VAR_12=0 ; VAR_12< 26 ; VAR_12++) FUNC_1(VAR_5[VAR_12],VAR_10);

    FUNC_1(VAR_2,VAR_10);
    FUNC_1(VAR_8,VAR_10);
    }
