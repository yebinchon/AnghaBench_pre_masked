
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tzname ;
typedef int pg_tz ;
typedef int offsetstr ;


 long VAR_0 ;
 long VAR_1 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (char*) ;

pg_tz *
FUNC_3(long VAR_2)
{
 long VAR_3 = (VAR_2 < 0) ? -VAR_2 : VAR_2;
 char VAR_4[64];
 char VAR_5[128];

 FUNC_1(VAR_4, sizeof(VAR_4),
    "%02ld", VAR_3 / VAR_0);
 VAR_3 %= VAR_0;
 if (VAR_3 != 0)
 {
  FUNC_1(VAR_4 + FUNC_2(VAR_4),
     sizeof(VAR_4) - FUNC_2(VAR_4),
     ":%02ld", VAR_3 / VAR_1);
  VAR_3 %= VAR_1;
  if (VAR_3 != 0)
   FUNC_1(VAR_4 + FUNC_2(VAR_4),
      sizeof(VAR_4) - FUNC_2(VAR_4),
      ":%02ld", VAR_3);
 }
 if (VAR_2 > 0)
  FUNC_1(VAR_5, sizeof(VAR_5), "<-%s>+%s",
     VAR_4, VAR_4);
 else
  FUNC_1(VAR_5, sizeof(VAR_5), "<+%s>-%s",
     VAR_4, VAR_4);

 return FUNC_0(VAR_5);
}
