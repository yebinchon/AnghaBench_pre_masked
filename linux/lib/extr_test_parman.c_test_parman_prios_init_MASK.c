
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_parman_prio {int priority; int parman_prio; } ;
struct test_parman {int parman; struct test_parman_prio* prios; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct test_parman*) ;

__attribute__((used)) static void FUNC_2(struct test_parman *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct test_parman_prio *VAR_3 = &VAR_1->prios[VAR_2];


  VAR_3->priority = FUNC_1(VAR_1);
  FUNC_0(VAR_1->parman, &VAR_3->parman_prio,
     VAR_3->priority);
 }
}
