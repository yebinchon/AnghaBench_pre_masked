
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_mday; int tm_mon; int tm_year; } ;
typedef int fsec_t ;
typedef int TimestampTz ;
typedef scalar_t__ DateADT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int*,struct pg_tm*,int *,int *,int *) ;

DateADT
FUNC_6(void)
{
 TimestampTz VAR_3;
 struct pg_tm VAR_4,
      *VAR_5 = &VAR_4;
 fsec_t VAR_6;
 int VAR_7;

 VAR_3 = FUNC_0();

 if (FUNC_5(VAR_3, &VAR_7, VAR_5, &VAR_6, ((void*)0), ((void*)0)) != 0)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("timestamp out of range")));

 return FUNC_1(VAR_5->tm_year, VAR_5->tm_mon, VAR_5->tm_mday) - VAR_2;
}
