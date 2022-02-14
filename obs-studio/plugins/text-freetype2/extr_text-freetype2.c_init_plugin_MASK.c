
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int **) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int * VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
 if (VAR_2)
  return;

 FUNC_0(&VAR_1);

 if (VAR_1 == ((void*)0)) {
  FUNC_1(VAR_0, "FT2-text: Failed to initialize FT2.");
  return;
 }

 if (!FUNC_2())
  FUNC_3();

 VAR_2 = 1;
}
