
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {char* iov_base; int iov_len; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,void const*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,struct iovec*,int,struct iovec*,int,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{

 char VAR_2[4096];
 struct iovec VAR_3, VAR_4;
 int VAR_5;

 FUNC_2("[RUN]\tprocess_vm_readv() from vsyscall page\n");

 VAR_3.iov_base = VAR_2;
 VAR_3.iov_len = 4096;
 VAR_4.iov_base = (void *)0xffffffffff600000;
 VAR_4.iov_len = 4096;
 VAR_5 = FUNC_3(FUNC_0(), &VAR_3, 1, &VAR_4, 1, 0);
 if (VAR_5 != 4096) {
  FUNC_2("[OK]\tprocess_vm_readv() failed (ret = %d, errno = %d)\n", VAR_5, VAR_0);
  return 0;
 }

 if (VAR_1) {
  if (!FUNC_1(VAR_2, (const void *)0xffffffffff600000, 4096)) {
   FUNC_2("[OK]\tIt worked and read correct data\n");
  } else {
   FUNC_2("[FAIL]\tIt worked but returned incorrect data\n");
   return 1;
  }
 }


 return 0;
}
