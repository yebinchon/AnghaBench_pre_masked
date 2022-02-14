
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_parman {int dummy; } ;


 scalar_t__ FUNC_0 (struct test_parman*) ;
 int FUNC_1 (struct test_parman*) ;
 int FUNC_2 (struct test_parman*,int) ;
 struct test_parman* FUNC_3 (int *) ;
 int FUNC_4 (struct test_parman*) ;
 int VAR_0 ;
 int FUNC_5 (struct test_parman*) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct test_parman *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_3(&VAR_0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  goto out;

 VAR_2 = FUNC_2(VAR_1, 0);
 if (VAR_2)
  goto out;
out:
 FUNC_4(VAR_1);
 return VAR_2;
}
