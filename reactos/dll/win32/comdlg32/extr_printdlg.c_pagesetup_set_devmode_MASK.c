
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* dlgw; } ;
struct TYPE_13__ {TYPE_2__ u; scalar_t__ unicode; } ;
typedef TYPE_3__ pagesetup_data ;
struct TYPE_15__ {scalar_t__ dmDriverExtra; scalar_t__ dmSize; } ;
struct TYPE_14__ {scalar_t__ dmDriverExtra; scalar_t__ dmSize; } ;
struct TYPE_11__ {int hDevMode; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_4__ DEVMODEW ;
typedef TYPE_5__ DEVMODEA ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,TYPE_5__*) ;
 TYPE_5__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (void*,void*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(pagesetup_data *VAR_1, DEVMODEW *VAR_2)
{
    DEVMODEA *VAR_3 = ((void*)0);
    void *VAR_4, *VAR_5;
    DWORD VAR_6;

    if(VAR_1->unicode)
    {
        VAR_6 = VAR_2->dmSize + VAR_2->dmDriverExtra;
        VAR_4 = VAR_2;
    }
    else
    {
        VAR_3 = FUNC_6(VAR_2);
        VAR_6 = VAR_3->dmSize + VAR_3->dmDriverExtra;
        VAR_4 = VAR_3;
    }

    if(VAR_1->u.dlgw->hDevMode)
        VAR_1->u.dlgw->hDevMode = FUNC_3(VAR_1->u.dlgw->hDevMode, VAR_6,
                                               VAR_0);
    else
        VAR_1->u.dlgw->hDevMode = FUNC_1(VAR_0, VAR_6);

    VAR_5 = FUNC_2(VAR_1->u.dlgw->hDevMode);
    FUNC_7(VAR_5, VAR_4, VAR_6);
    FUNC_4(VAR_1->u.dlgw->hDevMode);
    FUNC_5(FUNC_0(), 0, VAR_3);
}
