
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogSegNo ;
typedef int XLogRecPtr ;
typedef int TimeLineID ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,char const*,char const*,int ) ;
 int FUNC_7 (char*,char const*,char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 int VAR_4 ;

void
FUNC_12(const char *VAR_5, const char *VAR_6, bool VAR_7)
{
 char VAR_8[VAR_2];
 char VAR_9[VAR_2];
 char *VAR_10;
 char *VAR_11;
 const char *VAR_12;
 int VAR_13;
 XLogSegNo VAR_14;
 XLogRecPtr VAR_15;
 TimeLineID VAR_16;

 FUNC_0(VAR_5 && VAR_6);






 FUNC_1(&VAR_15, &VAR_16);
 FUNC_3(VAR_15, VAR_14, VAR_4);
 FUNC_4(VAR_9, VAR_16, VAR_14,
     VAR_4);




 VAR_10 = VAR_8;
 VAR_11 = VAR_8 + VAR_2 - 1;
 *VAR_11 = '\0';

 for (VAR_12 = VAR_5; *VAR_12; VAR_12++)
 {
  if (*VAR_12 == '%')
  {
   switch (VAR_12[1])
   {
    case 'r':

     VAR_12++;
     FUNC_2(VAR_10, VAR_9, VAR_11 - VAR_10);
     VAR_10 += FUNC_8(VAR_10);
     break;
    case '%':

     VAR_12++;
     if (VAR_10 < VAR_11)
      *VAR_10++ = *VAR_12;
     break;
    default:

     if (VAR_10 < VAR_11)
      *VAR_10++ = *VAR_12;
     break;
   }
  }
  else
  {
   if (VAR_10 < VAR_11)
    *VAR_10++ = *VAR_12;
  }
 }
 *VAR_10 = '\0';

 FUNC_5(VAR_0,
   (FUNC_7("executing %s \"%s\"", VAR_6, VAR_5)));




 VAR_13 = FUNC_9(VAR_8);
 if (VAR_13 != 0)
 {




  FUNC_5((VAR_7 && FUNC_10(VAR_13, 1)) ? VAR_1 : VAR_3,




    (FUNC_6("%s \"%s\": %s", VAR_6,
      VAR_5, FUNC_11(VAR_13))));
 }
}
