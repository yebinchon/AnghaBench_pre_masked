
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;

__attribute__((used)) static bool
FUNC_5(const char *VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_2("try to load ip_set_%s\n", VAR_1);
 if (FUNC_4("ip_set_%s", VAR_1) < 0) {
  FUNC_3("Can't find ip_set type %s\n", VAR_1);
  FUNC_0(VAR_0);
  return 0;
 }
 FUNC_0(VAR_0);
 return 1;
}
