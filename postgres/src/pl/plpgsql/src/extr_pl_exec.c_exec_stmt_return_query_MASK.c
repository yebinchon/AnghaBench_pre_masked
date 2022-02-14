
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef scalar_t__ uint64 ;
typedef int TupleConversionMap ;
struct TYPE_21__ {scalar_t__ eval_processed; int * tuple_store; int tuple_store_desc; int retisset; } ;
struct TYPE_20__ {int params; int * dynquery; int * query; } ;
struct TYPE_19__ {int tupDesc; } ;
struct TYPE_18__ {int * vals; } ;
typedef TYPE_1__* Portal ;
typedef TYPE_2__ PLpgSQL_stmt_return_query ;
typedef TYPE_3__ PLpgSQL_execstate ;
typedef int MemoryContext ;
typedef int HeapTuple ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_14__*) ;
 scalar_t__ VAR_3 ;
 TYPE_14__* VAR_4 ;
 int * FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 TYPE_1__* FUNC_9 (TYPE_3__*,int *,int ,int *,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int *,int ,TYPE_1__**) ;
 int FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int ) ;

__attribute__((used)) static int
FUNC_19(PLpgSQL_execstate *VAR_5,
        PLpgSQL_stmt_return_query *VAR_6)
{
 Portal VAR_7;
 uint64 VAR_8 = 0;
 TupleConversionMap *VAR_9;
 MemoryContext VAR_10;

 if (!VAR_5->retisset)
  FUNC_6(VAR_1,
    (FUNC_7(VAR_0),
     FUNC_8("cannot use RETURN QUERY in a non-SETOF function")));

 if (VAR_5->tuple_store == ((void*)0))
  FUNC_11(VAR_5);

 if (VAR_6->query != ((void*)0))
 {

  FUNC_12(VAR_5, VAR_6->query, 0, &VAR_7);
 }
 else
 {

  FUNC_0(VAR_6->dynquery != ((void*)0));
  VAR_7 = FUNC_9(VAR_5, VAR_6->dynquery,
             VAR_6->params, ((void*)0),
             0);
 }


 VAR_10 = FUNC_1(FUNC_15(VAR_5));

 VAR_9 = FUNC_5(VAR_7->tupDesc,
          VAR_5->tuple_store_desc,
          FUNC_16("structure of query does not match function result type"));

 while (1)
 {
  uint64 VAR_11;

  FUNC_3(VAR_7, 1, 50);


  FUNC_1(FUNC_15(VAR_5));

  if (VAR_3 == 0)
   break;

  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  {
   HeapTuple VAR_12 = VAR_4->vals[VAR_11];

   if (VAR_9)
    VAR_12 = FUNC_14(VAR_12, VAR_9);
   FUNC_18(VAR_5->tuple_store, VAR_12);
   if (VAR_9)
    FUNC_17(VAR_12);
   VAR_8++;
  }

  FUNC_4(VAR_4);
 }

 FUNC_4(VAR_4);
 FUNC_2(VAR_7);

 FUNC_1(VAR_10);
 FUNC_10(VAR_5);

 VAR_5->eval_processed = VAR_8;
 FUNC_13(VAR_5, VAR_8 != 0);

 return VAR_2;
}
