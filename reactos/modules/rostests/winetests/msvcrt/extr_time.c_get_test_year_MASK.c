
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; } ;


 int VAR_0 ;
 struct tm* FUNC_0 (int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(time_t *VAR_1)
{
    time_t VAR_2 = FUNC_1(((void*)0));
    struct tm *VAR_3 = FUNC_0(&VAR_2);


    *VAR_1 = VAR_0 * ((VAR_3->tm_year - 70) * 365 +
                           (VAR_3->tm_year - 69) / 4 -
                           (VAR_3->tm_year - 1) / 100 +
                           (VAR_3->tm_year + 299) / 400);
    return VAR_3->tm_year;
}
