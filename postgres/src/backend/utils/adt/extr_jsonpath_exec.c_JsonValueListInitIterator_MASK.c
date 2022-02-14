
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ list; int * singleton; } ;
struct TYPE_5__ {scalar_t__ list; int * next; int * value; } ;
typedef int JsonbValue ;
typedef TYPE_1__ JsonValueListIterator ;
typedef TYPE_2__ JsonValueList ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(const JsonValueList *VAR_1, JsonValueListIterator *VAR_2)
{
 if (VAR_1->singleton)
 {
  VAR_2->value = VAR_1->singleton;
  VAR_2->list = VAR_0;
  VAR_2->next = ((void*)0);
 }
 else if (VAR_1->list != VAR_0)
 {
  VAR_2->value = (JsonbValue *) FUNC_0(VAR_1->list);
  VAR_2->list = VAR_1->list;
  VAR_2->next = FUNC_1(VAR_1->list);
 }
 else
 {
  VAR_2->value = ((void*)0);
  VAR_2->list = VAR_0;
  VAR_2->next = ((void*)0);
 }
}
