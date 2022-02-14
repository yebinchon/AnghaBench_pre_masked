
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; struct TYPE_7__* contents; TYPE_1__ ILockBytes_iface; } ;
typedef TYPE_2__ TestLockBytes ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,TYPE_2__*,...) ;

__attribute__((used)) static void FUNC_3(TestLockBytes *VAR_1)
{
    FUNC_2(VAR_1->ILockBytes_iface.lpVtbl == &VAR_0, "test lock bytes %p deleted with incorrect vtable\n", VAR_1);
    FUNC_2(VAR_1->ref == 1, "test lock bytes %p deleted with %i references instead of 1\n", VAR_1, VAR_1->ref);
    FUNC_1(FUNC_0(), 0, VAR_1->contents);
    FUNC_1(FUNC_0(), 0, VAR_1);
}
