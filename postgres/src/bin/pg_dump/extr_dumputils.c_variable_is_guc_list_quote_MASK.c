
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

bool
FUNC_1(const char *VAR_0)
{
 if (FUNC_0(VAR_0, "temp_tablespaces") == 0 ||
  FUNC_0(VAR_0, "session_preload_libraries") == 0 ||
  FUNC_0(VAR_0, "shared_preload_libraries") == 0 ||
  FUNC_0(VAR_0, "local_preload_libraries") == 0 ||
  FUNC_0(VAR_0, "search_path") == 0)
  return 1;
 else
  return 0;
}
