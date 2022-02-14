
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogRecData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_3(void)
{
 FUNC_0(VAR_5 == 0);
 FUNC_0(VAR_3 == (XLogRecData *) &VAR_2);
 FUNC_0(VAR_4 == 0);


 if (!FUNC_1())
  FUNC_2(VAR_0, "cannot make new WAL entries during recovery");

 if (VAR_1)
  FUNC_2(VAR_0, "XLogBeginInsert was already called");

 VAR_1 = 1;
}
