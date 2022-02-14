
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int zval ;
struct TYPE_17__ {TYPE_2__* funcs; } ;
typedef TYPE_3__ zend_object_iterator ;
typedef int spl_sub_iterator ;
struct TYPE_18__ {int level; int in_iteration; TYPE_6__* beginIteration; int ce; TYPE_10__* iterators; TYPE_6__* endChildren; } ;
typedef TYPE_4__ spl_recursive_it_object ;
struct TYPE_15__ {scalar_t__ scope; } ;
struct TYPE_19__ {TYPE_1__ common; } ;
struct TYPE_16__ {int (* rewind ) (TYPE_3__*) ;} ;
struct TYPE_14__ {TYPE_3__* iterator; int state; int zobject; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (int *) ;
 TYPE_10__* FUNC_3 (TYPE_10__*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int ,TYPE_6__**,char*,int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(spl_recursive_it_object *VAR_3, zval *VAR_4)
{
 zend_object_iterator *VAR_5;

 FUNC_1(VAR_5, VAR_3);

 while (VAR_3->level) {
  VAR_5 = VAR_3->iterators[VAR_3->level].iterator;
  FUNC_7(VAR_5);
  FUNC_8(&VAR_3->iterators[VAR_3->level--].zobject);
  if (!FUNC_0(VAR_1) && (!VAR_3->endChildren || VAR_3->endChildren->common.scope != VAR_2)) {
   FUNC_6(FUNC_2(VAR_4), VAR_3->ce, &VAR_3->endChildren, "endchildren", ((void*)0));
  }
 }
 VAR_3->iterators = FUNC_3(VAR_3->iterators, sizeof(spl_sub_iterator));
 VAR_3->iterators[0].state = VAR_0;
 VAR_5 = VAR_3->iterators[0].iterator;
 if (VAR_5->funcs->rewind) {
  VAR_5->funcs->rewind(VAR_5);
 }
 if (!FUNC_0(VAR_1) && VAR_3->beginIteration && !VAR_3->in_iteration) {
  FUNC_6(FUNC_2(VAR_4), VAR_3->ce, &VAR_3->beginIteration, "beginIteration", ((void*)0));
 }
 VAR_3->in_iteration = 1;
 FUNC_4(VAR_3, VAR_4);
}
