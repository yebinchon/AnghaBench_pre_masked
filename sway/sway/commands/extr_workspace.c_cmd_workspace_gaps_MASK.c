
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int top; int right; int bottom; int left; } ;
struct workspace_config {int gaps_inner; TYPE_1__ gaps_outer; } ;
struct cmd_results {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char**,int) ;
 int FUNC_4 (struct workspace_config*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,char**,int) ;
 struct workspace_config* FUNC_8 (char*) ;

__attribute__((used)) static struct cmd_results *FUNC_9(int VAR_4, char **VAR_5,
  int VAR_6) {
 const char VAR_7[] = "Expected 'workspace <name> gaps "
  "inner|outer|horizontal|vertical|top|right|bottom|left <px>'";
 struct cmd_results *VAR_8 = ((void*)0);
 if ((VAR_8 = FUNC_0(VAR_4, "workspace", VAR_2,
     VAR_6 + 3))) {
  return VAR_8;
 }
 char *VAR_9 = FUNC_3(VAR_5, VAR_4 - 3);
 struct workspace_config *VAR_10 = FUNC_8(VAR_9);
 FUNC_2(VAR_9);
 if (!VAR_10) {
  return FUNC_1(VAR_0,
    "Unable to allocate workspace output");
 }

 char *VAR_11;
 int VAR_12 = FUNC_7(VAR_5[VAR_6 + 2], &VAR_11, 10);
 if (FUNC_6(VAR_11)) {
  return FUNC_1(VAR_0, VAR_7);
 }

 bool VAR_13 = 0;
 char *VAR_14 = VAR_5[VAR_6 + 1];
 if (!FUNC_5(VAR_14, "inner")) {
  VAR_13 = 1;
  VAR_10->gaps_inner = (VAR_12 >= 0) ? VAR_12 : 0;
 } else {
  if (!FUNC_5(VAR_14, "outer") || !FUNC_5(VAR_14, "vertical")
    || !FUNC_5(VAR_14, "top")) {
   VAR_13 = 1;
   VAR_10->gaps_outer.top = VAR_12;
  }
  if (!FUNC_5(VAR_14, "outer") || !FUNC_5(VAR_14, "horizontal")
    || !FUNC_5(VAR_14, "right")) {
   VAR_13 = 1;
   VAR_10->gaps_outer.right = VAR_12;
  }
  if (!FUNC_5(VAR_14, "outer") || !FUNC_5(VAR_14, "vertical")
    || !FUNC_5(VAR_14, "bottom")) {
   VAR_13 = 1;
   VAR_10->gaps_outer.bottom = VAR_12;
  }
  if (!FUNC_5(VAR_14, "outer") || !FUNC_5(VAR_14, "horizontal")
    || !FUNC_5(VAR_14, "left")) {
   VAR_13 = 1;
   VAR_10->gaps_outer.left = VAR_12;
  }
 }
 if (!VAR_13) {
  return FUNC_1(VAR_1, VAR_7);
 }


 if (VAR_10->gaps_inner != VAR_3 && VAR_10->gaps_inner < 0) {
  VAR_10->gaps_inner = 0;
 }
 FUNC_4(VAR_10);

 return VAR_8;
}
