
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned FUNC_0(unsigned VAR_0, int VAR_1)
{
   __asm__("rorl %%cl,%0"
      :"=r" (VAR_0)
      :"0" (VAR_0),"c" (VAR_1));
   return VAR_0;
}
