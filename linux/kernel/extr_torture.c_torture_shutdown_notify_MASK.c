
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_5,
       unsigned long VAR_6, void *VAR_7)
{
 FUNC_3(&VAR_4);
 if (FUNC_0(VAR_3) == VAR_0) {
  FUNC_1("Unscheduled system shutdown detected");
  FUNC_2(VAR_3, VAR_1);
 } else {
  FUNC_5("Concurrent rmmod and shutdown illegal!\n");
 }
 FUNC_4(&VAR_4);
 return VAR_2;
}
