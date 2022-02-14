
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ final_lsn; int xid; void* committime; } ;
typedef int StringInfo ;
typedef TYPE_1__ LogicalRepBeginData ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 (int ) ;

void
FUNC_3(StringInfo VAR_2, LogicalRepBeginData *VAR_3)
{

 VAR_3->final_lsn = FUNC_2(VAR_2);
 if (VAR_3->final_lsn == VAR_1)
  FUNC_0(VAR_0, "final_lsn not set in begin message");
 VAR_3->committime = FUNC_2(VAR_2);
 VAR_3->xid = FUNC_1(VAR_2, 4);
}
