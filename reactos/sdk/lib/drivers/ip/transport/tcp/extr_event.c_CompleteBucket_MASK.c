
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int AssociatedEndpoint; } ;
typedef TYPE_1__* PTDI_BUCKET ;
typedef int PCONNECTION_ENDPOINT ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int (*) (TYPE_1__*),TYPE_1__*) ;
 int FUNC_2 (int ) ;

VOID
FUNC_3(PCONNECTION_ENDPOINT VAR_0, PTDI_BUCKET VAR_1, const BOOLEAN VAR_2)
{
    FUNC_2(VAR_0);
    VAR_1->AssociatedEndpoint = VAR_0;
    if (VAR_2)
    {
        FUNC_0(VAR_1);
    }
    else
    {
        FUNC_1(FUNC_0, VAR_1);
    }
}
