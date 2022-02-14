
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void *(*VAR_0)(void *), void *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1();
 if (VAR_3 == -1) {
  FUNC_2("fork");
  FUNC_0(1);
 }

 if (VAR_3)
  return;

 FUNC_3(VAR_2);

 VAR_0(VAR_1);

 FUNC_0(0);
}
