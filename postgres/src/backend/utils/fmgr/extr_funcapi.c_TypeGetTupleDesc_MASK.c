
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ TypeFuncClass ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_10__ {int attname; } ;
struct TYPE_9__ {int natts; int tdtypmod; int tdtypeid; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int AttrNumber ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int ,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 TYPE_1__* FUNC_11 (int ,int) ;
 int FUNC_12 (int *,char*) ;
 char* FUNC_13 (int ) ;

TupleDesc
FUNC_14(Oid VAR_7, List *VAR_8)
{
 Oid VAR_9;
 TypeFuncClass VAR_10 = FUNC_7(VAR_7, &VAR_9);
 TupleDesc VAR_11 = ((void*)0);







 if (VAR_10 == VAR_4)
 {

  VAR_11 = FUNC_11(VAR_9, -1);

  if (VAR_8 != VAR_2)
  {
   int VAR_12 = VAR_11->natts;
   int VAR_13;


   if (FUNC_9(VAR_8) != VAR_12)
    FUNC_4(VAR_1,
      (FUNC_5(VAR_0),
       FUNC_6("number of aliases does not match number of columns")));


   for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
   {
    char *VAR_14 = FUNC_13(FUNC_10(VAR_8, VAR_13));
    Form_pg_attribute VAR_15 = FUNC_1(VAR_11, VAR_13);

    if (VAR_14 != ((void*)0))
     FUNC_12(&(VAR_15->attname), VAR_14);
   }


   VAR_11->tdtypeid = VAR_3;
   VAR_11->tdtypmod = -1;
  }
 }
 else if (VAR_10 == VAR_6)
 {

  char *VAR_16;


  if (VAR_8 == VAR_2)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("no column alias was provided")));


  if (FUNC_9(VAR_8) != 1)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("number of aliases does not match number of columns")));


  VAR_16 = FUNC_13(FUNC_8(VAR_8));

  VAR_11 = FUNC_0(1);
  FUNC_2(VAR_11,
         (AttrNumber) 1,
         VAR_16,
         VAR_7,
         -1,
         0);
 }
 else if (VAR_10 == VAR_5)
 {

  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("could not determine row description for function returning record")));
 }
 else
 {

  FUNC_3(VAR_1, "function in FROM has unsupported return type");
 }

 return VAR_11;
}
