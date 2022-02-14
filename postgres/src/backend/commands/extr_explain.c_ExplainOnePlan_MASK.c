
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int instr_time ;
struct TYPE_18__ {scalar_t__ analyze; scalar_t__ summary; scalar_t__ costs; scalar_t__ buffers; scalar_t__ timing; } ;
struct TYPE_17__ {scalar_t__ skipData; } ;
struct TYPE_16__ {scalar_t__ commandType; } ;
typedef int ScanDirection ;
typedef int QueryEnvironment ;
typedef int QueryDesc ;
typedef TYPE_1__ PlannedStmt ;
typedef int ParamListInfo ;
typedef TYPE_2__ IntoClause ;
typedef TYPE_3__ ExplainState ;
typedef int DestReceiver ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int * FUNC_2 (TYPE_2__*) ;
 int * FUNC_3 (TYPE_1__*,char const*,int ,int ,int *,int ,int *,int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,long,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (char*,int *,int,TYPE_3__*) ;
 int FUNC_9 (char*,int *,int,TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*,int *) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (char*,char*,double,int,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double FUNC_17 (int const) ;
 int FUNC_18 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_19 () ;
 int FUNC_20 (int ) ;
 int FUNC_21 () ;
 scalar_t__ FUNC_22 (int *) ;

void
FUNC_23(PlannedStmt *VAR_9, IntoClause *VAR_10, ExplainState *VAR_11,
      const char *VAR_12, ParamListInfo VAR_13,
      QueryEnvironment *VAR_14, const instr_time *VAR_15)
{
 DestReceiver *VAR_16;
 QueryDesc *VAR_17;
 instr_time VAR_18;
 double VAR_19 = 0;
 int VAR_20;
 int VAR_21 = 0;

 FUNC_0(VAR_9->commandType != VAR_0);

 if (VAR_11->analyze && VAR_11->timing)
  VAR_21 |= VAR_5;
 else if (VAR_11->analyze)
  VAR_21 |= VAR_4;

 if (VAR_11->buffers)
  VAR_21 |= VAR_3;






 FUNC_18(VAR_18);





 FUNC_20(FUNC_15());
 FUNC_21();





 if (VAR_10)
  VAR_16 = FUNC_2(VAR_10);
 else
  VAR_16 = VAR_8;


 VAR_17 = FUNC_3(VAR_9, VAR_12,
        FUNC_15(), VAR_6,
        VAR_16, VAR_13, VAR_14, VAR_21);


 if (VAR_11->analyze)
  VAR_20 = 0;
 else
  VAR_20 = VAR_1;
 if (VAR_10)
  VAR_20 |= FUNC_16(VAR_10);


 FUNC_7(VAR_17, VAR_20);


 if (VAR_11->analyze)
 {
  ScanDirection VAR_22;


  if (VAR_10 && VAR_10->skipData)
   VAR_22 = VAR_7;
  else
   VAR_22 = VAR_2;


  FUNC_6(VAR_17, VAR_22, 0L, 1);


  FUNC_5(VAR_17);


  VAR_19 += FUNC_22(&VAR_18);
 }

 FUNC_9("Query", ((void*)0), 1, VAR_11);


 FUNC_11(VAR_11, VAR_17);

 if (VAR_11->summary && VAR_15)
 {
  double VAR_23 = FUNC_17(*VAR_15);

  FUNC_13("Planning Time", "ms", 1000.0 * VAR_23, 3, VAR_11);
 }


 if (VAR_11->analyze)
  FUNC_12(VAR_11, VAR_17);







 if (VAR_11->costs)
  FUNC_10(VAR_11, VAR_17);





 FUNC_18(VAR_18);

 FUNC_4(VAR_17);

 FUNC_14(VAR_17);

 FUNC_19();


 if (VAR_11->analyze)
  FUNC_1();

 VAR_19 += FUNC_22(&VAR_18);







 if (VAR_11->summary && VAR_11->analyze)
  FUNC_13("Execution Time", "ms", 1000.0 * VAR_19, 3,
        VAR_11);

 FUNC_8("Query", ((void*)0), 1, VAR_11);
}
