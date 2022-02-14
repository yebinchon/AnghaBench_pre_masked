
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iovec {int* iov_base; int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,struct iovec*,int,int ) ;

void FUNC_6(int *VAR_2, u16 VAR_3)
{
 int VAR_4, VAR_5;
 struct iovec VAR_6;
 int VAR_7[2];

 VAR_4 = FUNC_2(VAR_7);

 FUNC_4(VAR_4 == 0);
 FUNC_1("disabling access to PKEY[%02d], "
   "having kernel vmsplice from buffer\n", VAR_3);
 FUNC_3(VAR_3);
 VAR_6.iov_base = VAR_2;
 VAR_6.iov_len = VAR_0;
 VAR_5 = FUNC_5(VAR_7[1], &VAR_6, 1, VAR_1);
 FUNC_1("vmsplice() ret: %d\n", VAR_5);
 FUNC_4(VAR_5 == -1);

 FUNC_0(VAR_7[0]);
 FUNC_0(VAR_7[1]);
}
