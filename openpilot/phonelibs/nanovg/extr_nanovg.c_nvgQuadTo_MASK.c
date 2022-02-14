
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float commandx; float commandy; } ;
typedef TYPE_1__ NVGcontext ;


 float VAR_0 ;
 int FUNC_0 (float*) ;
 int FUNC_1 (TYPE_1__*,float*,int ) ;

void FUNC_2(NVGcontext* VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5)
{
    float VAR_6 = VAR_1->commandx;
    float VAR_7 = VAR_1->commandy;
    float VAR_8[] = { VAR_0,
        VAR_6 + 2.0f/3.0f*(VAR_2 - VAR_6), VAR_7 + 2.0f/3.0f*(VAR_3 - VAR_7),
        VAR_4 + 2.0f/3.0f*(VAR_2 - VAR_4), VAR_5 + 2.0f/3.0f*(VAR_3 - VAR_5),
        VAR_4, VAR_5 };
    FUNC_1(VAR_1, VAR_8, FUNC_0(VAR_8));
}
