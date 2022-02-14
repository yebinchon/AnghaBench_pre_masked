
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef double int64 ;
struct TYPE_4__ {int number_of_rows; int sort_done; int sortstate; TYPE_1__* qstate; } ;
struct TYPE_3__ {scalar_t__ sortColType; } ;
typedef scalar_t__ Oid ;
typedef TYPE_2__ OSAPerGroupState ;
typedef int (* LerpFunc ) (int ,int ,double) ;
typedef int FunctionCallInfo ;
typedef int Datum ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 double FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 double FUNC_7 (double) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,double) ;
 double FUNC_12 (double) ;
 scalar_t__ FUNC_13 (double) ;
 int FUNC_14 (int ,int,int *,int*,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,double,int) ;

__attribute__((used)) static Datum
FUNC_18(FunctionCallInfo VAR_3,
        Oid VAR_4,
        LerpFunc VAR_5)
{
 OSAPerGroupState *VAR_6;
 double VAR_7;
 int64 VAR_8 = 0;
 int64 VAR_9 = 0;
 Datum VAR_10;
 Datum VAR_11;
 Datum VAR_12;
 double VAR_13;
 bool VAR_14;

 FUNC_1(FUNC_0(VAR_3, ((void*)0)) == VAR_0);


 if (FUNC_2(1))
  FUNC_6();

 VAR_7 = FUNC_3(1);

 if (VAR_7 < 0 || VAR_7 > 1 || FUNC_13(VAR_7))
  FUNC_9(VAR_2,
    (FUNC_10(VAR_1),
     FUNC_11("percentile value %g is not between 0 and 1",
      VAR_7)));


 if (FUNC_2(0))
  FUNC_6();

 VAR_6 = (OSAPerGroupState *) FUNC_4(0);


 if (VAR_6->number_of_rows == 0)
  FUNC_6();

 FUNC_1(VAR_4 == VAR_6->qstate->sortColType);


 if (!VAR_6->sort_done)
 {
  FUNC_15(VAR_6->sortstate);
  VAR_6->sort_done = 1;
 }
 else
  FUNC_16(VAR_6->sortstate);

 VAR_8 = FUNC_12(VAR_7 * (VAR_6->number_of_rows - 1));
 VAR_9 = FUNC_7(VAR_7 * (VAR_6->number_of_rows - 1));

 FUNC_1(VAR_8 < VAR_6->number_of_rows);

 if (!FUNC_17(VAR_6->sortstate, VAR_8, 1))
  FUNC_8(VAR_2, "missing row in percentile_cont");

 if (!FUNC_14(VAR_6->sortstate, 1, &VAR_11, &VAR_14, ((void*)0)))
  FUNC_8(VAR_2, "missing row in percentile_cont");
 if (VAR_14)
  FUNC_6();

 if (VAR_8 == VAR_9)
 {
  VAR_10 = VAR_11;
 }
 else
 {
  if (!FUNC_14(VAR_6->sortstate, 1, &VAR_12, &VAR_14, ((void*)0)))
   FUNC_8(VAR_2, "missing row in percentile_cont");

  if (VAR_14)
   FUNC_6();

  VAR_13 = (VAR_7 * (VAR_6->number_of_rows - 1)) - VAR_8;
  VAR_10 = VAR_5(VAR_11, VAR_12, VAR_13);
 }

 FUNC_5(VAR_10);
}
