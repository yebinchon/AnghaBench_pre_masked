
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static const char *FUNC_2(char *VAR_0)
{
 const char *VAR_1 = "%llu";

 if (FUNC_0(VAR_0, "s64") == 0)
  VAR_1 = "%lld";
 else if (FUNC_0(VAR_0, "u64") == 0)
  VAR_1 = "%llu";
 else if (FUNC_0(VAR_0, "s32") == 0)
  VAR_1 = "%d";
 else if (FUNC_0(VAR_0, "u32") == 0)
  VAR_1 = "%u";
 else if (FUNC_0(VAR_0, "s16") == 0)
  VAR_1 = "%d";
 else if (FUNC_0(VAR_0, "u16") == 0)
  VAR_1 = "%u";
 else if (FUNC_0(VAR_0, "s8") == 0)
  VAR_1 = "%d";
 else if (FUNC_0(VAR_0, "u8") == 0)
  VAR_1 = "%u";
 else if (FUNC_0(VAR_0, "char") == 0)
  VAR_1 = "%d";
 else if (FUNC_0(VAR_0, "unsigned char") == 0)
  VAR_1 = "%u";
 else if (FUNC_0(VAR_0, "int") == 0)
  VAR_1 = "%d";
 else if (FUNC_0(VAR_0, "unsigned int") == 0)
  VAR_1 = "%u";
 else if (FUNC_0(VAR_0, "long") == 0)
  VAR_1 = "%ld";
 else if (FUNC_0(VAR_0, "unsigned long") == 0)
  VAR_1 = "%lu";
 else if (FUNC_0(VAR_0, "pid_t") == 0)
  VAR_1 = "%d";
 else if (FUNC_0(VAR_0, "gfp_t") == 0)
  VAR_1 = "%x";
 else if (FUNC_1(VAR_0))
  VAR_1 = "%s";

 return VAR_1;
}
