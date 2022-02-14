
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8 ;
typedef int XLogRecPtr ;
struct TYPE_3__ {int commit_time; int end_lsn; } ;
typedef int StringInfo ;
typedef TYPE_1__ ReorderBufferTXN ;


 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ,int ) ;

void
FUNC_2(StringInfo VAR_0, ReorderBufferTXN *VAR_1,
      XLogRecPtr VAR_2)
{
 uint8 VAR_3 = 0;

 FUNC_0(VAR_0, 'C');


 FUNC_0(VAR_0, VAR_3);


 FUNC_1(VAR_0, VAR_2);
 FUNC_1(VAR_0, VAR_1->end_lsn);
 FUNC_1(VAR_0, VAR_1->commit_time);
}
