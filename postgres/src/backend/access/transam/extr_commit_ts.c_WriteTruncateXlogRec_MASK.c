
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pageno; int oldestXid; } ;
typedef TYPE_1__ xl_commit_ts_truncate ;
typedef int TransactionId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void
FUNC_3(int VAR_3, TransactionId VAR_4)
{
 xl_commit_ts_truncate VAR_5;

 VAR_5.pageno = VAR_3;
 VAR_5.oldestXid = VAR_4;

 FUNC_0();
 FUNC_2((char *) (&VAR_5), VAR_2);
 (void) FUNC_1(VAR_1, VAR_0);
}
