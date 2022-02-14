
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long* VAR_0 ;

unsigned long FUNC_0(char *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = 0;
 char *VAR_4 = VAR_1;
 unsigned long VAR_5 = VAR_2;

 while(VAR_2--)
  VAR_3 =(VAR_3 << 8) ^ VAR_0[((VAR_3 >> 24) ^ *VAR_4++) & 0xFF];

 for(; VAR_5; VAR_5 >>= 8)
  VAR_3 =(VAR_3 << 8) ^ VAR_0[((VAR_3 >> 24) ^ VAR_5) & 0xFF];

 VAR_3 = ~VAR_3 & 0xFFFFFFFF;

 return VAR_3;
}
