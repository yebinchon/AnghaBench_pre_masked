
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int len; int val; } ;
struct TYPE_7__ {int rawScalar; } ;
struct TYPE_9__ {TYPE_2__ string; TYPE_1__ array; } ;
struct TYPE_10__ {TYPE_3__ val; } ;
typedef int SV ;
typedef TYPE_4__ JsonbValue ;
typedef int JsonbIteratorToken ;
typedef int JsonbIterator ;
typedef int JsonbContainer ;
typedef int HV ;
typedef int AV ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int **,TYPE_4__*,int) ;
 int * FUNC_2 (TYPE_4__*) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int *) ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,int ,int ,int *,int ) ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int * FUNC_8 (int *) ;

__attribute__((used)) static SV *
FUNC_9(JsonbContainer *VAR_7)
{
 VAR_6;
 JsonbValue VAR_8;
 JsonbIterator *VAR_9;
 JsonbIteratorToken VAR_10;

 VAR_9 = FUNC_0(VAR_7);
 VAR_10 = FUNC_1(&VAR_9, &VAR_8, 1);

 switch (VAR_10)
 {
  case 129:
   if (VAR_8.val.array.rawScalar)
   {
    JsonbValue VAR_11;

    if ((VAR_10 = FUNC_1(&VAR_9, &VAR_8, 1)) != VAR_2 ||
     (VAR_10 = FUNC_1(&VAR_9, &VAR_11, 1)) != VAR_3 ||
     (VAR_10 = FUNC_1(&VAR_9, &VAR_11, 1)) != VAR_1)
     FUNC_4(VAR_0, "unexpected jsonb token: %d", VAR_10);

    return FUNC_2(&VAR_8);
   }
   else
   {
    AV *VAR_12 = FUNC_6();

    while ((VAR_10 = FUNC_1(&VAR_9, &VAR_8, 1)) != VAR_1)
    {
     if (VAR_10 == VAR_2)
      FUNC_3(VAR_12, FUNC_2(&VAR_8));
    }

    return FUNC_8((SV *) VAR_12);
   }

  case 128:
   {
    HV *VAR_13 = FUNC_7();

    while ((VAR_10 = FUNC_1(&VAR_9, &VAR_8, 1)) != VAR_1)
    {
     if (VAR_10 == VAR_4)
     {

      JsonbValue VAR_14;

      if (FUNC_1(&VAR_9, &VAR_14, 1) == VAR_5)
      {
       SV *VAR_15 = FUNC_2(&VAR_14);

       (void) FUNC_5(VAR_13,
           VAR_8.val.string.val, VAR_8.val.string.len,
           VAR_15, 0);
      }
     }
    }

    return FUNC_8((SV *) VAR_13);
   }

  default:
   FUNC_4(VAR_0, "unexpected jsonb token: %d", VAR_10);
   return ((void*)0);
 }
}
