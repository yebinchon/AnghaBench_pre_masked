
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* props; } ;
struct TYPE_7__ {int lSaturation; int lDeadZone; int lMax; int lDevMax; int lMin; int lDevMin; } ;
struct TYPE_6__ {int lSaturation; int lDeadZone; int lMax; int lMin; } ;
typedef TYPE_2__ ObjProps ;
typedef TYPE_3__ JoystickGenericImpl ;



__attribute__((used)) static void FUNC_0(JoystickGenericImpl *VAR_0, int VAR_1, ObjProps *VAR_2)
{


    VAR_2->lDevMin = VAR_2->lMin = VAR_0->props[VAR_1].lMin;
    VAR_2->lDevMax = VAR_2->lMax = VAR_0->props[VAR_1].lMax;

    VAR_2->lDeadZone = VAR_0->props[VAR_1].lDeadZone;
    VAR_2->lSaturation = VAR_0->props[VAR_1].lSaturation;
}
