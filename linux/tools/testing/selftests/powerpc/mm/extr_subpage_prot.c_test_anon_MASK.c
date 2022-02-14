
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_sigaction; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (void**,int,unsigned long) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (void*,unsigned long) ;
 int VAR_2 ;
 int FUNC_7 (int ,struct sigaction*,int *) ;
 int VAR_3 ;
 int FUNC_8 () ;

int FUNC_9(void)
{
 unsigned long VAR_4;
 struct sigaction VAR_5 = {
  .sa_sigaction = VAR_2,
  .sa_flags = VAR_0
 };
 void *VAR_6;
 unsigned long VAR_7;

 FUNC_1(!FUNC_8());

 if (FUNC_3() != 0x10000) {
  FUNC_2(VAR_3, "Kernel page size must be 64K!\n");
  return 1;
 }

 FUNC_7(VAR_1, &VAR_5, ((void*)0));

 VAR_7 = 4 * 16 * 1024 * 1024;

 FUNC_0(FUNC_4(&VAR_6, 64 * 1024, VAR_7));

 VAR_4 = (unsigned long)VAR_6;
 if (VAR_4 & 0xffff)
  VAR_4 = (VAR_4 | 0xffff) + 1;

 VAR_6 = (void *)VAR_4;

 FUNC_5("allocated malloc block of 0x%lx bytes at %p\n",
        VAR_7, VAR_6);

 FUNC_5("testing malloc block...\n");

 return FUNC_6(VAR_6, VAR_7);
}
