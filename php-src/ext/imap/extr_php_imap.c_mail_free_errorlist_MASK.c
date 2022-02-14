
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_5__ {struct TYPE_5__* next; TYPE_1__ text; } ;
typedef TYPE_2__ ERRORLIST ;


 int FUNC_0 (void**) ;

void FUNC_1(ERRORLIST **VAR_0)
{
 if (*VAR_0) {
  if ((*VAR_0)->text.data) {
   FUNC_0((void **) &(*VAR_0)->text.data);
  }
  FUNC_1 (&(*VAR_0)->next);
  FUNC_0((void **) VAR_0);
 }
}
