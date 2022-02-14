
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0)
{
 if (!VAR_0)
  return 0;
 return FUNC_0(VAR_0, ".bmp") == 0 || FUNC_0(VAR_0, ".tga") == 0 ||
        FUNC_0(VAR_0, ".png") == 0 || FUNC_0(VAR_0, ".jpeg") == 0 ||
        FUNC_0(VAR_0, ".jpg") == 0 || FUNC_0(VAR_0, ".gif") == 0;
}
