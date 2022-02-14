
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int async_probe_requested; } ;


 int FUNC_0 (char*,char*,char const*) ;
 int FUNC_1 (char*,char const*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, char *VAR_1, const char *VAR_2,
       void *VAR_3)
{
 struct module *VAR_4 = VAR_3;
 int VAR_5;

 if (FUNC_2(VAR_0, "async_probe") == 0) {
  VAR_4->async_probe_requested = 1;
  return 0;
 }


 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_5 != 0)
  FUNC_1("%s: unknown parameter '%s' ignored\n", VAR_2, VAR_0);
 return 0;
}
