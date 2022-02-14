
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_parman_prio {unsigned long priority; } ;
struct test_parman {struct test_parman_prio* prios; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct test_parman*) ;

__attribute__((used)) static unsigned long FUNC_1(struct test_parman *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

again:
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == 0)
  goto again;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct test_parman_prio *VAR_4 = &VAR_1->prios[VAR_3];

  if (VAR_4->priority == 0)
   break;
  if (VAR_4->priority == VAR_2)
   goto again;
 }
 return VAR_2;
}
