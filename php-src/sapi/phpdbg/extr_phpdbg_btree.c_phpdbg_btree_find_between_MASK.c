
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* zend_ulong ;
struct TYPE_3__ {void* cur; void* end; int * tree; } ;
typedef TYPE_1__ phpdbg_btree_position ;
typedef int phpdbg_btree ;



phpdbg_btree_position FUNC_0(phpdbg_btree *VAR_0, zend_ulong VAR_1, zend_ulong VAR_2) {
 phpdbg_btree_position VAR_3;

 VAR_3.tree = VAR_0;
 VAR_3.end = VAR_1;
 VAR_3.cur = VAR_2;

 return VAR_3;
}
