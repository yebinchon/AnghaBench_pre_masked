
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int data; } ;
struct TYPE_10__ {TYPE_1__ binary; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_2__ val; } ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonbParseState ;
typedef scalar_t__ JsonbIteratorToken ;
typedef int JsonbIterator ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int **,TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_2 (int **,scalar_t__,TYPE_3__*) ;

JsonbValue *
FUNC_3(JsonbParseState **VAR_5, JsonbIteratorToken VAR_6,
      JsonbValue *VAR_7)
{
 JsonbIterator *VAR_8;
 JsonbValue *VAR_9 = ((void*)0);
 JsonbValue VAR_10;
 JsonbIteratorToken VAR_11;

 if (!VAR_7 || (VAR_6 != VAR_2 && VAR_6 != VAR_3) ||
  VAR_7->type != VAR_4)
 {

  return FUNC_2(VAR_5, VAR_6, VAR_7);
 }


 VAR_8 = FUNC_0(VAR_7->val.binary.data);
 while ((VAR_11 = FUNC_1(&VAR_8, &VAR_10, 0)) != VAR_1)
  VAR_9 = FUNC_2(VAR_5, VAR_11,
           VAR_11 < VAR_0 ? &VAR_10 : ((void*)0));

 return VAR_9;
}
