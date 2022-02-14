
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut32 ;
typedef scalar_t__ time_t ;
struct tm {int tm_isdst; } ;


 char* FUNC_0 (struct tm*) ;
 char* FUNC_1 (scalar_t__*) ;
 struct tm* FUNC_2 (scalar_t__*,struct tm*) ;
 struct tm* FUNC_3 (scalar_t__*) ;
 size_t FUNC_4 (char*,char*) ;
 int FUNC_5 (scalar_t__*) ;

const char *FUNC_6(ut32 VAR_0, int VAR_1) {
 char *VAR_2;
 time_t VAR_3 = (time_t)VAR_0;
 struct tm *VAR_4;
 struct tm VAR_5;

 if (VAR_1) {
  VAR_2 = FUNC_1(&VAR_3);
 } else {

  static int VAR_6 = 0;
  if (VAR_6)
   VAR_3 += 3600;
  VAR_4 = FUNC_2(&VAR_3, &VAR_5);
  if (!VAR_4)
   return "*Invalid time*";
  VAR_2 = FUNC_0 (VAR_4);
 }

 VAR_2[FUNC_4 (VAR_2, "\n")] = '\0';
 return VAR_2;
}
