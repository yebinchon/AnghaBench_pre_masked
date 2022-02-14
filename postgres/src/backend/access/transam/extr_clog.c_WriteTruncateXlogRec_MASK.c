
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pageno; int oldestXactDb; int oldestXact; } ;
typedef TYPE_1__ xl_clog_truncate ;
typedef int XLogRecPtr ;
typedef int TransactionId ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(int VAR_2, TransactionId VAR_3, Oid VAR_4)
{
 XLogRecPtr VAR_5;
 xl_clog_truncate VAR_6;

 VAR_6.pageno = VAR_2;
 VAR_6.oldestXact = VAR_3;
 VAR_6.oldestXactDb = VAR_4;

 FUNC_0();
 FUNC_3((char *) (&VAR_6), sizeof(xl_clog_truncate));
 VAR_5 = FUNC_2(VAR_1, VAR_0);
 FUNC_1(VAR_5);
}
