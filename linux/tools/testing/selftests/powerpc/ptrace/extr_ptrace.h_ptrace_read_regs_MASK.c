
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {unsigned long* iov_base; int iov_len; } ;
typedef int pid_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_1 (int ,int ,unsigned long,struct iovec*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(pid_t VAR_2, unsigned long VAR_3, unsigned long VAR_4[],
       int VAR_5)
{
 struct iovec VAR_6;
 long VAR_7;

 FUNC_0(FUNC_2(VAR_2));

 VAR_6.iov_base = VAR_4;
 VAR_6.iov_len = VAR_5 * sizeof(unsigned long);

 VAR_7 = FUNC_1(VAR_0, VAR_2, VAR_3, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_0(FUNC_3(VAR_2));

 return VAR_1;
}
