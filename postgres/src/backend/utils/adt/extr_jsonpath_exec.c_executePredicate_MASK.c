
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; } ;
typedef int JsonbValue ;
typedef int JsonValueListIterator ;
typedef TYPE_1__ JsonValueList ;
typedef scalar_t__ (* JsonPathPredicateCallback ) (int *,int *,int *,void*) ;
typedef int JsonPathItem ;
typedef int JsonPathExecResult ;
typedef int JsonPathExecContext ;
typedef scalar_t__ JsonPathBool ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,int *,int *,int,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static JsonPathBool
FUNC_5(JsonPathExecContext *VAR_3, JsonPathItem *VAR_4,
     JsonPathItem *VAR_5, JsonPathItem *VAR_6, JsonbValue *VAR_7,
     bool VAR_8, JsonPathPredicateCallback VAR_9,
     void *VAR_10)
{
 JsonPathExecResult VAR_11;
 JsonValueListIterator VAR_12;
 JsonValueList VAR_13 = {0};
 JsonValueList VAR_14 = {0};
 JsonbValue *VAR_15;
 bool VAR_16 = 0;
 bool VAR_17 = 0;


 VAR_11 = FUNC_2(VAR_3, VAR_5, VAR_7, 1, &VAR_13);
 if (FUNC_3(VAR_11))
  return VAR_2;

 if (VAR_6)
 {

  VAR_11 = FUNC_2(VAR_3, VAR_6, VAR_7,
            VAR_8, &VAR_14);
  if (FUNC_3(VAR_11))
   return VAR_2;
 }

 FUNC_0(&VAR_13, &VAR_12);
 while ((VAR_15 = FUNC_1(&VAR_13, &VAR_12)))
 {
  JsonValueListIterator VAR_18;
  JsonbValue *VAR_19;
  bool VAR_20 = 1;

  FUNC_0(&VAR_14, &VAR_18);
  if (VAR_6)
   VAR_19 = FUNC_1(&VAR_14, &VAR_18);
  else
   VAR_19 = ((void*)0);


  while (VAR_6 ? (VAR_19 != ((void*)0)) : VAR_20)
  {
   JsonPathBool VAR_21 = VAR_9(VAR_4, VAR_15, VAR_19, VAR_10);

   if (VAR_21 == VAR_2)
   {
    if (FUNC_4(VAR_3))
     return VAR_2;

    VAR_16 = 1;
   }
   else if (VAR_21 == VAR_1)
   {
    if (!FUNC_4(VAR_3))
     return VAR_1;

    VAR_17 = 1;
   }

   VAR_20 = 0;
   if (VAR_6)
    VAR_19 = FUNC_1(&VAR_14, &VAR_18);
  }
 }

 if (VAR_17)
  return VAR_1;

 if (VAR_16)
  return VAR_2;

 return VAR_0;
}
