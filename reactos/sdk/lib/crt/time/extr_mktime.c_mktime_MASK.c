
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
typedef int __time64_t ;


 int VAR_0 ;
 int FUNC_0 (struct tm*,int ) ;

time_t
FUNC_1(struct tm *VAR_1)
{
    __time64_t VAR_2 = FUNC_0(VAR_1, 0);
    return (time_t)((VAR_2 > VAR_0) ? -1 : VAR_2);
}
