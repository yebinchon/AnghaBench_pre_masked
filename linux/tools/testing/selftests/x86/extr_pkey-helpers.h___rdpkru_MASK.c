
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned int FUNC_0(void)
{
 unsigned int VAR_0, VAR_1;
 unsigned int VAR_2 = 0;
 unsigned int VAR_3;

 asm volatile(".byte 0x0f,0x01,0xee\n\t"
       : "=a" (VAR_0), "=d" (VAR_1)
       : "c" (VAR_2));
 VAR_3 = VAR_0;
 return VAR_3;
}
