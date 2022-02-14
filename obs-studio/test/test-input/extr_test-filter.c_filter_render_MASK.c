
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_filter {int whatever; int source; } ;
typedef int gs_effect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, gs_effect_t *VAR_3)
{
 struct test_filter *VAR_4 = VAR_2;

 if (!FUNC_1(VAR_4->source, VAR_0,
          VAR_1))
  return;

 FUNC_2(VAR_4->source, VAR_4->whatever, 0, 0);

 FUNC_0(VAR_3);
}
