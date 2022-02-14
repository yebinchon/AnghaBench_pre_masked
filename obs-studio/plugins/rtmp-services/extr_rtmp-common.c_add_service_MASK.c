
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int json_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;

__attribute__((used)) static void FUNC_8(obs_property_t *VAR_1, json_t *VAR_2, bool VAR_3,
   const char *VAR_4)
{
 json_t *VAR_5;
 const char *VAR_6;
 bool VAR_7;

 if (!FUNC_4(VAR_2)) {
  FUNC_0(VAR_0, "rtmp-common.c: [add_service] service "
      "is not an object");
  return;
 }

 VAR_6 = FUNC_2(VAR_2, "name");
 if (!VAR_6) {
  FUNC_0(VAR_0, "rtmp-common.c: [add_service] service "
      "has no name");
  return;
 }

 VAR_7 = FUNC_1(VAR_2, "common");
 if (!VAR_3 && !VAR_7 && FUNC_7(VAR_4, VAR_6) != 0) {
  return;
 }

 VAR_5 = FUNC_5(VAR_2, "servers");
 if (!VAR_5 || !FUNC_3(VAR_5)) {
  FUNC_0(VAR_0,
       "rtmp-common.c: [add_service] service "
       "'%s' has no servers",
       VAR_6);
  return;
 }

 FUNC_6(VAR_1, VAR_6, VAR_6);
}
