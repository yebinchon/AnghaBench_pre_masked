
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; scalar_t__ capacity; int* buf; } ;
typedef TYPE_1__ zend_worklist_stack ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(zend_worklist_stack *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0->len < VAR_0->capacity);
 VAR_0->buf[VAR_0->len++] = VAR_1;
}
