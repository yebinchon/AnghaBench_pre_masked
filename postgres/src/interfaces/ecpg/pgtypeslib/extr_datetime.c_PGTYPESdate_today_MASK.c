
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; } ;
typedef scalar_t__ date ;


 int FUNC_0 (struct tm*) ;
 scalar_t__ FUNC_1 (int,int,int) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(date * VAR_1)
{
 struct tm VAR_2;

 FUNC_0(&VAR_2);
 if (VAR_0 == 0)
  *VAR_1 = FUNC_1(VAR_2.tm_year, VAR_2.tm_mon, VAR_2.tm_mday) - FUNC_1(2000, 1, 1);
 return;
}
