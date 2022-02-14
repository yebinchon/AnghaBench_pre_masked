
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long* VAR_0 ;

unsigned long FUNC_0(char *VAR_1, int VAR_2, char *VAR_3, int VAR_4)
{
 unsigned long VAR_5 = 0;
 char *VAR_6 = VAR_1;
 unsigned long VAR_7 = VAR_2+VAR_4;

 while(VAR_2--)
  VAR_5 =(VAR_5 << 8) ^ VAR_0[((VAR_5 >> 24) ^ *VAR_6++) & 0xFF];

 VAR_6 = VAR_3;
 while(VAR_4--)
  VAR_5 =(VAR_5 << 8) ^ VAR_0[((VAR_5 >> 24) ^ *VAR_6++) & 0xFF];


 for(; VAR_7; VAR_7 >>= 8)
  VAR_5 =(VAR_5 << 8) ^ VAR_0[((VAR_5 >> 24) ^ VAR_7) & 0xFF];

 VAR_5 = ~VAR_5 & 0xFFFFFFFF;

 return VAR_5;
}
