
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct runtime_stat {int dummy; } ;


 double FUNC_0 (double) ;
 double FUNC_1 (int,int,struct runtime_stat*) ;
 double FUNC_2 (int,int,struct runtime_stat*) ;
 double FUNC_3 (int,int,struct runtime_stat*) ;

__attribute__((used)) static double FUNC_4(int VAR_0, int VAR_1, struct runtime_stat *VAR_2)
{
 double VAR_3 = (FUNC_2(VAR_0, VAR_1, VAR_2) +
        FUNC_1(VAR_0, VAR_1, VAR_2) +
        FUNC_3(VAR_0, VAR_1, VAR_2));
 if (VAR_3 == 0)
  return 0;
 return FUNC_0(1.0 - VAR_3);
}
