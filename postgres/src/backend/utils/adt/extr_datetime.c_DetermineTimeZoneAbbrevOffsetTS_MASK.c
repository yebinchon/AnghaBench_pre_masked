
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_isdst; } ;
typedef int pg_tz ;
typedef int pg_time_t ;
typedef int fsec_t ;
typedef int TimestampTz ;


 scalar_t__ FUNC_0 (int ,char const*,int *,int*,int*) ;
 int FUNC_1 (struct pg_tm*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int*,struct pg_tm*,int *,int *,int *) ;
 int FUNC_6 (int ) ;

int
FUNC_7(TimestampTz VAR_2, const char *VAR_3,
        pg_tz *VAR_4, int *VAR_5)
{
 pg_time_t VAR_6 = FUNC_6(VAR_2);
 int VAR_7;
 int VAR_8;
 int VAR_9;
 struct pg_tm VAR_10;
 fsec_t VAR_11;




 if (FUNC_0(VAR_6, VAR_3, VAR_4,
             &VAR_8, VAR_5))
  return VAR_8;




 if (FUNC_5(VAR_2, &VAR_9, &VAR_10, &VAR_11, ((void*)0), VAR_4) != 0)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("timestamp out of range")));

 VAR_7 = FUNC_1(&VAR_10, VAR_4);
 *VAR_5 = VAR_10.tm_isdst;
 return VAR_7;
}
