
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2;

 VAR_2 = FUNC_1(VAR_0, '.');
 if (VAR_2 == ((void*)0))
  return VAR_1;
 if (!FUNC_0(VAR_2, ".dts"))
  return "dts";
 if (!FUNC_0(VAR_2, ".yaml"))
  return "yaml";
 if (!FUNC_0(VAR_2, ".dtb"))
  return "dtb";
 return VAR_1;
}
