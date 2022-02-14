
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sfb_sched_data {TYPE_1__* bins; } ;
struct sfb_bucket {int qlen; } ;
struct TYPE_2__ {struct sfb_bucket** bins; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(u32 VAR_4, u32 VAR_5, struct sfb_sched_data *VAR_6)
{
 int VAR_7;
 struct sfb_bucket *VAR_8 = &VAR_6->bins[VAR_5].bins[0][0];

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  u32 VAR_9 = VAR_4 & VAR_0;

  VAR_4 >>= VAR_1;
  if (VAR_8[VAR_9].qlen < 0xFFFF)
   VAR_8[VAR_9].qlen++;
  VAR_8 += VAR_3;
 }
}
