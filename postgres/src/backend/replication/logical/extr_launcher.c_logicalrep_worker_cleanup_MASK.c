
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in_use; void* relid; void* subid; void* userid; void* dbid; int * proc; } ;
typedef TYPE_1__ LogicalRepWorker ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(LogicalRepWorker *VAR_3)
{
 FUNC_0(FUNC_1(VAR_2, VAR_1));

 VAR_3->in_use = 0;
 VAR_3->proc = ((void*)0);
 VAR_3->dbid = VAR_0;
 VAR_3->userid = VAR_0;
 VAR_3->subid = VAR_0;
 VAR_3->relid = VAR_0;
}
