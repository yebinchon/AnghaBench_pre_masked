
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_parman {int bulk_budget; int bulk_noop; int run_budget; } ;


 int VAR_0 ;
 int FUNC_0 (struct test_parman*) ;

__attribute__((used)) static bool FUNC_1(struct test_parman *VAR_1)
{
 if (VAR_1->run_budget-- == 0)
  return 0;
 if (VAR_1->bulk_budget-- != 0)
  return 1;

 VAR_1->bulk_budget = FUNC_0(VAR_1) &
       VAR_0;
 VAR_1->bulk_noop = FUNC_0(VAR_1) & 1;
 return 1;
}
