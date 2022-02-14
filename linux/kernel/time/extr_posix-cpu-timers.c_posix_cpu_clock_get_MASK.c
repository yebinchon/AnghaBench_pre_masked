
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec64 {int dummy; } ;
struct task_struct {int dummy; } ;
typedef int clockid_t ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int VAR_0 ;
 int FUNC_2 (int const,struct task_struct*) ;
 int FUNC_3 (int const,struct task_struct*,int) ;
 struct task_struct* FUNC_4 (int const) ;
 struct timespec64 FUNC_5 (int ) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static int FUNC_7(const clockid_t VAR_1, struct timespec64 *VAR_2)
{
 const clockid_t VAR_3 = FUNC_1(VAR_1);
 struct task_struct *VAR_4;
 u64 VAR_5;

 VAR_4 = FUNC_4(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 if (FUNC_0(VAR_1))
  VAR_5 = FUNC_2(VAR_3, VAR_4);
 else
  VAR_5 = FUNC_3(VAR_3, VAR_4, 0);
 FUNC_6(VAR_4);

 *VAR_2 = FUNC_5(VAR_5);
 return 0;
}
