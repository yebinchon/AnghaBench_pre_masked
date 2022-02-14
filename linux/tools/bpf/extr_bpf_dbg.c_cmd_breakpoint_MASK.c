
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 () ;
 int * VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 unsigned int FUNC_8 (char*,int *,int) ;

__attribute__((used)) static int FUNC_9(char *VAR_4)
{
 if (!FUNC_2())
  return VAR_0;
 if (FUNC_7(VAR_4) == 0)
  FUNC_1();
 else if (FUNC_5(VAR_4, "reset") == 0)
  FUNC_3();
 else {
  unsigned int VAR_5 = FUNC_8(VAR_4, ((void*)0), 10);

  if (VAR_5 < VAR_3) {
   FUNC_4(VAR_5);
   FUNC_6("breakpoint at: ");
   FUNC_0(VAR_2[VAR_5], VAR_5);
  }
 }

 return VAR_1;
}
