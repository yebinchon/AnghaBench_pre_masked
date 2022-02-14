
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int time_t ;
typedef int sway_log_importance_t ;
struct tm {int dummy; } ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 struct tm* FUNC_2 (int *,struct tm*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int,char*,struct tm*) ;
 int FUNC_4 (int *) ;
 char** VAR_5 ;
 int FUNC_5 (int ,char const*,int ) ;

__attribute__((used)) static void FUNC_6(sway_log_importance_t VAR_6, const char *VAR_7,
  va_list VAR_8) {
 if (VAR_6 > VAR_3) {
  return;
 }

 struct tm VAR_9;
 time_t VAR_10 = FUNC_4(((void*)0));
 struct tm *VAR_11 = FUNC_2(&VAR_10, &VAR_9);
 char VAR_12[26];


 FUNC_3(VAR_12, sizeof(VAR_12), "%F %T - ", VAR_11);
 FUNC_0(VAR_4, "%s", VAR_12);

 unsigned VAR_13 = (VAR_6 < VAR_1) ? VAR_6 :
  VAR_1 - 1;

 if (VAR_2 && FUNC_1(VAR_0)) {
  FUNC_0(VAR_4, "%s", VAR_5[VAR_13]);
 }

 FUNC_5(VAR_4, VAR_7, VAR_8);

 if (VAR_2 && FUNC_1(VAR_0)) {
  FUNC_0(VAR_4, "\x1B[0m");
 }
 FUNC_0(VAR_4, "\n");
}
