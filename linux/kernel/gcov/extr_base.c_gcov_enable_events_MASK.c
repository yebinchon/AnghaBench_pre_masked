
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct gcov_info*) ;
 int VAR_1 ;
 struct gcov_info* FUNC_2 (struct gcov_info*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 struct gcov_info *VAR_3 = ((void*)0);

 FUNC_3(&VAR_2);
 VAR_1 = 1;


 while ((VAR_3 = FUNC_2(VAR_3))) {
  FUNC_1(VAR_0, VAR_3);
  FUNC_0();
 }

 FUNC_4(&VAR_2);
}
