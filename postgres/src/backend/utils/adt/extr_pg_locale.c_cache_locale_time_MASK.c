
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_wday; int tm_mon; int tm_mday; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 struct tm* FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (char*,int,char*,struct tm*) ;
 int FUNC_8 (int *) ;

void
FUNC_9(void)
{
 char VAR_15[(2 * 7 + 2 * 12) * VAR_6];
 char *VAR_16;
 time_t VAR_17;
 struct tm *VAR_18;
 bool VAR_19 = 0;
 int VAR_20;
 int VAR_21;
 char *VAR_22;





 if (VAR_0)
  return;

 FUNC_1(VAR_1, "cache_locale_time() executed; locale: \"%s\"", VAR_10);
 VAR_22 = FUNC_6(VAR_5, ((void*)0));
 if (!VAR_22)
  FUNC_1(VAR_2, "setlocale(NULL) failed");
 VAR_22 = FUNC_5(VAR_22);
 FUNC_6(VAR_5, VAR_10);


 VAR_17 = FUNC_8(((void*)0));
 VAR_18 = FUNC_2(&VAR_17);


 VAR_16 = VAR_15;
 VAR_9 = 0;


 for (VAR_21 = 0; VAR_21 < 7; VAR_21++)
 {
  VAR_18->tm_wday = VAR_21;
  if (FUNC_7(VAR_16, VAR_6, "%a", VAR_18) <= 0)
   VAR_19 = 1;
  VAR_16 += VAR_6;
  if (FUNC_7(VAR_16, VAR_6, "%A", VAR_18) <= 0)
   VAR_19 = 1;
  VAR_16 += VAR_6;
 }


 for (VAR_21 = 0; VAR_21 < 12; VAR_21++)
 {
  VAR_18->tm_mon = VAR_21;
  VAR_18->tm_mday = 1;
  if (FUNC_7(VAR_16, VAR_6, "%b", VAR_18) <= 0)
   VAR_19 = 1;
  VAR_16 += VAR_6;
  if (FUNC_7(VAR_16, VAR_6, "%B", VAR_18) <= 0)
   VAR_19 = 1;
  VAR_16 += VAR_6;
 }
 if (!FUNC_6(VAR_5, VAR_22))
  FUNC_1(VAR_3, "failed to restore LC_TIME to \"%s\"", VAR_22);





 if (VAR_19)
  FUNC_1(VAR_2, "strftime() failed: %m");


 FUNC_3(VAR_22);
 VAR_20 = FUNC_4(VAR_10, 1);
 if (VAR_20 < 0)
  VAR_20 = VAR_7;
 VAR_16 = VAR_15;


 for (VAR_21 = 0; VAR_21 < 7; VAR_21++)
 {
  FUNC_0(&VAR_11[VAR_21], VAR_16, VAR_20);
  VAR_16 += VAR_6;
  FUNC_0(&VAR_13[VAR_21], VAR_16, VAR_20);
  VAR_16 += VAR_6;
 }


 for (VAR_21 = 0; VAR_21 < 12; VAR_21++)
 {
  FUNC_0(&VAR_12[VAR_21], VAR_16, VAR_20);
  VAR_16 += VAR_6;
  FUNC_0(&VAR_14[VAR_21], VAR_16, VAR_20);
  VAR_16 += VAR_6;
 }

 VAR_0 = 1;
}
