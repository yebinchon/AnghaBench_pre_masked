
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct cake_sched_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cake_sched_data*,int) ;
 int FUNC_1 (struct cake_sched_data*,int,int) ;

__attribute__((used)) static void FUNC_2(struct cake_sched_data *VAR_2, u16 VAR_3)
{
 while (VAR_3 > 0 && VAR_3 < VAR_0 * VAR_1) {
  u16 VAR_4 = (VAR_3 - 1) >> 1;
  u32 VAR_5 = FUNC_0(VAR_2, VAR_3);
  u32 VAR_6 = FUNC_0(VAR_2, VAR_4);

  if (VAR_5 > VAR_6) {
   FUNC_1(VAR_2, VAR_3, VAR_4);
   VAR_3 = VAR_4;
  } else {
   break;
  }
 }
}
