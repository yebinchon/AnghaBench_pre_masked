
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_config {int * test_fs; int * test_driver; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct test_config *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->test_driver);
 VAR_0->test_driver = ((void*)0);

 FUNC_0(VAR_0->test_fs);
 VAR_0->test_fs = ((void*)0);
}
