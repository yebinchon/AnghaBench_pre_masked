
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct intel_pt {int tc; } ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static u64 FUNC_2(u64 VAR_0, struct intel_pt *VAR_1)
{
 u64 VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0, &VAR_1->tc);

 while (1) {
  VAR_3 = FUNC_1(VAR_2, &VAR_1->tc);
  if (VAR_3 < VAR_0)
   break;
  VAR_2 -= 1;
 }

 while (VAR_3 < VAR_0)
  VAR_3 = FUNC_1(++VAR_2, &VAR_1->tc);

 return VAR_2;
}
