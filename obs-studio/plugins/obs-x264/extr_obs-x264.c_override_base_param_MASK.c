
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_x264 {int dummy; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char**,char const**) ;
 char* FUNC_4 (struct obs_x264*,char const*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct obs_x264 *VAR_3, const char *VAR_4,
    char **VAR_5, char **VAR_6, char **VAR_7)
{
 char *VAR_8;
 const char *VAR_9;

 if (FUNC_3(VAR_4, &VAR_8, &VAR_9)) {
  if (FUNC_0(VAR_8, "preset") == 0) {
   const char *VAR_10 = FUNC_4(
    VAR_3, VAR_9, "preset", VAR_0);
   if (VAR_10) {
    FUNC_1(*VAR_5);
    *VAR_5 = FUNC_2(VAR_9);
   }

  } else if (FUNC_0(VAR_8, "profile") == 0) {
   const char *VAR_11 = FUNC_4(
    VAR_3, VAR_9, "profile", VAR_1);
   if (VAR_11) {
    FUNC_1(*VAR_6);
    *VAR_6 = FUNC_2(VAR_9);
   }

  } else if (FUNC_0(VAR_8, "tune") == 0) {
   const char *VAR_12 =
    FUNC_4(VAR_3, VAR_9, "tune", VAR_2);
   if (VAR_12) {
    FUNC_1(*VAR_7);
    *VAR_7 = FUNC_2(VAR_9);
   }
  }

  FUNC_1(VAR_8);
 }
}
