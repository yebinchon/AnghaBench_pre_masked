
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct clock_event_device {unsigned long long shift; int mult; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (unsigned long long,unsigned long long) ;

__attribute__((used)) static u64 FUNC_2(unsigned long VAR_0, struct clock_event_device *VAR_1,
   bool VAR_2)
{
 u64 VAR_3 = (u64) VAR_0 << VAR_1->shift;
 u64 VAR_4;

 if (FUNC_0(!VAR_1->mult))
  VAR_1->mult = 1;
 VAR_4 = (u64) VAR_1->mult - 1;





 if ((VAR_3 >> VAR_1->shift) != (u64)VAR_0)
  VAR_3 = ~0ULL;
 if ((~0ULL - VAR_3 > VAR_4) &&
     (!VAR_2 || VAR_1->mult <= (1ULL << VAR_1->shift)))
  VAR_3 += VAR_4;

 FUNC_1(VAR_3, VAR_1->mult);


 return VAR_3 > 1000 ? VAR_3 : 1000;
}
