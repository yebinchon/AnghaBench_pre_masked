
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint32 ;
typedef scalar_t__ time_t ;



__attribute__((used)) static time_t
FUNC_0(uint32 VAR_0, uint32 VAR_1)
{
 unsigned long long VAR_2;
 time_t VAR_3;

 VAR_2 = VAR_1 + (((unsigned long long) VAR_0) << 32);
 VAR_2 /= 10000000;
 VAR_2 -= 11644473600LL;

 VAR_3 = (time_t) VAR_2;
 return (VAR_3);

}
