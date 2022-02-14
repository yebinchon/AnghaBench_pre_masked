
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_data {scalar_t__ expected_length; } ;


 scalar_t__ FUNC_0 (struct test_data*,int) ;

__attribute__((used)) static int FUNC_1(struct test_data *VAR_0, int VAR_1)
{
 struct test_data *VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = VAR_0; VAR_2->expected_length; VAR_2++) {
  if (FUNC_0(VAR_2, VAR_1))
   VAR_3 = -1;
 }

 return VAR_3;
}
