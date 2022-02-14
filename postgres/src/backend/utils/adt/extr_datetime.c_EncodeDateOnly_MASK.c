
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_mon; scalar_t__ tm_year; int tm_mday; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,int,int) ;

void
FUNC_3(struct pg_tm *VAR_3, int VAR_4, char *VAR_5)
{
 FUNC_0(VAR_3->tm_mon >= 1 && VAR_3->tm_mon <= VAR_2);

 switch (VAR_4)
 {
  case 131:
  case 128:

   VAR_5 = FUNC_2(VAR_5,
         (VAR_3->tm_year > 0) ? VAR_3->tm_year : -(VAR_3->tm_year - 1), 4);
   *VAR_5++ = '-';
   VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mon, 2);
   *VAR_5++ = '-';
   VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mday, 2);
   break;

  case 129:

   if (VAR_1 == VAR_0)
   {
    VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mday, 2);
    *VAR_5++ = '/';
    VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mon, 2);
   }
   else
   {
    VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mon, 2);
    *VAR_5++ = '/';
    VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mday, 2);
   }
   *VAR_5++ = '/';
   VAR_5 = FUNC_2(VAR_5,
         (VAR_3->tm_year > 0) ? VAR_3->tm_year : -(VAR_3->tm_year - 1), 4);
   break;

  case 132:

   VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mday, 2);
   *VAR_5++ = '.';
   VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mon, 2);
   *VAR_5++ = '.';
   VAR_5 = FUNC_2(VAR_5,
         (VAR_3->tm_year > 0) ? VAR_3->tm_year : -(VAR_3->tm_year - 1), 4);
   break;

  case 130:
  default:

   if (VAR_1 == VAR_0)
   {
    VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mday, 2);
    *VAR_5++ = '-';
    VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mon, 2);
   }
   else
   {
    VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mon, 2);
    *VAR_5++ = '-';
    VAR_5 = FUNC_2(VAR_5, VAR_3->tm_mday, 2);
   }
   *VAR_5++ = '-';
   VAR_5 = FUNC_2(VAR_5,
         (VAR_3->tm_year > 0) ? VAR_3->tm_year : -(VAR_3->tm_year - 1), 4);
   break;
 }

 if (VAR_3->tm_year <= 0)
 {
  FUNC_1(VAR_5, " BC", 3);
  VAR_5 += 3;
 }
 *VAR_5 = '\0';
}
