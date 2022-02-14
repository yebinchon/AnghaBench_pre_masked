
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {char** cstrs; int tmpcontext; int * tuplestore; int attinmeta; TYPE_6__* fcinfo; } ;
typedef TYPE_2__ storeInfo ;
typedef TYPE_3__* TupleDesc ;
struct TYPE_15__ {scalar_t__ resultinfo; } ;
struct TYPE_14__ {TYPE_3__* setDesc; int * setResult; TYPE_1__* econtext; } ;
struct TYPE_13__ {int natts; } ;
struct TYPE_11__ {int ecxt_per_query_memory; } ;
typedef TYPE_4__ ReturnSetInfo ;
typedef int PGresult ;
typedef int MemoryContext ;
typedef int HeapTuple ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char**) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 char* FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;


 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (TYPE_6__*,int *,TYPE_3__**) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (char**) ;
 int * FUNC_17 (int,int,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_20(volatile storeInfo *VAR_4, PGresult *VAR_5, bool VAR_6)
{
 int VAR_7 = FUNC_7(VAR_5);
 HeapTuple VAR_8;
 int VAR_9;
 MemoryContext VAR_10;

 if (VAR_6)
 {

  ReturnSetInfo *VAR_11 = (ReturnSetInfo *) VAR_4->fcinfo->resultinfo;
  TupleDesc VAR_12;






  if (VAR_4->tuplestore)
   FUNC_18(VAR_4->tuplestore);
  VAR_4->tuplestore = ((void*)0);


  switch (FUNC_14(VAR_4->fcinfo, ((void*)0), &VAR_12))
  {
   case 129:

    break;
   case 128:

    FUNC_11(VAR_2,
      (FUNC_12(VAR_1),
       FUNC_13("function returning record called in context "
        "that cannot accept type record")));
    break;
   default:

    FUNC_10(VAR_2, "return type must be a row type");
    break;
  }


  VAR_12 = FUNC_2(VAR_12);


  if (VAR_7 != VAR_12->natts)
   FUNC_11(VAR_2,
     (FUNC_12(VAR_0),
      FUNC_13("remote query result rowtype does not match "
       "the specified FROM clause rowtype")));


  VAR_4->attinmeta = FUNC_9(VAR_12);


  VAR_10 = FUNC_4(VAR_11->econtext->ecxt_per_query_memory);
  VAR_4->tuplestore = FUNC_17(1, 0, VAR_3);
  VAR_11->setResult = VAR_4->tuplestore;
  VAR_11->setDesc = VAR_12;
  FUNC_4(VAR_10);


  if (FUNC_8(VAR_5) == 0)
   return;





  if (VAR_4->cstrs)
   FUNC_16(VAR_4->cstrs);
  VAR_4->cstrs = (char **) FUNC_15(VAR_7 * sizeof(char *));
 }


 FUNC_0(FUNC_8(VAR_5) == 1);






 VAR_10 = FUNC_4(VAR_4->tmpcontext);




 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
 {
  if (FUNC_5(VAR_5, 0, VAR_9))
   VAR_4->cstrs[VAR_9] = ((void*)0);
  else
   VAR_4->cstrs[VAR_9] = FUNC_6(VAR_5, 0, VAR_9);
 }


 VAR_8 = FUNC_1(VAR_4->attinmeta, VAR_4->cstrs);

 FUNC_19(VAR_4->tuplestore, VAR_8);


 FUNC_4(VAR_10);
 FUNC_3(VAR_4->tmpcontext);
}
