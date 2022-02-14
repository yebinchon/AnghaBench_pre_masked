
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static double FUNC_4(void)
{
 static int VAR_0 = 1;
 static double VAR_1 = 0;
 if (VAR_0) {
  time_t VAR_2 = FUNC_3(((void*)0));
  time_t VAR_3 = FUNC_2(FUNC_0(&VAR_2));
  time_t VAR_4 = FUNC_2(FUNC_1(&VAR_2));
  VAR_1 = (VAR_4 - VAR_3) * 1000;
  VAR_0 = 0;
 }
 return VAR_1;
}
