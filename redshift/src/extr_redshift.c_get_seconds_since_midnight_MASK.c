
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; } ;


 int FUNC_0 (int *,struct tm*) ;

__attribute__((used)) static int
FUNC_1(double VAR_0)
{
 time_t VAR_1 = (time_t)VAR_0;
 struct tm VAR_2;
 FUNC_0(&VAR_1, &VAR_2);
 return VAR_2.tm_sec + VAR_2.tm_min * 60 + VAR_2.tm_hour * 3600;
}
