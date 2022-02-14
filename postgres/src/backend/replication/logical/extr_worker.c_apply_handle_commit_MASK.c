
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ commit_lsn; int end_lsn; int committime; } ;
typedef int StringInfo ;
typedef TYPE_1__ LogicalRepCommitData ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(StringInfo VAR_5)
{
 LogicalRepCommitData VAR_6;

 FUNC_5(VAR_5, &VAR_6);

 FUNC_1(VAR_6.commit_lsn == VAR_2);


 if (FUNC_3() && !FUNC_4())
 {




  VAR_3 = VAR_6.end_lsn;
  VAR_4 = VAR_6.committime;

  FUNC_2();
  FUNC_8(0);

  FUNC_10(VAR_6.end_lsn);
 }
 else
 {

  FUNC_0();
  FUNC_6();
 }

 VAR_1 = 0;


 FUNC_9(VAR_6.end_lsn);

 FUNC_7(VAR_0, ((void*)0));
}
