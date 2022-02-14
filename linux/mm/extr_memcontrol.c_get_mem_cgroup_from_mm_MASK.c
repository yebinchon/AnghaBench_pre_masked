
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int owner; } ;
struct mem_cgroup {int css; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 struct mem_cgroup* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct mem_cgroup* VAR_0 ;
 scalar_t__ FUNC_6 (int) ;

struct mem_cgroup *FUNC_7(struct mm_struct *VAR_1)
{
 struct mem_cgroup *VAR_2;

 if (FUNC_1())
  return ((void*)0);

 FUNC_4();
 do {





  if (FUNC_6(!VAR_1))
   VAR_2 = VAR_0;
  else {
   VAR_2 = FUNC_2(FUNC_3(VAR_1->owner));
   if (FUNC_6(!VAR_2))
    VAR_2 = VAR_0;
  }
 } while (!FUNC_0(&VAR_2->css));
 FUNC_5();
 return VAR_2;
}
