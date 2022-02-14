
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,char**,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void FUNC_10(char *VAR_5)
{
 char *VAR_6, *VAR_7;
 int VAR_8 = 0;

 if (VAR_4) {
  FUNC_8();
  FUNC_5(1, "--cpu | --pkg");
 }
 VAR_1 = FUNC_0((VAR_3 + 1));
 if (VAR_1 == ((void*)0))
  FUNC_4(1, "cpu_selected_set");
 FUNC_3(VAR_2, VAR_1);

 for (VAR_6 = VAR_5; VAR_6 && *VAR_6;) {

  if (*VAR_6 == ',') {
   VAR_6++;
   continue;
  }

  if (*VAR_6 == '-') {
   int VAR_9;

   VAR_6++;
   VAR_9 = FUNC_7(VAR_6, &VAR_7, 10);
   if (VAR_6 == VAR_7)
    continue;

   while (VAR_8 <= VAR_9) {
    if (VAR_8 > VAR_3)
     FUNC_5(1, "Requested cpu%d exceeds max cpu%d", VAR_8, VAR_3);
    FUNC_2(VAR_8, VAR_2, VAR_1);
    VAR_8++;
   }
   VAR_6 = VAR_7;
   continue;
  }

  if (FUNC_6(VAR_6, "all", 3) == 0) {
   for (VAR_8 = 0; VAR_8 <= VAR_3; VAR_8 += 1) {
    if (FUNC_1(VAR_8, VAR_2, VAR_0))
     FUNC_2(VAR_8, VAR_2, VAR_1);
   }
   VAR_6 += 3;
   if (*VAR_6 == 0)
    break;
  }

  if (FUNC_6(VAR_6, "even", 4) == 0) {
   for (VAR_8 = 0; VAR_8 <= VAR_3; VAR_8 += 2) {
    if (FUNC_1(VAR_8, VAR_2, VAR_0))
     FUNC_2(VAR_8, VAR_2, VAR_1);
   }
   VAR_6 += 4;
   if (*VAR_6 == 0)
    break;
  }


  if (FUNC_6(VAR_6, "odd", 3) == 0) {
   for (VAR_8 = 1; VAR_8 <= VAR_3; VAR_8 += 2) {
    if (FUNC_1(VAR_8, VAR_2, VAR_0))
     FUNC_2(VAR_8, VAR_2, VAR_1);
   }
   VAR_6 += 3;
   if (*VAR_6 == 0)
    break;
  }

  VAR_8 = FUNC_7(VAR_6, &VAR_7, 10);
  if (VAR_6 == VAR_7)
   FUNC_5(1, "--cpu cpu-set: confused by '%s'", VAR_6);
  if (VAR_8 > VAR_3)
   FUNC_5(1, "Requested cpu%d exceeds max cpu%d", VAR_8, VAR_3);
  FUNC_2(VAR_8, VAR_2, VAR_1);
  VAR_6 = VAR_7;
 }

 FUNC_9();

}
