
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * value; scalar_t__ next; int list; } ;
typedef int JsonbValue ;
typedef TYPE_1__ JsonValueListIterator ;
typedef int JsonValueList ;


 int * FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static JsonbValue *
FUNC_2(const JsonValueList *VAR_0, JsonValueListIterator *VAR_1)
{
 JsonbValue *VAR_2 = VAR_1->value;

 if (VAR_1->next)
 {
  VAR_1->value = FUNC_0(VAR_1->next);
  VAR_1->next = FUNC_1(VAR_1->list, VAR_1->next);
 }
 else
 {
  VAR_1->value = ((void*)0);
 }

 return VAR_2;
}
