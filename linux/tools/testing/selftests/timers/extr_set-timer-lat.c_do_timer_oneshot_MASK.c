
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timer_t ;
typedef int timeout ;
struct timeval {int tv_sec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int const) ;
 int FUNC_1 (int,int const) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct timeval*,int ,int) ;
 int FUNC_3 (int ,int *,int *,int *,struct timeval*) ;
 int FUNC_4 (int,int,int const,int *) ;
 int FUNC_5 (int ) ;

int FUNC_6(int VAR_2, int VAR_3)
{
 timer_t VAR_4;
 const int VAR_5 = 0;
 struct timeval VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_5, &VAR_4);

 if (VAR_7)
  return VAR_7 == 1 ? 0 : VAR_7;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.tv_sec = 5;
 do {
  VAR_7 = FUNC_3(0, ((void*)0), ((void*)0), ((void*)0), &VAR_6);
 } while (VAR_7 == -1 && VAR_1 == VAR_0);

 FUNC_5(VAR_4);
 VAR_7 = FUNC_1(VAR_3, VAR_5);
 VAR_7 |= FUNC_0(VAR_3, VAR_5);
 return VAR_7;
}
