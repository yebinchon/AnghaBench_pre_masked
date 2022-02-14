
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 bool VAR_2 = 1;






 FUNC_1("[RUN]\tChecking syscalls 512-547\n");
 for (int VAR_3 = 512; VAR_3 <= 547; VAR_3++)
  FUNC_0(VAR_3, &VAR_2);





 FUNC_1("[RUN]\tChecking some 64-bit syscalls in x32 range\n");
 FUNC_0(16 | VAR_0, &VAR_2);
 FUNC_0(19 | VAR_0, &VAR_2);
 FUNC_0(20 | VAR_0, &VAR_2);




 FUNC_1("[RUN]\tChecking numbers above 2^32-1\n");
 FUNC_0((1UL << 32), &VAR_2);
 FUNC_0(VAR_0 | (1UL << 32), &VAR_2);

 if (!VAR_2)
  VAR_1++;
 else
  FUNC_1("[OK]\tThey all returned -ENOSYS\n");
}
