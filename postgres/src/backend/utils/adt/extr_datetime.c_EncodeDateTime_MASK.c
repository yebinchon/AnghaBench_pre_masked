
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_mon; scalar_t__ tm_isdst; scalar_t__ tm_year; int tm_mday; int tm_hour; int tm_min; size_t tm_wday; } ;
typedef int fsec_t ;


 char* FUNC_0 (char*,struct pg_tm*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (char*,int,int) ;
 char* VAR_2 ;
 int VAR_3 ;





 int FUNC_3 (int,int,int) ;
 char** VAR_4 ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (char*,char*,int) ;
 char** VAR_5 ;
 char* FUNC_6 (char*,int,int) ;
 int FUNC_7 (char*,char*,char*,char const*) ;
 int FUNC_8 (char*) ;

void
FUNC_9(struct pg_tm *VAR_6, fsec_t VAR_7, bool VAR_8, int VAR_9, const char *VAR_10, int VAR_11, char *VAR_12)
{
 int VAR_13;

 FUNC_1(VAR_6->tm_mon >= 1 && VAR_6->tm_mon <= VAR_3);




 if (VAR_6->tm_isdst < 0)
  VAR_8 = 0;

 switch (VAR_11)
 {
  case 131:
  case 128:

   VAR_12 = FUNC_6(VAR_12,
         (VAR_6->tm_year > 0) ? VAR_6->tm_year : -(VAR_6->tm_year - 1), 4);
   *VAR_12++ = '-';
   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_mon, 2);
   *VAR_12++ = '-';
   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_mday, 2);
   *VAR_12++ = (VAR_11 == 131) ? ' ' : 'T';
   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_hour, 2);
   *VAR_12++ = ':';
   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_min, 2);
   *VAR_12++ = ':';
   VAR_12 = FUNC_0(VAR_12, VAR_6, VAR_7);
   if (VAR_8)
    VAR_12 = FUNC_2(VAR_12, VAR_9, VAR_11);
   break;

  case 129:

   if (VAR_1 == VAR_0)
   {
    VAR_12 = FUNC_6(VAR_12, VAR_6->tm_mday, 2);
    *VAR_12++ = '/';
    VAR_12 = FUNC_6(VAR_12, VAR_6->tm_mon, 2);
   }
   else
   {
    VAR_12 = FUNC_6(VAR_12, VAR_6->tm_mon, 2);
    *VAR_12++ = '/';
    VAR_12 = FUNC_6(VAR_12, VAR_6->tm_mday, 2);
   }
   *VAR_12++ = '/';
   VAR_12 = FUNC_6(VAR_12,
         (VAR_6->tm_year > 0) ? VAR_6->tm_year : -(VAR_6->tm_year - 1), 4);
   *VAR_12++ = ' ';
   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_hour, 2);
   *VAR_12++ = ':';
   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_min, 2);
   *VAR_12++ = ':';
   VAR_12 = FUNC_0(VAR_12, VAR_6, VAR_7);






   if (VAR_8)
   {
    if (VAR_10)
    {
     FUNC_7(VAR_12, " %.*s", VAR_2, VAR_10);
     VAR_12 += FUNC_8(VAR_12);
    }
    else
     VAR_12 = FUNC_2(VAR_12, VAR_9, VAR_11);
   }
   break;

  case 132:

   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_mday, 2);
   *VAR_12++ = '.';
   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_mon, 2);
   *VAR_12++ = '.';
   VAR_12 = FUNC_6(VAR_12,
         (VAR_6->tm_year > 0) ? VAR_6->tm_year : -(VAR_6->tm_year - 1), 4);
   *VAR_12++ = ' ';
   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_hour, 2);
   *VAR_12++ = ':';
   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_min, 2);
   *VAR_12++ = ':';
   VAR_12 = FUNC_0(VAR_12, VAR_6, VAR_7);

   if (VAR_8)
   {
    if (VAR_10)
    {
     FUNC_7(VAR_12, " %.*s", VAR_2, VAR_10);
     VAR_12 += FUNC_8(VAR_12);
    }
    else
     VAR_12 = FUNC_2(VAR_12, VAR_9, VAR_11);
   }
   break;

  case 130:
  default:

   VAR_13 = FUNC_3(VAR_6->tm_year, VAR_6->tm_mon, VAR_6->tm_mday);
   VAR_6->tm_wday = FUNC_4(VAR_13);
   FUNC_5(VAR_12, VAR_4[VAR_6->tm_wday], 3);
   VAR_12 += 3;
   *VAR_12++ = ' ';
   if (VAR_1 == VAR_0)
   {
    VAR_12 = FUNC_6(VAR_12, VAR_6->tm_mday, 2);
    *VAR_12++ = ' ';
    FUNC_5(VAR_12, VAR_5[VAR_6->tm_mon - 1], 3);
    VAR_12 += 3;
   }
   else
   {
    FUNC_5(VAR_12, VAR_5[VAR_6->tm_mon - 1], 3);
    VAR_12 += 3;
    *VAR_12++ = ' ';
    VAR_12 = FUNC_6(VAR_12, VAR_6->tm_mday, 2);
   }
   *VAR_12++ = ' ';
   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_hour, 2);
   *VAR_12++ = ':';
   VAR_12 = FUNC_6(VAR_12, VAR_6->tm_min, 2);
   *VAR_12++ = ':';
   VAR_12 = FUNC_0(VAR_12, VAR_6, VAR_7);
   *VAR_12++ = ' ';
   VAR_12 = FUNC_6(VAR_12,
         (VAR_6->tm_year > 0) ? VAR_6->tm_year : -(VAR_6->tm_year - 1), 4);

   if (VAR_8)
   {
    if (VAR_10)
    {
     FUNC_7(VAR_12, " %.*s", VAR_2, VAR_10);
     VAR_12 += FUNC_8(VAR_12);
    }
    else
    {






     *VAR_12++ = ' ';
     VAR_12 = FUNC_2(VAR_12, VAR_9, VAR_11);
    }
   }
   break;
 }

 if (VAR_6->tm_year <= 0)
 {
  FUNC_5(VAR_12, " BC", 3);
  VAR_12 += 3;
 }
 *VAR_12 = '\0';
}
