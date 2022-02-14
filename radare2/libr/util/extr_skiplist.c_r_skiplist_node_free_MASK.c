
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* freefn ) (scalar_t__) ;} ;
struct TYPE_6__ {struct TYPE_6__* forward; scalar_t__ data; } ;
typedef TYPE_1__ RSkipListNode ;
typedef TYPE_2__ RSkipList ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2 (RSkipList *VAR_0, RSkipListNode *VAR_1) {
 if (VAR_1) {
  if (VAR_0->freefn && VAR_1->data) {
   VAR_0->freefn (VAR_1->data);
  }
  FUNC_0 (VAR_1->forward);
  FUNC_0 (VAR_1);
 }
}
