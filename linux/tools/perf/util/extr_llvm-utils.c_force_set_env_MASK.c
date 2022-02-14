
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static inline void
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 if (VAR_1) {
  FUNC_1(VAR_0, VAR_1, 1);
  FUNC_0("set env: %s=%s\n", VAR_0, VAR_1);
 } else {
  FUNC_2(VAR_0);
  FUNC_0("unset env: %s\n", VAR_0);
 }
}
