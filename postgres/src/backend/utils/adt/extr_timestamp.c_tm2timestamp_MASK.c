
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
typedef int fsec_t ;
typedef scalar_t__ Timestamp ;
typedef scalar_t__ TimeOffset ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;

int
FUNC_5(struct pg_tm *VAR_2, fsec_t VAR_3, int *VAR_4, Timestamp *VAR_5)
{
 TimeOffset VAR_6;
 TimeOffset VAR_7;


 if (!FUNC_0(VAR_2->tm_year, VAR_2->tm_mon, VAR_2->tm_mday))
 {
  *VAR_5 = 0;
  return -1;
 }

 VAR_6 = FUNC_2(VAR_2->tm_year, VAR_2->tm_mon, VAR_2->tm_mday) - VAR_0;
 VAR_7 = FUNC_4(VAR_2->tm_hour, VAR_2->tm_min, VAR_2->tm_sec, VAR_3);

 *VAR_5 = VAR_6 * VAR_1 + VAR_7;

 if ((*VAR_5 - VAR_7) / VAR_1 != VAR_6)
 {
  *VAR_5 = 0;
  return -1;
 }


 if ((*VAR_5 < 0 && VAR_6 > 0) ||
  (*VAR_5 > 0 && VAR_6 < -1))
 {
  *VAR_5 = 0;
  return -1;
 }
 if (VAR_4 != ((void*)0))
  *VAR_5 = FUNC_3(*VAR_5, -(*VAR_4));


 if (!FUNC_1(*VAR_5))
 {
  *VAR_5 = 0;
  return -1;
 }

 return 0;
}
