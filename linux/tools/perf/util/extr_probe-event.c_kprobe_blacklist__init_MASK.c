
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 if (!FUNC_1(&VAR_0))
  return;

 if (FUNC_0(&VAR_0) < 0)
  FUNC_2("No kprobe blacklist support, ignored\n");
}
