
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_results {int dummy; } ;
typedef enum expected_args { ____Placeholder_expected_args } expected_args ;


 int VAR_0 ;



 struct cmd_results* FUNC_0 (int ,char*,char const*,char const*,int,char*,int) ;

struct cmd_results *FUNC_1(int VAR_1, const char *VAR_2, enum expected_args VAR_3, int VAR_4) {
 const char *VAR_5 = ((void*)0);
 switch (VAR_3) {
 case 130:
  if (VAR_1 < VAR_4) {
   VAR_5 = "at least ";
  }
  break;
 case 129:
  if (VAR_1 > VAR_4) {
   VAR_5 = "at most ";
  }
  break;
 case 128:
  if (VAR_1 != VAR_4) {
   VAR_5 = "";
  }
 }
 return VAR_5 ?
  FUNC_0(VAR_0, "Invalid %s command "
    "(expected %s%d argument%s, got %d)",
    VAR_2, VAR_5, VAR_4, VAR_4 != 1 ? "s" : "", VAR_1)
  : ((void*)0);
}
