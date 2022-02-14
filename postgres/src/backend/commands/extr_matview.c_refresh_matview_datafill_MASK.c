
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_10__ {TYPE_1__* estate; } ;
struct TYPE_9__ {int es_processed; } ;
typedef TYPE_2__ QueryDesc ;
typedef int Query ;
typedef int PlannedStmt ;
typedef int List ;
typedef int DestReceiver ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int *,char const*,int ,int ,int *,int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,long,int) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int VAR_2 ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 () ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int ,char*) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *,int ,int *) ;

__attribute__((used)) static uint64
FUNC_18(DestReceiver *VAR_3, Query *VAR_4,
       const char *VAR_5)
{
 List *VAR_6;
 PlannedStmt *VAR_7;
 QueryDesc *VAR_8;
 Query *VAR_9;
 uint64 VAR_10;


 VAR_9 = FUNC_13(VAR_4);
 FUNC_0(VAR_9, 1, 0);
 VAR_6 = FUNC_11(VAR_9);


 if (FUNC_16(VAR_6) != 1)
  FUNC_14(VAR_0, "unexpected rewrite result for REFRESH MATERIALIZED VIEW");
 VAR_4 = (Query *) FUNC_15(VAR_6);


 FUNC_1();


 VAR_7 = FUNC_17(VAR_4, 0, ((void*)0));







 FUNC_10(FUNC_8());
 FUNC_12();


 VAR_8 = FUNC_2(VAR_7, VAR_5,
        FUNC_8(), VAR_2,
        VAR_3, ((void*)0), ((void*)0), 0);


 FUNC_6(VAR_8, 0);


 FUNC_5(VAR_8, VAR_1, 0L, 1);

 VAR_10 = VAR_8->estate->es_processed;


 FUNC_4(VAR_8);
 FUNC_3(VAR_8);

 FUNC_7(VAR_8);

 FUNC_9();

 return VAR_10;
}
