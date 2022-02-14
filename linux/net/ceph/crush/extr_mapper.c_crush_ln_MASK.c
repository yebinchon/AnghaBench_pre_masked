
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __s64 ;


 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static __u64 FUNC_1(unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_2;
 int VAR_4, VAR_5, VAR_6;
 __u64 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_3++;


 VAR_4 = 15;





 if (!(VAR_3 & 0x18000)) {
  int VAR_12 = FUNC_0(VAR_3 & 0x1FFFF) - 16;
  VAR_3 <<= VAR_12;
  VAR_4 = 15 - VAR_12;
 }

 VAR_5 = (VAR_3 >> 8) << 1;

 VAR_7 = VAR_1[VAR_5 - 256];

 VAR_8 = VAR_1[VAR_5 + 1 - 256];


 VAR_10 = (__s64)VAR_3 * VAR_7;
 VAR_10 >>= 48;

 VAR_11 = VAR_4;
 VAR_11 <<= (12 + 32);

 VAR_6 = VAR_10 & 0xff;

 VAR_9 = VAR_0[VAR_6];

 VAR_8 = VAR_8 + VAR_9;

 VAR_8 >>= (48 - 12 - 32);
 VAR_11 += VAR_8;

 return VAR_11;
}
