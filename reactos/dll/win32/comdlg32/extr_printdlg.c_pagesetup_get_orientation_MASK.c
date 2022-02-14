
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


struct TYPE_13__ {TYPE_1__* dlgw; } ;
struct TYPE_18__ {TYPE_2__ u; scalar_t__ unicode; } ;
typedef TYPE_7__ pagesetup_data ;
typedef int WORD ;
struct TYPE_16__ {int dmOrientation; } ;
struct TYPE_17__ {TYPE_5__ s1; } ;
struct TYPE_20__ {TYPE_6__ u1; } ;
struct TYPE_14__ {int dmOrientation; } ;
struct TYPE_15__ {TYPE_3__ s1; } ;
struct TYPE_19__ {TYPE_4__ u1; } ;
struct TYPE_12__ {int hDevMode; } ;
typedef TYPE_8__ DEVMODEW ;
typedef TYPE_9__ DEVMODEA ;


 TYPE_8__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static WORD FUNC_2(const pagesetup_data *VAR_0)
{
    DEVMODEW *VAR_1 = FUNC_0(VAR_0->u.dlgw->hDevMode);
    WORD VAR_2;

    if(VAR_0->unicode)
        VAR_2 = VAR_1->u1.s1.dmOrientation;
    else
    {
        DEVMODEA *VAR_3 = (DEVMODEA *)VAR_1;
        VAR_2 = VAR_3->u1.s1.dmOrientation;
    }
    FUNC_1(VAR_0->u.dlgw->hDevMode);
    return VAR_2;
}
