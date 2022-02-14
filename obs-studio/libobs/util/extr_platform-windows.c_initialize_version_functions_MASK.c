
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ver_query_value_w_t ;
typedef scalar_t__ get_file_version_info_w_t ;
typedef scalar_t__ get_file_version_info_size_w_t ;
typedef scalar_t__ HMODULE ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static bool FUNC_4(void)
{
 HMODULE VAR_6 = FUNC_0(L"version");

 VAR_4 = 1;

 if (!VAR_6) {
  VAR_6 = FUNC_2(L"version");
  if (!VAR_6) {
   FUNC_3(VAR_0, "Failed to load windows "
     "version library");
   return 0;
  }
 }

 VAR_2 =
  (get_file_version_info_size_w_t)FUNC_1(
   VAR_6, "GetFileVersionInfoSizeW");
 VAR_1 = (get_file_version_info_w_t)FUNC_1(
  VAR_6, "GetFileVersionInfoW");
 VAR_5 =
  (ver_query_value_w_t)FUNC_1(VAR_6, "VerQueryValueW");

 if (!VAR_2 || !VAR_1 ||
     !VAR_5) {
  FUNC_3(VAR_0, "Failed to load windows version "
    "functions");
  return 0;
 }

 VAR_3 = 1;
 return 1;
}
