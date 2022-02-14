
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct static_key {int enabled; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct static_key*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct static_key*) ;

__attribute__((used)) static void FUNC_6(struct static_key *VAR_0)
{
 FUNC_4();

 if (FUNC_5(VAR_0))
  return;

 FUNC_1();
 if (FUNC_0(&VAR_0->enabled))
  FUNC_3(VAR_0);
 FUNC_2();
}
