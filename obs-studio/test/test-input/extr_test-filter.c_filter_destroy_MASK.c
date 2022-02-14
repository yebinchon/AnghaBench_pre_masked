
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_filter {int whatever; } ;


 int FUNC_0 (struct test_filter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct test_filter *VAR_1 = VAR_0;

 if (VAR_1) {
  FUNC_2();

  FUNC_1(VAR_1->whatever);
  FUNC_0(VAR_1);

  FUNC_3();
 }
}
