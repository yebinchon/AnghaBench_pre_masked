
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void)
{

 if (FUNC_0(&VAR_2, 0, 1))
  return;


 VAR_1 = 0;


 if (VAR_4)
  FUNC_2(&VAR_0);
 else
  VAR_3 = 0;

 FUNC_1("Kernel memory leak detector disabled\n");
}
