
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_ulong ;
struct TYPE_4__ {int ptr; scalar_t__ idx; } ;
struct TYPE_5__ {TYPE_1__ result; struct TYPE_5__** branches; } ;
typedef TYPE_2__ phpdbg_btree_branch ;


 int FUNC_0 (int ,char*,void*,int ) ;
 int VAR_0 ;

void FUNC_1(phpdbg_btree_branch *VAR_1, zend_ulong VAR_2) {
 if (VAR_1) {
  if (VAR_2--) {
   FUNC_1(VAR_1->branches[0], VAR_2);
   FUNC_1(VAR_1->branches[1], VAR_2);
  } else {
   FUNC_0(VAR_0, "%p: %d\n", (void *) VAR_1->result.idx, VAR_1->result.ptr);
  }
 }
}
