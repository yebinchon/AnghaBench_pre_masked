
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;



int FUNC_0(__u64 VAR_0, void * VAR_1)
{
 int VAR_2, VAR_3;
 unsigned char *VAR_4 = (unsigned char *) VAR_1;

 VAR_4 += VAR_0 >> 3;
 VAR_2 = 1 << (VAR_0 & 0x07);
 VAR_3 = VAR_2 & *VAR_4;
 *VAR_4 &= ~VAR_2;
 return VAR_3;
}
