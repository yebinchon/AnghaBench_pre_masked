
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8 ;
struct TYPE_3__ {void* committime; void* end_lsn; void* commit_lsn; } ;
typedef int StringInfo ;
typedef TYPE_1__ LogicalRepCommitData ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

void
FUNC_3(StringInfo VAR_1, LogicalRepCommitData *VAR_2)
{

 uint8 VAR_3 = FUNC_1(VAR_1);

 if (VAR_3 != 0)
  FUNC_0(VAR_0, "unrecognized flags %u in commit message", VAR_3);


 VAR_2->commit_lsn = FUNC_2(VAR_1);
 VAR_2->end_lsn = FUNC_2(VAR_1);
 VAR_2->committime = FUNC_2(VAR_1);
}
