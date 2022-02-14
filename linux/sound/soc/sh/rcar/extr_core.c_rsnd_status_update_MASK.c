
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 *VAR_0,
         int VAR_1, int VAR_2, int VAR_3)
{
 u32 VAR_4 = 0xF << VAR_1;
 u8 VAR_5 = (*VAR_0 >> VAR_1) & 0xF;
 u8 VAR_6 = (VAR_5 + VAR_2) & 0xF;
 int VAR_7 = (VAR_5 == VAR_3);

 if (VAR_6 == 0xF)
  VAR_7 = 0;
 else
  *VAR_0 = (*VAR_0 & ~VAR_4) + (VAR_6 << VAR_1);

 return VAR_7;
}
