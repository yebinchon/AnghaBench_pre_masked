
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zend_ulong ;
struct TYPE_7__ {struct TYPE_7__** branches; } ;
typedef TYPE_1__ phpdbg_btree_branch ;
struct TYPE_8__ {int depth; int persistent; TYPE_1__* branch; int count; } ;
typedef TYPE_2__ phpdbg_btree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(phpdbg_btree *VAR_2, zend_ulong VAR_3) {
 int VAR_4 = VAR_2->depth;
 phpdbg_btree_branch *VAR_5 = VAR_2->branch;
 int VAR_6 = -1, VAR_7;
 phpdbg_btree_branch *VAR_8 = ((void*)0);

 goto check_branch_existence;
 do {
  if (VAR_5->branches[0] && VAR_5->branches[1]) {
   VAR_8 = VAR_5;
   VAR_6 = VAR_4;
   VAR_7 = (VAR_3 >> VAR_4) % 2;
  }
  VAR_5 = VAR_5->branches[(VAR_3 >> VAR_4) % 2];

check_branch_existence:
  if (VAR_5 == ((void*)0)) {
   return VAR_0;
  }
 } while (VAR_4--);

 VAR_2->count--;

 if (VAR_6 == -1) {
  FUNC_1(VAR_2->branch, VAR_2->persistent);
  VAR_2->branch = ((void*)0);
 } else {
  if (VAR_8->branches[VAR_7] == VAR_8 + 1) {
   phpdbg_btree_branch *VAR_9 = VAR_8->branches[!VAR_7];

   FUNC_0(VAR_8 + 1, VAR_8->branches[!VAR_7], (VAR_6 + 1) * sizeof(phpdbg_btree_branch));
   FUNC_1(VAR_8->branches[!VAR_7], VAR_2->persistent);
   VAR_8->branches[!VAR_7] = VAR_8 + 1;

   VAR_5 = VAR_8->branches[!VAR_7];
   for (VAR_4 = VAR_6; VAR_4--;) {
    VAR_5 = (VAR_5->branches[VAR_5->branches[1] == ++VAR_9] = VAR_8 + VAR_6 - VAR_4 + 1);
   }
  } else {
   FUNC_1(VAR_8->branches[VAR_7], VAR_2->persistent);
  }

  VAR_8->branches[VAR_7] = ((void*)0);
 }

 return VAR_1;
}
