
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



u32 FUNC_0(unsigned char *VAR_0, int VAR_1)
{
 u32 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += 2)
  VAR_2 += (((u32)VAR_0[VAR_3] << 8) | VAR_0[VAR_3 + 1]);

 VAR_2 = (~VAR_2 + 1);
 return VAR_2;
}
