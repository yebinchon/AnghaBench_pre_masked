
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned int VAR_0, const void * VAR_1)
{
 int VAR_2;
 const unsigned char *VAR_3 = (const unsigned char *) VAR_1;

 VAR_3 += VAR_0 >> 3;
 VAR_2 = 1 << (VAR_0 & 0x07);
 return (VAR_2 & *VAR_3);
}
