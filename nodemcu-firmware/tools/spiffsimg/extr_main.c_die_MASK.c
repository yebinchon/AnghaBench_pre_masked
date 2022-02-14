
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char const*) ;
 int VAR_3 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4 (const char *VAR_4)
{
  if (VAR_2 == 0) {
    FUNC_1(VAR_3, "%s: fatal error\n", VAR_4);
  } else {
    FUNC_2 (VAR_4);
  }
  if (VAR_1) {
    const char **VAR_5 = VAR_0;
    while (*VAR_5) {
      FUNC_3(*VAR_5);
      VAR_5++;
    }
  }
  FUNC_0 (1);
}
