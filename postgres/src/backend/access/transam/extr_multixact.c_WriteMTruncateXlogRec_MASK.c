
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* endTruncMemb; void* startTruncMemb; void* endTruncOff; void* startTruncOff; int oldestMultiDB; } ;
typedef TYPE_1__ xl_multixact_truncate ;
typedef int XLogRecPtr ;
typedef int Oid ;
typedef void* MultiXactOffset ;
typedef void* MultiXactId ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(Oid VAR_3,
       MultiXactId VAR_4, MultiXactId VAR_5,
       MultiXactOffset VAR_6, MultiXactOffset VAR_7)
{
 XLogRecPtr VAR_8;
 xl_multixact_truncate VAR_9;

 VAR_9.oldestMultiDB = VAR_3;

 VAR_9.startTruncOff = VAR_4;
 VAR_9.endTruncOff = VAR_5;

 VAR_9.startTruncMemb = VAR_6;
 VAR_9.endTruncMemb = VAR_7;

 FUNC_0();
 FUNC_3((char *) (&VAR_9), VAR_1);
 VAR_8 = FUNC_2(VAR_0, VAR_2);
 FUNC_1(VAR_8);
}
