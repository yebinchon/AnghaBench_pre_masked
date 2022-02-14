
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* dlgw; } ;
struct TYPE_18__ {TYPE_4__ u; scalar_t__ unicode; } ;
typedef TYPE_7__ pagesetup_data ;
typedef scalar_t__ WORD ;
struct TYPE_12__ {scalar_t__ dmOrientation; } ;
struct TYPE_13__ {TYPE_1__ s1; } ;
struct TYPE_20__ {TYPE_2__ u1; } ;
struct TYPE_17__ {scalar_t__ dmOrientation; } ;
struct TYPE_16__ {TYPE_6__ s1; } ;
struct TYPE_19__ {TYPE_5__ u1; } ;
struct TYPE_14__ {int hDevMode; } ;
typedef TYPE_8__ DEVMODEW ;
typedef TYPE_9__ DEVMODEA ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_8__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(pagesetup_data *VAR_2, WORD VAR_3)
{
    DEVMODEW *VAR_4 = FUNC_0(VAR_2->u.dlgw->hDevMode);

    FUNC_2(VAR_3 == VAR_1 || VAR_3 == VAR_0);

    if(VAR_2->unicode)
        VAR_4->u1.s1.dmOrientation = VAR_3;
    else
    {
        DEVMODEA *VAR_5 = (DEVMODEA *)VAR_4;
        VAR_5->u1.s1.dmOrientation = VAR_3;
    }
    FUNC_1(VAR_2->u.dlgw->hDevMode);
}
