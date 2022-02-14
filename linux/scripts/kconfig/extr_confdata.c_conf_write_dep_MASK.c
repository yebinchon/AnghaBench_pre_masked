
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {char* name; struct file* next; } ;
typedef int FILE ;


 char* FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 struct file* VAR_0 ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,...) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_1)
{
 struct file *VAR_2;
 FILE *VAR_3;

 VAR_3 = FUNC_3("..config.tmp", "w");
 if (!VAR_3)
  return 1;
 FUNC_4(VAR_3, "deps_config := \\\n");
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->next)
   FUNC_4(VAR_3, "\t%s \\\n", VAR_2->name);
  else
   FUNC_4(VAR_3, "\t%s\n", VAR_2->name);
 }
 FUNC_4(VAR_3, "\n%s: \\\n"
       "\t$(deps_config)\n\n", FUNC_0());

 FUNC_1(VAR_3, FUNC_0());

 FUNC_4(VAR_3, "\n$(deps_config): ;\n");
 FUNC_2(VAR_3);

 if (FUNC_5(VAR_1))
  return 1;
 FUNC_6("..config.tmp", VAR_1);
 return 0;
}
