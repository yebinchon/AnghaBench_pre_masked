
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ idx; } ;
typedef TYPE_1__ phpdbg_btree_result ;
struct TYPE_7__ {scalar_t__ cur; scalar_t__ end; int tree; } ;
typedef TYPE_2__ phpdbg_btree_position ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;

phpdbg_btree_result *FUNC_1(phpdbg_btree_position *VAR_0) {
 phpdbg_btree_result *VAR_1 = FUNC_0(VAR_0->tree, VAR_0->cur);

 if (VAR_1 == ((void*)0) || VAR_1->idx < VAR_0->end) {
  return ((void*)0);
 }

 VAR_0->cur = VAR_1->idx - 1;

 return VAR_1;
}
