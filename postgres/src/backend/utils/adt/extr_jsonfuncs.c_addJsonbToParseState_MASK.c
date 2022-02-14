
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int root; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_11__ {TYPE_1__ contVal; } ;
typedef TYPE_1__ JsonbValue ;
typedef TYPE_2__ JsonbParseState ;
typedef scalar_t__ JsonbIteratorToken ;
typedef int JsonbIterator ;
typedef TYPE_3__ Jsonb ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,TYPE_1__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*) ;


 int FUNC_5 (TYPE_2__**,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(JsonbParseState **VAR_5, Jsonb *VAR_6)
{
 JsonbIterator *VAR_7;
 JsonbValue *VAR_8 = &(*VAR_5)->contVal;
 JsonbValue VAR_9;
 JsonbIteratorToken VAR_10;

 VAR_7 = FUNC_2(&VAR_6->root);

 FUNC_0(VAR_8->type == 129 || VAR_8->type == 128);

 if (FUNC_1(VAR_6))
 {
  (void) FUNC_3(&VAR_7, &VAR_9, 0);
  FUNC_0(VAR_9.type == 129);
  (void) FUNC_3(&VAR_7, &VAR_9, 0);

  switch (VAR_8->type)
  {
   case 129:
    (void) FUNC_5(VAR_5, VAR_2, &VAR_9);
    break;
   case 128:
    (void) FUNC_5(VAR_5, VAR_4, &VAR_9);
    break;
   default:
    FUNC_4(VAR_0, "unexpected parent of nested structure");
  }
 }
 else
 {
  while ((VAR_10 = FUNC_3(&VAR_7, &VAR_9, 0)) != VAR_1)
  {
   if (VAR_10 == VAR_3 || VAR_10 == VAR_4 || VAR_10 == VAR_2)
    (void) FUNC_5(VAR_5, VAR_10, &VAR_9);
   else
    (void) FUNC_5(VAR_5, VAR_10, ((void*)0));
  }
 }

}
