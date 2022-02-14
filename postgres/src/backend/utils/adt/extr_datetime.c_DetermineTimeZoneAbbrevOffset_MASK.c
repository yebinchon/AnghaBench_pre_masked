
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_isdst; } ;
typedef int pg_tz ;
typedef int pg_time_t ;


 scalar_t__ FUNC_0 (int ,char const*,int *,int*,int*) ;
 int FUNC_1 (struct pg_tm*,int *,int *) ;

int
FUNC_2(struct pg_tm *VAR_0, const char *VAR_1, pg_tz *VAR_2)
{
 pg_time_t VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;





 VAR_4 = FUNC_1(VAR_0, VAR_2, &VAR_3);




 if (FUNC_0(VAR_3, VAR_1, VAR_2,
             &VAR_5, &VAR_6))
 {

  VAR_0->tm_isdst = VAR_6;
  return VAR_5;
 }





 return VAR_4;
}
