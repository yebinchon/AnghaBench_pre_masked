
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_parman_item {int dummy; } ;
struct test_parman {unsigned long prio_array_limit; struct test_parman_item** prio_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 struct test_parman_item** FUNC_1 (struct test_parman_item**,int ,int ) ;
 int FUNC_2 (struct test_parman_item**,int ,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, unsigned long VAR_3)
{
 struct test_parman *VAR_4 = VAR_2;
 struct test_parman_item **VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_1(VAR_4->prio_array,
         FUNC_0(VAR_3), VAR_1);
 if (VAR_3 == 0)
  return 0;
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = VAR_4->prio_array_limit;
 if (VAR_3 > VAR_6)
  FUNC_2(&VAR_5[VAR_6], 0,
         FUNC_0(VAR_3 - VAR_6));
 VAR_4->prio_array = VAR_5;
 VAR_4->prio_array_limit = VAR_3;
 return 0;
}
