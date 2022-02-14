
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_parman_item {int dummy; } ;
struct test_parman {struct test_parman_item** prio_array; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct test_parman_item**,struct test_parman_item**,int ) ;
 int FUNC_2 (struct test_parman_item**,int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2, unsigned long VAR_3)
{
 struct test_parman *VAR_4 = VAR_0;
 struct test_parman_item **VAR_5 = VAR_4->prio_array;

 FUNC_1(&VAR_5[VAR_2], &VAR_5[VAR_1],
  FUNC_0(VAR_3));
 FUNC_2(&VAR_5[VAR_1], 0, FUNC_0(VAR_3));
}
