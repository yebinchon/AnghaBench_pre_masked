
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hDirectDrawLocal; } ;
struct TYPE_4__ {TYPE_3__* pUnknown6BC; } ;
typedef TYPE_1__* LPD3D9_DEVICEDATA ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(LPD3D9_DEVICEDATA VAR_1)
{
    FUNC_2(VAR_1->pUnknown6BC->hDirectDrawLocal);

    FUNC_1(FUNC_0(), 0, VAR_1->pUnknown6BC);
    VAR_1->pUnknown6BC = ((void*)0);

    --VAR_0;
}
