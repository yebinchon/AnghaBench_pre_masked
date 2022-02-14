
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_13__ {int len; TYPE_2__** path; } ;
struct TYPE_10__ {scalar_t__ min; int max; } ;
struct TYPE_12__ {scalar_t__ rb_max_addr; scalar_t__ _size; TYPE_1__ meta; } ;
struct TYPE_11__ {struct TYPE_11__** child; } ;
typedef TYPE_2__ RBNode ;
typedef TYPE_3__ RAnalFunction ;
typedef TYPE_4__ FcnTreeIter ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static RBNode *FUNC_1(FcnTreeIter *VAR_0, RBNode *VAR_1, ut64 VAR_2, ut64 VAR_3) {
 RAnalFunction *VAR_4 = FUNC_0 (VAR_1), *VAR_5;
 RBNode *VAR_6;
 for (;;) {
  if ((VAR_6 = VAR_1->child[0]) && (VAR_5 = FUNC_0 (VAR_6), VAR_2 <= VAR_5->rb_max_addr)) {
   VAR_0->path[VAR_0->len++] = VAR_1;
   VAR_1 = VAR_6;
   VAR_4 = VAR_5;
   continue;
  }
  if (VAR_4->meta.min <= VAR_3 - 1) {
   if (VAR_2 <= VAR_4->meta.min + (VAR_4->_size == 0 ? 0 : (VAR_4->meta.max - VAR_4->meta.min - 1))) {
    return VAR_1;
   }
   if ((VAR_6 = VAR_1->child[1])) {
    VAR_1 = VAR_6;
    VAR_4 = FUNC_0 (VAR_6);
    if (VAR_2 <= VAR_4->rb_max_addr) {
     continue;
    }
   }
  }
  return ((void*)0);
 }
}
