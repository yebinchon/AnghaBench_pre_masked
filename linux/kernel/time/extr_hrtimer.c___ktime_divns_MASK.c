
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int s64 ;
typedef int ktime_t ;


 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 (int const) ;

s64 FUNC_2(const ktime_t VAR_0, s64 VAR_1)
{
 int VAR_2 = 0;
 s64 VAR_3;
 u64 VAR_4;

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = VAR_3 < 0 ? -VAR_3 : VAR_3;


 while (VAR_1 >> 32) {
  VAR_2++;
  VAR_1 >>= 1;
 }
 VAR_4 >>= VAR_2;
 FUNC_0(VAR_4, (unsigned long) VAR_1);
 return VAR_3 < 0 ? -VAR_4 : VAR_4;
}
