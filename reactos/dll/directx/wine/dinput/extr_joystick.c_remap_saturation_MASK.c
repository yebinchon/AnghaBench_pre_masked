
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* props; } ;
struct TYPE_13__ {int dwData; } ;
struct TYPE_12__ {int lSaturation; } ;
struct TYPE_11__ {int lSaturation; } ;
typedef TYPE_2__ ObjProps ;
typedef TYPE_3__* LPCDIPROPDWORD ;
typedef TYPE_4__ JoystickGenericImpl ;


 int FUNC_0 (TYPE_4__*,int,TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(JoystickGenericImpl *VAR_0, int VAR_1, LPCDIPROPDWORD VAR_2)
{
    ObjProps VAR_3;
    FUNC_1(VAR_0, VAR_1, &VAR_3);

    VAR_3.lSaturation = VAR_2->dwData;

    FUNC_0(VAR_0, VAR_1, &VAR_3);


    VAR_0->props[VAR_1].lSaturation = VAR_2->dwData;
}
