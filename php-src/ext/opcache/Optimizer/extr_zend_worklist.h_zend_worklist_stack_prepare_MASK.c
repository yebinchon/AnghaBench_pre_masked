
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf; int capacity; scalar_t__ len; } ;
typedef TYPE_1__ zend_worklist_stack ;
typedef int zend_arena ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int **,int,int) ;

__attribute__((used)) static inline int FUNC_2(zend_arena **VAR_1, zend_worklist_stack *VAR_2, int VAR_3)
{
 FUNC_0(VAR_3 >= 0);

 VAR_2->buf = (int*)FUNC_1(VAR_1, sizeof(*VAR_2->buf), VAR_3);
 VAR_2->len = 0;
 VAR_2->capacity = VAR_3;

 return VAR_0;
}
