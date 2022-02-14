
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer {int dummy; } ;
struct bcm_op {scalar_t__ kt_ival2; scalar_t__ kt_ival1; scalar_t__ count; } ;
typedef scalar_t__ ktime_t ;


 int FUNC_0 (struct hrtimer*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(struct bcm_op *VAR_0, struct hrtimer *VAR_1)
{
 ktime_t VAR_2;

 if (VAR_0->kt_ival1 && VAR_0->count)
  VAR_2 = VAR_0->kt_ival1;
 else if (VAR_0->kt_ival2)
  VAR_2 = VAR_0->kt_ival2;
 else
  return 0;

 FUNC_0(VAR_1, FUNC_1(FUNC_2(), VAR_2));
 return 1;
}
