
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct task_struct {int dummy; } ;
typedef int clockid_t ;



 int const VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (struct task_struct*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

__attribute__((used)) static u64 FUNC_3(const clockid_t VAR_1, struct task_struct *VAR_2)
{
 u64 VAR_3, VAR_4;

 if (VAR_1 == VAR_0)
  return FUNC_2(VAR_2);

 FUNC_1(VAR_2, &VAR_3, &VAR_4);

 switch (VAR_1) {
 case 129:
  return VAR_3 + VAR_4;
 case 128:
  return VAR_3;
 default:
  FUNC_0(1);
 }
 return 0;
}
