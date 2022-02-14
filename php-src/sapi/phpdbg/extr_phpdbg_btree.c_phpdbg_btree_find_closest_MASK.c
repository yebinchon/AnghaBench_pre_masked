
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_ulong ;
typedef int phpdbg_btree_result ;
struct TYPE_4__ {int* branches; int result; } ;
typedef TYPE_1__ phpdbg_btree_branch ;
struct TYPE_5__ {int depth; TYPE_1__* branch; } ;
typedef TYPE_2__ phpdbg_btree ;


 int FUNC_0 (int) ;

phpdbg_btree_result *FUNC_1(phpdbg_btree *VAR_0, zend_ulong VAR_1) {
 phpdbg_btree_branch *VAR_2 = VAR_0->branch;
 int VAR_3 = VAR_0->depth - 1, VAR_4 = -1;

 if (VAR_2 == ((void*)0)) {
  return ((void*)0);
 }


 do {
  if ((VAR_1 >> VAR_3) % 2 == 0) {
   if (VAR_2->branches[0]) {
    FUNC_0(0);

   } else {

    if (VAR_4 == -1) {

     return ((void*)0);
    }

    VAR_2 = VAR_0->branch;
    VAR_3 = VAR_0->depth - 1;

    do {
     FUNC_0((VAR_1 >> VAR_3) % 2 == 1 && VAR_2->branches[1]);
    } while (--VAR_3 > VAR_4);

    FUNC_0(0);

    while (VAR_3--) {
     FUNC_0(VAR_2->branches[1]);
    }
    break;
   }

  } else {
   if (VAR_2->branches[1]) {
    if (VAR_2->branches[0]) {
     VAR_4 = VAR_3;
    }
    FUNC_0(1);
   } else {
    FUNC_0(0);
    while (VAR_3--) {
     FUNC_0(VAR_2->branches[1]);
    }
    break;
   }
  }
 } while (VAR_3--);

 return &VAR_2->result;
}
