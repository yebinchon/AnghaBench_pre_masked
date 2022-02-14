
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_entry {int len; scalar_t__ sym; } ;


 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_1(const struct sym_entry *VAR_0)
{
 const char *VAR_1 = (char *)VAR_0->sym + 1;
 int VAR_2 = VAR_0->len - 1;

 if (VAR_2 < 8)
  return 0;

 if (VAR_1[0] != '_' || VAR_1[1] != '_')
  return 0;


 if (!FUNC_0(VAR_1 + 2, "start_", 6))
  return 1;


 if (!FUNC_0(VAR_1 + 2, "stop_", 5))
  return 1;


 if (!FUNC_0(VAR_1 + 2, "end_", 4))
  return 1;


 if (!FUNC_0(VAR_1 + VAR_2 - 6, "_start", 6))
  return 1;


 if (!FUNC_0(VAR_1 + VAR_2 - 4, "_end", 4))
  return 1;

 return 0;
}
