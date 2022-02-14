
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
typedef int time_t ;
struct tm {int tm_mday; int tm_mon; int tm_year; } ;


 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (struct tm*) ;

__attribute__((used)) static time_t
FUNC_2(int VAR_0, int VAR_1, int VAR_2)
{
 struct tm VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.tm_mday = VAR_2;
 VAR_3.tm_mon = VAR_1 - 1;
 VAR_3.tm_year = VAR_0 - 1900;

 return FUNC_1(&VAR_3);
}
