
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(const char *VAR_0, unsigned int VAR_1)
{
 unsigned long VAR_2 = 0;
 unsigned char VAR_3;

 while (VAR_1--) {
  VAR_3 = *VAR_0++;
  VAR_2 = (VAR_2 + (VAR_3 << 4) + (VAR_3 >> 4)) * 11;
 }
 return VAR_2;
}
