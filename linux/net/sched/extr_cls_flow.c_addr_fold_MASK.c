
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(void *VAR_1)
{
 unsigned long VAR_2 = (unsigned long)VAR_1;

 return (VAR_2 & 0xFFFFFFFF) ^ (VAR_0 > 32 ? VAR_2 >> 32 : 0);
}
