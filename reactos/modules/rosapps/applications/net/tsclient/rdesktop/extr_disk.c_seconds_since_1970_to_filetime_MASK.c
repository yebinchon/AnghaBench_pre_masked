
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef long long time_t ;



__attribute__((used)) static void
FUNC_0(time_t VAR_0, uint32 * VAR_1, uint32 * VAR_2)
{
 unsigned long long VAR_3;

 VAR_3 = (VAR_0 + 11644473600LL) * 10000000;
 *VAR_2 = (uint32) VAR_3;
 *VAR_1 = (uint32) (VAR_3 >> 32);
}
