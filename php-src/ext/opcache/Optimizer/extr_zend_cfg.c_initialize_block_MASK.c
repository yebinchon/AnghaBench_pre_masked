
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int predecessor_offset; int idom; int loop_header; int level; int children; int next_child; scalar_t__ predecessors_count; scalar_t__ successors_count; int successors_storage; int successors; scalar_t__ flags; } ;
typedef TYPE_1__ zend_basic_block ;



__attribute__((used)) static void FUNC_0(zend_basic_block *VAR_0) {
 VAR_0->flags = 0;
 VAR_0->successors = VAR_0->successors_storage;
 VAR_0->successors_count = 0;
 VAR_0->predecessors_count = 0;
 VAR_0->predecessor_offset = -1;
 VAR_0->idom = -1;
 VAR_0->loop_header = -1;
 VAR_0->level = -1;
 VAR_0->children = -1;
 VAR_0->next_child = -1;
}
