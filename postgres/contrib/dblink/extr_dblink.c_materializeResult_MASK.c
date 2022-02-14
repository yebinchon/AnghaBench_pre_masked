
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int Tuplestorestate ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_16__ {scalar_t__ resultinfo; } ;
struct TYPE_15__ {scalar_t__ returnMode; TYPE_2__* setDesc; int * setResult; TYPE_1__* econtext; } ;
struct TYPE_14__ {int natts; } ;
struct TYPE_13__ {int ecxt_per_query_memory; } ;
typedef TYPE_3__ ReturnSetInfo ;
typedef int PGresult ;
typedef int PGconn ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_4__* FunctionCallInfo ;
typedef int AttrNumber ;
typedef int AttInMetadata ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char**) ;
 TYPE_2__* FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int,int) ;
 char* FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;


 int * FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int ,char*,int ,int,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (TYPE_4__*,int *,TYPE_2__**) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (int) ;
 int * FUNC_25 (int,int,int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_28(FunctionCallInfo VAR_8, PGconn *VAR_9, PGresult *VAR_10)
{
 ReturnSetInfo *VAR_11 = (ReturnSetInfo *) VAR_8->resultinfo;


 FUNC_0(VAR_11->returnMode == VAR_5);

 FUNC_7();
 {
  TupleDesc VAR_12;
  bool VAR_13;
  int VAR_14;
  int VAR_15;

  if (FUNC_14(VAR_10) == VAR_3)
  {
   VAR_13 = 1;





   VAR_12 = FUNC_2(1);
   FUNC_16(VAR_12, (AttrNumber) 1, "status",
          VAR_6, -1, 0);
   VAR_14 = 1;
   VAR_15 = 1;
  }
  else
  {
   FUNC_0(FUNC_14(VAR_10) == VAR_4);

   VAR_13 = 0;


   switch (FUNC_22(VAR_8, ((void*)0), &VAR_12))
   {
    case 129:

     break;
    case 128:

     FUNC_19(VAR_2,
       (FUNC_20(VAR_1),
        FUNC_21("function returning record called in context "
         "that cannot accept type record")));
     break;
    default:

     FUNC_18(VAR_2, "return type must be a row type");
     break;
   }


   VAR_12 = FUNC_3(VAR_12);
   VAR_14 = FUNC_13(VAR_10);
   VAR_15 = FUNC_12(VAR_10);
  }




  if (VAR_15 != VAR_12->natts)
   FUNC_19(VAR_2,
     (FUNC_20(VAR_0),
      FUNC_21("remote query result rowtype does not match "
       "the specified FROM clause rowtype")));

  if (VAR_14 > 0)
  {
   AttInMetadata *VAR_16;
   int VAR_17 = -1;
   Tuplestorestate *VAR_18;
   MemoryContext VAR_19;
   int VAR_20;
   char **VAR_21;

   VAR_16 = FUNC_15(VAR_12);


   if (!VAR_13)
    VAR_17 = FUNC_17(VAR_9);

   VAR_19 = FUNC_4(
              VAR_11->econtext->ecxt_per_query_memory);
   VAR_18 = FUNC_25(1, 0, VAR_7);
   VAR_11->setResult = VAR_18;
   VAR_11->setDesc = VAR_12;
   FUNC_4(VAR_19);

   VAR_21 = (char **) FUNC_23(VAR_15 * sizeof(char *));


   for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++)
   {
    HeapTuple VAR_22;

    if (!VAR_13)
    {
     int VAR_23;

     for (VAR_23 = 0; VAR_23 < VAR_15; VAR_23++)
     {
      if (FUNC_10(VAR_10, VAR_20, VAR_23))
       VAR_21[VAR_23] = ((void*)0);
      else
       VAR_21[VAR_23] = FUNC_11(VAR_10, VAR_20, VAR_23);
     }
    }
    else
    {
     VAR_21[0] = FUNC_9(VAR_10);
    }


    VAR_22 = FUNC_1(VAR_16, VAR_21);
    FUNC_27(VAR_18, VAR_22);
   }


   FUNC_24(VAR_17);


   FUNC_26(VAR_18);
  }
 }
 FUNC_6();
 {

  FUNC_8(VAR_10);
 }
 FUNC_5();
}
