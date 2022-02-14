
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_0, const char *VAR_1,
        bool VAR_2)
{
 if (VAR_1 && !FUNC_1(VAR_0, VAR_1))
  return;
 if (VAR_2)
  FUNC_0("%s ", VAR_0);
 else
  FUNC_0("  %-50s [%s]\n", VAR_0, "Tool event");

}
