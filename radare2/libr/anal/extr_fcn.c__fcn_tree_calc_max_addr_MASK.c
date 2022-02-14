
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int min; int max; } ;
struct TYPE_10__ {int rb_max_addr; scalar_t__ _size; TYPE_1__ meta; } ;
struct TYPE_9__ {struct TYPE_9__** child; } ;
typedef TYPE_2__ RBNode ;
typedef TYPE_3__ RAnalFunction ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(RBNode *VAR_0) {
 int VAR_1;
 RAnalFunction *VAR_2 = FUNC_0 (VAR_0);
 FUNC_1 (VAR_2);
 VAR_2->rb_max_addr = VAR_2->meta.min + (VAR_2->_size == 0 ? 0 : (VAR_2->meta.max - VAR_2->meta.min - 1));
 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  if (VAR_0->child[VAR_1]) {
   RAnalFunction *VAR_3 = FUNC_0 (VAR_0->child[VAR_1]);
   if (VAR_3->rb_max_addr > VAR_2->rb_max_addr) {
    VAR_2->rb_max_addr = VAR_3->rb_max_addr;
   }
  }
 }
}
