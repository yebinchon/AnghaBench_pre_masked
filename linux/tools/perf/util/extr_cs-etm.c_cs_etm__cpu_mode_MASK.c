
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct machine {int dummy; } ;
struct cs_etm_queue {TYPE_1__* etm; } ;
struct TYPE_2__ {scalar_t__ kernel_start; struct machine* machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct machine*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static u8 FUNC_1(struct cs_etm_queue *VAR_6, u64 VAR_7)
{
 struct machine *VAR_8;

 VAR_8 = VAR_6->etm->machine;

 if (VAR_7 >= VAR_6->etm->kernel_start) {
  if (FUNC_0(VAR_8))
   return VAR_3;
  else
   return VAR_0;
 } else {
  if (FUNC_0(VAR_8))
   return VAR_4;
  else if (VAR_5)
   return VAR_1;
  else
   return VAR_2;
 }
}
