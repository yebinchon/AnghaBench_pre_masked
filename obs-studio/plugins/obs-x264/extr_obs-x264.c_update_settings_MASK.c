
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int b_repeat_headers; } ;
struct obs_x264 {TYPE_1__ params; int context; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (struct obs_x264*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*) ;
 char* FUNC_5 (int *,char*) ;
 int FUNC_6 (struct obs_x264*,char**,char**,char**,char**) ;
 int FUNC_7 (struct obs_x264*,char*,char*) ;
 int FUNC_8 (char**) ;
 char** FUNC_9 (char const*,char,int) ;
 int FUNC_10 (struct obs_x264*,int *,char**,int) ;

__attribute__((used)) static bool FUNC_11(struct obs_x264 *VAR_1, obs_data_t *VAR_2,
       bool VAR_3)
{
 char *VAR_4 = FUNC_3(FUNC_5(VAR_2, "preset"));
 char *VAR_5 = FUNC_3(FUNC_5(VAR_2, "profile"));
 char *VAR_6 = FUNC_3(FUNC_5(VAR_2, "tune"));
 const char *VAR_7 = FUNC_5(VAR_2, "x264opts");

 char **VAR_8;
 bool VAR_9 = 1;

 VAR_8 = FUNC_9(VAR_7, ' ', 0);

 if (!VAR_3)
  FUNC_2(VAR_0, "---------------------------------");

 if (!VAR_1->context) {
  FUNC_6(VAR_1, VAR_8, &VAR_4, &VAR_5,
         &VAR_6);

  if (VAR_4 && *VAR_4)
   FUNC_4("preset: %s", VAR_4);
  if (VAR_5 && *VAR_5)
   FUNC_4("profile: %s", VAR_5);
  if (VAR_6 && *VAR_6)
   FUNC_4("tune: %s", VAR_6);

  VAR_9 = FUNC_7(VAR_1, VAR_4, VAR_6);
 }

 if (VAR_9) {
  FUNC_10(VAR_1, VAR_2, VAR_8, VAR_3);
  if (VAR_7 && *VAR_7 && !VAR_3)
   FUNC_4("custom settings: %s", VAR_7);

  if (!VAR_1->context)
   FUNC_0(VAR_1, VAR_5);
 }

 VAR_1->params.b_repeat_headers = 0;

 FUNC_8(VAR_8);
 FUNC_1(VAR_4);
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);

 return VAR_9;
}
