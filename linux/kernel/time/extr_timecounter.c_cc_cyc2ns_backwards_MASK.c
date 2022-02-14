
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cyclecounter {int mult; int shift; } ;



__attribute__((used)) static u64 FUNC_0(const struct cyclecounter *VAR_0,
          u64 VAR_1, u64 VAR_2, u64 VAR_3)
{
 u64 VAR_4 = (u64) VAR_1;

 VAR_4 = ((VAR_4 * VAR_0->mult) - VAR_3) >> VAR_0->shift;

 return VAR_4;
}
