
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {unsigned int cpu; int flags; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct task_struct*,unsigned int) ;
 struct task_struct* FUNC_3 (int (*) (void*),void*,int ,char const*,unsigned int) ;
 int FUNC_4 (int ,int *) ;
 TYPE_1__* FUNC_5 (struct task_struct*) ;

struct task_struct *FUNC_6(int (*VAR_1)(void *VAR_2),
       void *VAR_3, unsigned int VAR_4,
       const char *VAR_5)
{
 struct task_struct *VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_3, FUNC_1(VAR_4), VAR_5,
       VAR_4);
 if (FUNC_0(VAR_6))
  return VAR_6;
 FUNC_2(VAR_6, VAR_4);

 FUNC_4(VAR_0, &FUNC_5(VAR_6)->flags);
 FUNC_5(VAR_6)->cpu = VAR_4;
 return VAR_6;
}
