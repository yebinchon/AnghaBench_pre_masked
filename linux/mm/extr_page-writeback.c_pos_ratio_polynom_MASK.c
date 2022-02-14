
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long s64 ;


 long long VAR_0 ;
 long long FUNC_0 (long long,long long,long long) ;
 long FUNC_1 (long long,unsigned long) ;

__attribute__((used)) static long long FUNC_2(unsigned long VAR_1,
       unsigned long VAR_2,
       unsigned long VAR_3)
{
 long long VAR_4;
 long VAR_5;

 VAR_5 = FUNC_1(((s64)VAR_1 - (s64)VAR_2) << VAR_0,
        (VAR_3 - VAR_1) | 1);
 VAR_4 = VAR_5;
 VAR_4 = VAR_4 * VAR_5 >> VAR_0;
 VAR_4 = VAR_4 * VAR_5 >> VAR_0;
 VAR_4 += 1 << VAR_0;

 return FUNC_0(VAR_4, 0LL, 2LL << VAR_0);
}
