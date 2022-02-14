
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 u64 VAR_8;


 VAR_3 = FUNC_0(VAR_2) - 1;
 VAR_5 = VAR_2 << (31 - VAR_3);
 VAR_4 = (VAR_5 >> 23) & 0xff;
 VAR_6 = ((VAR_5 & 0x7fffff) *
  ((VAR_1[(VAR_4 + 1) & 0xff] -
  VAR_1[VAR_4]) & 0xffff)) >> 15;

 VAR_8 = ((VAR_3 << 24) + (VAR_1[VAR_4] << 8) + VAR_6);



 VAR_7 = (VAR_8 * VAR_0) >> 31;



 return VAR_7 / ((1 << 24) / 1000);
}
