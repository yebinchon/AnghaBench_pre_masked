
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int* buf; } ;
typedef TYPE_1__ zend_worklist_stack ;


 int FUNC_0 (size_t) ;

__attribute__((used)) static inline int FUNC_1(zend_worklist_stack *VAR_0)
{
 FUNC_0(VAR_0->len);
 return VAR_0->buf[--VAR_0->len];
}
