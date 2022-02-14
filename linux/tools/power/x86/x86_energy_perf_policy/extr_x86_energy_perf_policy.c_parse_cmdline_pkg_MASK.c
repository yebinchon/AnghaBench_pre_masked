
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char**,int) ;
 int FUNC_3 () ;

void FUNC_4(char *VAR_4)
{
 char *VAR_5, *VAR_6;
 int VAR_7 = 0;

 if (VAR_0) {
  FUNC_3();
  FUNC_0(1, "--pkg | --cpu");
 }
 VAR_3 = 0;

 for (VAR_5 = VAR_4; VAR_5 && *VAR_5;) {

  if (*VAR_5 == ',') {
   VAR_5++;
   continue;
  }

  if (*VAR_5 == '-') {
   int VAR_8;

   VAR_5++;
   VAR_8 = FUNC_2(VAR_5, &VAR_6, 10);
   if (VAR_5 == VAR_6)
    continue;

   while (VAR_7 <= VAR_8) {
    if (VAR_7 > VAR_1)
     FUNC_0(1, "Requested pkg%d exceeds max pkg%d", VAR_7, VAR_1);
    VAR_3 |= 1 << VAR_7;
    VAR_7++;
   }
   VAR_5 = VAR_6;
   continue;
  }

  if (FUNC_1(VAR_5, "all", 3) == 0) {
   VAR_3 = VAR_2;
   return;
  }

  VAR_7 = FUNC_2(VAR_5, &VAR_6, 10);
  if (VAR_7 > VAR_1)
   FUNC_0(1, "Requested pkg%d Exceeds max pkg%d", VAR_7, VAR_1);
  VAR_3 |= 1 << VAR_7;
  VAR_5 = VAR_6;
 }
}
