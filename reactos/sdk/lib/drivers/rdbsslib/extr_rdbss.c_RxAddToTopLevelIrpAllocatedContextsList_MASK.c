
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {scalar_t__ Signature; int ListEntry; int Flags; } ;
typedef TYPE_1__* PRX_TOPLEVELIRP_CONTEXT ;
typedef int KIRQL ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

VOID
FUNC_6(
    PRX_TOPLEVELIRP_CONTEXT VAR_4)
{
    KIRQL VAR_5;

    FUNC_2("RxAddToTopLevelIrpAllocatedContextsList(%p)\n", VAR_4);

    FUNC_0(VAR_4->Signature == VAR_1);
    FUNC_0(FUNC_1(VAR_4->Flags, VAR_0));

    FUNC_4(&VAR_3, &VAR_5);
    FUNC_3(&VAR_2, &VAR_4->ListEntry);
    FUNC_5(&VAR_3, VAR_5);
}
