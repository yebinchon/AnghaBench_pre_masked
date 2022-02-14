
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dev_table_buf; } ;


 int FUNC_0 (void*,int ,char**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char*) ;
 char** VAR_0 ;
 scalar_t__ FUNC_3 (char) ;
 char** VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int FUNC_5 (char*,char*) ;
 char** VAR_3 ;

__attribute__((used)) static void FUNC_6(void *VAR_4, struct module *VAR_5)
{
 char VAR_6[500];
 int VAR_7;
 char *VAR_8;

 FUNC_0(VAR_4, VAR_2, VAR_1);
 FUNC_0(VAR_4, VAR_2, VAR_3);
 FUNC_0(VAR_4, VAR_2, VAR_0);

 VAR_7 = FUNC_4(VAR_6, "of:N%sT%s", (*VAR_1)[0] ? *VAR_1 : "*",
        (*VAR_3)[0] ? *VAR_3 : "*");

 if ((*VAR_0)[0])
  FUNC_4(&VAR_6[VAR_7], "%sC%s", (*VAR_3)[0] ? "*" : "",
   *VAR_0);


 for (VAR_8 = VAR_6; VAR_8 && *VAR_8; VAR_8++)
  if (FUNC_3(*VAR_8))
   *VAR_8 = '_';

 FUNC_2(&VAR_5->dev_table_buf, "MODULE_ALIAS(\"%s\");\n", VAR_6);
 FUNC_5(VAR_6, "C");
 FUNC_1(VAR_6);
 FUNC_2(&VAR_5->dev_table_buf, "MODULE_ALIAS(\"%s\");\n", VAR_6);
}
