
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int btree_recycle_count; int btree_recycle; } ;
struct TYPE_8__ {int prev; int next; } ;
typedef TYPE_1__ FreePageSpanLeader ;
typedef TYPE_2__ FreePageManager ;
typedef int FreePageBtree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,TYPE_1__*) ;
 char* FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ,TYPE_1__*) ;

__attribute__((used)) static FreePageBtree *
FUNC_6(FreePageManager *VAR_0)
{
 char *VAR_1 = FUNC_2(VAR_0);
 FreePageSpanLeader *VAR_2 = FUNC_3(VAR_1, VAR_0->btree_recycle);
 FreePageSpanLeader *VAR_3;

 FUNC_0(VAR_2 != ((void*)0));
 VAR_3 = FUNC_3(VAR_1, VAR_2->next);
 if (VAR_3 != ((void*)0))
  FUNC_4(VAR_3->prev, VAR_2->prev);
 FUNC_5(VAR_1, VAR_0->btree_recycle, VAR_3);
 FUNC_0(FUNC_1(VAR_1, VAR_2));
 VAR_0->btree_recycle_count--;
 return (FreePageBtree *) VAR_2;
}
