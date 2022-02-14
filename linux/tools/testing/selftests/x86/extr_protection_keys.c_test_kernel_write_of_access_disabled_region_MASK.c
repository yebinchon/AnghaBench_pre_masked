
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int*,int) ;

void FUNC_5(int *VAR_0, u16 VAR_1)
{
 int VAR_2;
 int VAR_3 = FUNC_1();

 FUNC_0("disabling access to PKEY[%02d], "
   "having kernel read() to buffer\n", VAR_1);
 FUNC_2(VAR_1);
 VAR_2 = FUNC_4(VAR_3, VAR_0, 1);
 FUNC_0("read ret: %d\n", VAR_2);
 FUNC_3(VAR_2);
}
