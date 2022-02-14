
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int btree_recycle_count; int btree_recycle; } ;
struct TYPE_7__ {int npages; int prev; int next; int magic; } ;
typedef int Size ;
typedef TYPE_1__ FreePageSpanLeader ;
typedef TYPE_2__ FreePageManager ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 char* FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(FreePageManager *VAR_1, Size VAR_2)
{
 char *VAR_3 = FUNC_1(VAR_1);
 FreePageSpanLeader *VAR_4 = FUNC_2(VAR_3, VAR_1->btree_recycle);
 FreePageSpanLeader *VAR_5;

 VAR_5 = (FreePageSpanLeader *) FUNC_0(VAR_3, VAR_2);
 VAR_5->magic = VAR_0;
 VAR_5->npages = 1;
 FUNC_3(VAR_3, VAR_5->next, VAR_4);
 FUNC_3(VAR_3, VAR_5->prev, (FreePageSpanLeader *) ((void*)0));
 if (VAR_4 != ((void*)0))
  FUNC_3(VAR_3, VAR_4->prev, VAR_5);
 FUNC_3(VAR_3, VAR_1->btree_recycle, VAR_5);
 VAR_1->btree_recycle_count++;
}
