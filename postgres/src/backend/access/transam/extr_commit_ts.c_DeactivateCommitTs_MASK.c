
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* newestCommitTsXid; void* oldestCommitTsXid; } ;
struct TYPE_4__ {int nodeid; int time; } ;
struct TYPE_5__ {int commitTsActive; TYPE_1__ dataLastCommit; void* xidLastCommit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_8 ;

__attribute__((used)) static void
FUNC_4(void)
{







 FUNC_0(VAR_2, VAR_5);

 VAR_8->commitTsActive = 0;
 VAR_8->xidLastCommit = VAR_4;
 FUNC_3(VAR_8->dataLastCommit.time);
 VAR_8->dataLastCommit.nodeid = VAR_3;

 VAR_6->oldestCommitTsXid = VAR_4;
 VAR_6->newestCommitTsXid = VAR_4;

 FUNC_1(VAR_2);
 FUNC_0(VAR_0, VAR_5);
 (void) FUNC_2(VAR_1, VAR_7, ((void*)0));
 FUNC_1(VAR_0);
}
