
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ref; } ;
typedef TYPE_1__ ref_counted_vtbl ;
typedef int IUnknownVtbl ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_5(IUnknownVtbl *VAR_2)
{
    ref_counted_vtbl *VAR_3 = (ref_counted_vtbl*)((DWORD *)VAR_2 - 1);

    FUNC_0(&VAR_1);
    VAR_3->ref--;
    FUNC_4("ref now %d\n", VAR_3->ref);
    if(VAR_3->ref == 0 && VAR_3 != VAR_0)
    {
        FUNC_4("... and we're not current so free'ing\n");
        FUNC_2(FUNC_1(), 0, VAR_3);
    }
    FUNC_3(&VAR_1);
}
