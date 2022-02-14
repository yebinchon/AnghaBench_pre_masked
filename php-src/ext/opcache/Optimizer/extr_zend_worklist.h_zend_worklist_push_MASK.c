
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int capacity; } ;
struct TYPE_4__ {TYPE_2__ stack; int visited; } ;
typedef TYPE_1__ zend_worklist ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static inline int FUNC_4(zend_worklist *VAR_0, int VAR_1)
{
 FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->stack.capacity);

 if (FUNC_1(VAR_0->visited, VAR_1)) {
  return 0;
 }

 FUNC_2(VAR_0->visited, VAR_1);
 FUNC_3(&VAR_0->stack, VAR_1);
 return 1;
}
