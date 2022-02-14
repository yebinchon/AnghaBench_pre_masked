
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ reverted; } ;
struct TYPE_4__ {int ParentListEntry; TYPE_3__ base; int * parentStorage; } ;
typedef TYPE_1__ StorageInternalImpl ;
typedef int StorageBaseImpl ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( StorageBaseImpl *VAR_1 )
{
  StorageInternalImpl* VAR_2 = (StorageInternalImpl*) VAR_1;

  if (!VAR_2->base.reverted)
  {
    FUNC_1("Storage invalidated (stg=%p)\n", VAR_2);

    VAR_2->base.reverted = VAR_0;

    VAR_2->parentStorage = ((void*)0);

    FUNC_0(&VAR_2->base);

    FUNC_2(&VAR_2->ParentListEntry);
  }
}
