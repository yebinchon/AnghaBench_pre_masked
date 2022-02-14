
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum which_base { ____Placeholder_which_base } which_base ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned long VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static unsigned long FUNC_1(enum which_base VAR_4)
{
 unsigned long VAR_5;





 VAR_3 = 1;

 VAR_5 = 0;
 if (VAR_4 == VAR_0) {

  asm volatile ("mov %%fs:(%%rcx), %%rax" : : "c" (VAR_5) : "rax");
 } else {
  asm volatile ("mov %%gs:(%%rcx), %%rax" : : "c" (VAR_5) : "rax");
 }
 if (!VAR_3)
  return VAR_2 + VAR_5;







 VAR_5 = (VAR_1 >> 1) + 1;
 if (VAR_4 == VAR_0) {
  asm volatile ("mov %%fs:(%%rcx), %%rax"
         : : "c" (VAR_5) : "rax");
 } else {
  asm volatile ("mov %%gs:(%%rcx), %%rax"
         : : "c" (VAR_5) : "rax");
 }
 if (!VAR_3)
  return VAR_2 + VAR_5;

 FUNC_0();
}
