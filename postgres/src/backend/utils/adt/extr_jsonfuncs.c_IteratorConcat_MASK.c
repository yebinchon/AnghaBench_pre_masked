
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int isScalar; } ;
typedef int JsonbValue ;
typedef int JsonbParseState ;
typedef scalar_t__ JsonbIteratorToken ;
typedef TYPE_1__ JsonbIterator ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__**,int *,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int **,scalar_t__,int *) ;

__attribute__((used)) static JsonbValue *
FUNC_6(JsonbIterator **VAR_8, JsonbIterator **VAR_9,
      JsonbParseState **VAR_10)
{
 JsonbValue VAR_11,
    VAR_12,
      *VAR_13 = ((void*)0);
 JsonbIteratorToken VAR_14,
    VAR_15,
    VAR_16,
    VAR_17;

 VAR_14 = VAR_16 = FUNC_1(VAR_8, &VAR_11, 0);
 VAR_15 = VAR_17 = FUNC_1(VAR_9, &VAR_12, 0);




 if (VAR_16 == VAR_3 && VAR_17 == VAR_3)
 {




  FUNC_5(VAR_10, VAR_14, ((void*)0));
  while ((VAR_14 = FUNC_1(VAR_8, &VAR_11, 1)) != VAR_7)
   FUNC_5(VAR_10, VAR_14, &VAR_11);





  while ((VAR_15 = FUNC_1(VAR_9, &VAR_12, 1)) != VAR_4)
   VAR_13 = FUNC_5(VAR_10, VAR_15, VAR_15 != VAR_7 ? &VAR_12 : ((void*)0));
 }




 else if (VAR_16 == VAR_2 && VAR_17 == VAR_2)
 {
  FUNC_5(VAR_10, VAR_14, ((void*)0));

  while ((VAR_14 = FUNC_1(VAR_8, &VAR_11, 1)) != VAR_6)
  {
   FUNC_0(VAR_14 == VAR_5);
   FUNC_5(VAR_10, VAR_14, &VAR_11);
  }

  while ((VAR_15 = FUNC_1(VAR_9, &VAR_12, 1)) != VAR_6)
  {
   FUNC_0(VAR_15 == VAR_5);
   FUNC_5(VAR_10, VAR_5, &VAR_12);
  }

  VAR_13 = FUNC_5(VAR_10, VAR_6, ((void*)0) );
 }

 else if (((VAR_16 == VAR_2 && !(*VAR_8)->isScalar) && VAR_17 == VAR_3) ||
    (VAR_16 == VAR_3 && (VAR_17 == VAR_2 && !(*VAR_9)->isScalar)))
 {

  JsonbIterator **VAR_18 = VAR_16 == VAR_2 ? VAR_8 : VAR_9;
  JsonbIterator **VAR_19 = VAR_16 == VAR_3 ? VAR_8 : VAR_9;

  bool VAR_20 = (VAR_16 == VAR_3);

  FUNC_5(VAR_10, VAR_2, ((void*)0));

  if (VAR_20)
  {
   FUNC_5(VAR_10, VAR_3, ((void*)0));
   while ((VAR_14 = FUNC_1(VAR_19, &VAR_11, 1)) != VAR_4)
    FUNC_5(VAR_10, VAR_14, VAR_14 != VAR_7 ? &VAR_11 : ((void*)0));

   while ((VAR_15 = FUNC_1(VAR_18, &VAR_12, 1)) != VAR_4)
    VAR_13 = FUNC_5(VAR_10, VAR_15, VAR_15 != VAR_6 ? &VAR_12 : ((void*)0));
  }
  else
  {
   while ((VAR_14 = FUNC_1(VAR_18, &VAR_11, 1)) != VAR_6)
    FUNC_5(VAR_10, VAR_14, &VAR_11);

   FUNC_5(VAR_10, VAR_3, ((void*)0));
   while ((VAR_15 = FUNC_1(VAR_19, &VAR_12, 1)) != VAR_4)
    FUNC_5(VAR_10, VAR_15, VAR_15 != VAR_7 ? &VAR_12 : ((void*)0));

   VAR_13 = FUNC_5(VAR_10, VAR_6, ((void*)0));
  }
 }
 else
 {




  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("invalid concatenation of jsonb objects")));
 }

 return VAR_13;
}
