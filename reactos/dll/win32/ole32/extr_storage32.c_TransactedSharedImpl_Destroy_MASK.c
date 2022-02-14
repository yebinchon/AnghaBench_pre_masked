
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* scratch; TYPE_1__* transactedParent; int base; } ;
typedef TYPE_4__ TransactedSharedImpl ;
struct TYPE_7__ {int IStorage_iface; } ;
struct TYPE_8__ {TYPE_2__ base; } ;
struct TYPE_6__ {int IStorage_iface; } ;
typedef int StorageBaseImpl ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( StorageBaseImpl *VAR_0)
{
  TransactedSharedImpl* VAR_1 = (TransactedSharedImpl*) VAR_0;

  FUNC_3(&VAR_1->base);
  FUNC_2(&VAR_1->transactedParent->IStorage_iface);
  FUNC_2(&VAR_1->scratch->base.IStorage_iface);
  FUNC_1(FUNC_0(), 0, VAR_1);
}
