
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {unsigned long* iov_base; int iov_len; } ;
typedef int pid_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 long FUNC_1 (int ,int ,unsigned long,struct iovec*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

long FUNC_4(pid_t VAR_1, unsigned long VAR_2, unsigned long VAR_3[],
         int VAR_4)
{
 struct iovec VAR_5;
 long VAR_6;

 FUNC_0(FUNC_2(VAR_1));

 VAR_5.iov_base = VAR_3;
 VAR_5.iov_len = VAR_4 * sizeof(unsigned long);

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_5);

 FUNC_0(FUNC_3(VAR_1));

 return VAR_6;
}
