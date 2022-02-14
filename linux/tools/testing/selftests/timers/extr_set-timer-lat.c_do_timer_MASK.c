
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int,int const,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

int FUNC_4(int VAR_2, int VAR_3)
{
 timer_t VAR_4;
 const int VAR_5 = VAR_0;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5, &VAR_4);

 if (VAR_6)
  return VAR_6 == 1 ? 0 : VAR_6;

 while (VAR_1 < 5)
  FUNC_2(1);

 FUNC_3(VAR_4);
 return FUNC_0(VAR_3, VAR_5);
}
