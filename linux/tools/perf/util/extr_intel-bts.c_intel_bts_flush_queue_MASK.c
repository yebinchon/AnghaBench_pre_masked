
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_bts_queue {int dummy; } ;


 int FUNC_0 (struct intel_bts_queue*,int *) ;

__attribute__((used)) static int FUNC_1(struct intel_bts_queue *VAR_0)
{
 u64 VAR_1 = 0;
 int VAR_2;

 while (1) {
  VAR_2 = FUNC_0(VAR_0, &VAR_1);
  if (VAR_2 < 0)
   return VAR_2;
  if (VAR_2)
   break;
 }
 return 0;
}
