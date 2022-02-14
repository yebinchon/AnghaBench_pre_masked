
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_sec; int tm_min; int tm_hour; } ;
typedef int fsec_t ;


 char* FUNC_0 (char*,int ,int ,int ,int) ;
 char* FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 char* FUNC_2 (char*,int ,int) ;

void
FUNC_3(struct pg_tm *VAR_1, fsec_t VAR_2, bool VAR_3, int VAR_4, int VAR_5, char *VAR_6)
{
 VAR_6 = FUNC_2(VAR_6, VAR_1->tm_hour, 2);
 *VAR_6++ = ':';
 VAR_6 = FUNC_2(VAR_6, VAR_1->tm_min, 2);
 *VAR_6++ = ':';
 VAR_6 = FUNC_0(VAR_6, VAR_1->tm_sec, VAR_2, VAR_0, 1);
 if (VAR_3)
  VAR_6 = FUNC_1(VAR_6, VAR_4, VAR_5);
 *VAR_6 = '\0';
}
