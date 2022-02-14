
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_hibernation_ops {scalar_t__ leave; scalar_t__ restore_cleanup; scalar_t__ pre_restore; scalar_t__ enter; scalar_t__ finish; scalar_t__ prepare; scalar_t__ pre_snapshot; scalar_t__ end; scalar_t__ begin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 struct platform_hibernation_ops const* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(const struct platform_hibernation_ops *VAR_4)
{
 if (VAR_4 && !(VAR_4->begin && VAR_4->end && VAR_4->pre_snapshot
     && VAR_4->prepare && VAR_4->finish && VAR_4->enter && VAR_4->pre_restore
     && VAR_4->restore_cleanup && VAR_4->leave)) {
  FUNC_0(1);
  return;
 }
 FUNC_1();
 VAR_3 = VAR_4;
 if (VAR_4)
  VAR_2 = VAR_0;
 else if (VAR_2 == VAR_0)
  VAR_2 = VAR_1;

 FUNC_2();
}
