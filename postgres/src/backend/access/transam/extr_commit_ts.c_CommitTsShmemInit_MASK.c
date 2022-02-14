
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int PagePrecedes; } ;
struct TYPE_6__ {int nodeid; int time; } ;
struct TYPE_7__ {int commitTsActive; TYPE_1__ dataLastCommit; int xidLastCommit; } ;
typedef int CommitTimestampShared ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (char*,int,int*) ;
 int FUNC_3 (TYPE_3__*,char*,int ,int ,int ,char*,int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_7 ;

void
FUNC_5(void)
{
 bool VAR_8;

 VAR_1->PagePrecedes = VAR_2;
 FUNC_3(VAR_1, "commit_timestamp", FUNC_1(), 0,
      VAR_0, "pg_commit_ts",
      VAR_6);

 VAR_7 = FUNC_2("CommitTs shared",
          sizeof(CommitTimestampShared),
          &VAR_8);

 if (!VAR_5)
 {
  FUNC_0(!VAR_8);

  VAR_7->xidLastCommit = VAR_4;
  FUNC_4(VAR_7->dataLastCommit.time);
  VAR_7->dataLastCommit.nodeid = VAR_3;
  VAR_7->commitTsActive = 0;
 }
 else
  FUNC_0(VAR_8);
}
