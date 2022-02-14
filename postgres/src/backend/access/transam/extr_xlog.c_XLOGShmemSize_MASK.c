
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int XLogRecPtr ;
typedef int XLogCtlData ;
typedef int WALInsertLockPadded ;
typedef int Size ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int ,int ) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (char*,int,char*,int) ;

Size
FUNC_6(void)
{
 Size VAR_5;







 if (VAR_4 == -1)
 {
  char VAR_6[32];

  FUNC_5(VAR_6, sizeof(VAR_6), "%d", FUNC_2());
  FUNC_1("wal_buffers", VAR_6, VAR_1, VAR_2);
 }
 FUNC_0(VAR_4 > 0);


 VAR_5 = sizeof(XLogCtlData);


 VAR_5 = FUNC_3(VAR_5, FUNC_4(sizeof(WALInsertLockPadded), VAR_0 + 1));

 VAR_5 = FUNC_3(VAR_5, FUNC_4(sizeof(XLogRecPtr), VAR_4));

 VAR_5 = FUNC_3(VAR_5, VAR_3);

 VAR_5 = FUNC_3(VAR_5, FUNC_4(VAR_3, VAR_4));







 return VAR_5;
}
