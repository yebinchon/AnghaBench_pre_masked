
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_parman_prio {int parman_prio; } ;
struct test_parman {struct test_parman_prio* prios; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct test_parman *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct test_parman_prio *VAR_3 = &VAR_1->prios[VAR_2];

  FUNC_0(&VAR_3->parman_prio);
 }
}
