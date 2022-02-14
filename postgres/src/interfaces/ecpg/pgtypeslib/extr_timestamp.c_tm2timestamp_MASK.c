
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_sec; int tm_min; int tm_hour; } ;
typedef int int64 ;
typedef int fsec_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;

int
FUNC_5(struct tm *VAR_1, fsec_t VAR_2, int *VAR_3, timestamp * VAR_4)
{
 int VAR_5;
 int64 VAR_6;


 if (!FUNC_0(VAR_1->tm_year, VAR_1->tm_mon, VAR_1->tm_mday))
  return -1;

 VAR_5 = FUNC_2(VAR_1->tm_year, VAR_1->tm_mon, VAR_1->tm_mday) - FUNC_2(2000, 1, 1);
 VAR_6 = FUNC_4(VAR_1->tm_hour, VAR_1->tm_min, VAR_1->tm_sec, VAR_2);
 *VAR_4 = (VAR_5 * VAR_0) + VAR_6;

 if ((*VAR_4 - VAR_6) / VAR_0 != VAR_5)
  return -1;


 if ((*VAR_4 < 0 && VAR_5 > 0) ||
  (*VAR_4 > 0 && VAR_5 < -1))
  return -1;
 if (VAR_3 != ((void*)0))
  *VAR_4 = FUNC_3(*VAR_4, -(*VAR_3));


 if (!FUNC_1(*VAR_4))
  return -1;

 return 0;
}
