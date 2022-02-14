
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __u8 ;



__attribute__((used)) static inline u32 FUNC_0(__u8 VAR_0)
{
 u32 VAR_1 = 0xffffffff;

 if (VAR_0 == 0)
  VAR_1 = 0;
 else if (VAR_0 < 32)
  VAR_1 <<= (32 - VAR_0);

 return VAR_1;
}
