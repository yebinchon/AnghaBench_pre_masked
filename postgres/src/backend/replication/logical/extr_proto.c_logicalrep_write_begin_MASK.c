
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xid; int commit_time; int final_lsn; } ;
typedef int StringInfo ;
typedef TYPE_1__ ReorderBufferTXN ;


 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(StringInfo VAR_0, ReorderBufferTXN *VAR_1)
{
 FUNC_0(VAR_0, 'B');


 FUNC_2(VAR_0, VAR_1->final_lsn);
 FUNC_2(VAR_0, VAR_1->commit_time);
 FUNC_1(VAR_0, VAR_1->xid);
}
