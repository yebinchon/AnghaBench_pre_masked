
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct vmx_pages {int vmxon_gpa; scalar_t__ vmxon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

bool FUNC_4(struct vmx_pages *VAR_8)
{
 uint64_t VAR_9;
 uint64_t VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;






 __asm__ __volatile__("mov %%cr0, %0" : "=r"(VAR_11) : : "memory");
 VAR_11 &= FUNC_0(VAR_4);
 VAR_11 |= FUNC_0(VAR_3);
 __asm__ __volatile__("mov %0, %%cr0" : : "r"(VAR_11) : "memory");

 __asm__ __volatile__("mov %%cr4, %0" : "=r"(VAR_12) : : "memory");
 VAR_12 &= FUNC_0(VAR_6);
 VAR_12 |= FUNC_0(VAR_5);

 VAR_12 |= VAR_7;
 __asm__ __volatile__("mov %0, %%cr4" : : "r"(VAR_12) : "memory");







 VAR_10 = VAR_1;
 VAR_10 |= VAR_0;
 VAR_9 = FUNC_0(VAR_2);
 if ((VAR_9 & VAR_10) != VAR_10)
  FUNC_3(VAR_2, VAR_9 | VAR_10);


 *(uint32_t *)(VAR_8->vmxon) = FUNC_1();
 if (FUNC_2(VAR_8->vmxon_gpa))
  return 0;

 return 1;
}
