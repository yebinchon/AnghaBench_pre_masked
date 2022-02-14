
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* dlgw; } ;
struct TYPE_14__ {TYPE_2__ u; scalar_t__ unicode; } ;
typedef TYPE_3__ pagesetup_data ;
struct TYPE_15__ {scalar_t__ dmDriverExtra; scalar_t__ dmSize; } ;
struct TYPE_12__ {int hDevMode; } ;
typedef TYPE_4__ DEVMODEW ;
typedef int DEVMODEA ;


 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 () ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*,scalar_t__) ;

__attribute__((used)) static DEVMODEW *FUNC_6(const pagesetup_data *VAR_0)
{
    DEVMODEW *VAR_1 = FUNC_2(VAR_0->u.dlgw->hDevMode);
    DEVMODEW *VAR_2;

    if(VAR_0->unicode)
    {


        VAR_2 = FUNC_4(FUNC_1(), 0, VAR_1->dmSize + VAR_1->dmDriverExtra);
        FUNC_5(VAR_2, VAR_1, VAR_1->dmSize + VAR_1->dmDriverExtra);
    }
    else
        VAR_2 = FUNC_0((DEVMODEA *)VAR_1);

    FUNC_3(VAR_0->u.dlgw->hDevMode);
    return VAR_2;
}
