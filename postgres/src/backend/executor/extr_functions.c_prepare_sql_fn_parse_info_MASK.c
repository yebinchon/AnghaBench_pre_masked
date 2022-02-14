
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int values; } ;
struct TYPE_7__ {int pronargs; TYPE_1__ proargtypes; int proname; } ;
struct TYPE_6__ {int nargs; scalar_t__* argtypes; int * argnames; scalar_t__ collation; int fname; } ;
typedef TYPE_2__* SQLFunctionParseInfoPtr ;
typedef int SQLFunctionParseInfo ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_proc ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int ,int ,int **) ;
 int FUNC_11 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;

SQLFunctionParseInfoPtr
FUNC_15(HeapTuple VAR_6,
        Node *VAR_7,
        Oid VAR_8)
{
 SQLFunctionParseInfoPtr VAR_9;
 Form_pg_proc VAR_10 = (Form_pg_proc) FUNC_0(VAR_6);
 int VAR_11;

 VAR_9 = (SQLFunctionParseInfoPtr) FUNC_13(sizeof(SQLFunctionParseInfo));


 VAR_9->fname = FUNC_14(FUNC_2(VAR_10->proname));


 VAR_9->collation = VAR_8;





 VAR_9->nargs = VAR_11 = VAR_10->pronargs;
 if (VAR_11 > 0)
 {
  Oid *VAR_12;
  int VAR_13;

  VAR_12 = (Oid *) FUNC_12(VAR_11 * sizeof(Oid));
  FUNC_11(VAR_12,
      VAR_10->proargtypes.values,
      VAR_11 * sizeof(Oid));

  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
  {
   Oid VAR_14 = VAR_12[VAR_13];

   if (FUNC_1(VAR_14))
   {
    VAR_14 = FUNC_9(VAR_7, VAR_13);
    if (VAR_14 == VAR_4)
     FUNC_5(VAR_3,
       (FUNC_6(VAR_2),
        FUNC_7("could not determine actual type of argument declared %s",
         FUNC_8(VAR_12[VAR_13]))));
    VAR_12[VAR_13] = VAR_14;
   }
  }

  VAR_9->argtypes = VAR_12;
 }




 if (VAR_11 > 0)
 {
  Datum VAR_15;
  Datum VAR_16;
  int VAR_17;
  bool VAR_18;

  VAR_15 = FUNC_4(VAR_5, VAR_6,
           VAR_1,
           &VAR_18);
  if (VAR_18)
   VAR_15 = FUNC_3(((void*)0));

  VAR_16 = FUNC_4(VAR_5, VAR_6,
           VAR_0,
           &VAR_18);
  if (VAR_18)
   VAR_16 = FUNC_3(((void*)0));

  VAR_17 = FUNC_10(VAR_15, VAR_16,
              &VAR_9->argnames);


  if (VAR_17 < VAR_11)
   VAR_9->argnames = ((void*)0);
 }
 else
  VAR_9->argnames = ((void*)0);

 return VAR_9;
}
