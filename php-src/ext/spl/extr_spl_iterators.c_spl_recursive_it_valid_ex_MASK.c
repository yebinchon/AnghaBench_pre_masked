
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
struct TYPE_9__ {TYPE_1__* funcs; } ;
typedef TYPE_3__ zend_object_iterator ;
struct TYPE_10__ {int level; scalar_t__ in_iteration; scalar_t__ endIteration; int ce; TYPE_2__* iterators; } ;
typedef TYPE_4__ spl_recursive_it_object ;
struct TYPE_8__ {TYPE_3__* iterator; } ;
struct TYPE_7__ {scalar_t__ (* valid ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,scalar_t__*,char*,int *) ;

__attribute__((used)) static int FUNC_3(spl_recursive_it_object *VAR_2, zval *VAR_3)
{
 zend_object_iterator *VAR_4;
 int VAR_5 = VAR_2->level;

 if(!VAR_2->iterators) {
  return VAR_0;
 }
 while (VAR_5 >=0) {
  VAR_4 = VAR_2->iterators[VAR_5].iterator;
  if (VAR_4->funcs->valid(VAR_4) == VAR_1) {
   return VAR_1;
  }
  VAR_5--;
 }
 if (VAR_2->endIteration && VAR_2->in_iteration) {
  FUNC_2(FUNC_0(VAR_3), VAR_2->ce, &VAR_2->endIteration, "endIteration", ((void*)0));
 }
 VAR_2->in_iteration = 0;
 return VAR_0;
}
