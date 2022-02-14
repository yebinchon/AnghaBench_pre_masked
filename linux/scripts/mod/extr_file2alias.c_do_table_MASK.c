
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {char const* name; int dev_table_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char const*,char const*,unsigned long,unsigned long,void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3,
       const char *VAR_4,
       int (*VAR_5)(const char *VAR_6, void *VAR_7, char *VAR_8),
       struct module *VAR_9)
{
 unsigned int VAR_10;
 char VAR_11[VAR_0];

 FUNC_1(VAR_9->name, VAR_4, VAR_2, VAR_3, VAR_1);

 VAR_2 -= VAR_3;

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10 += VAR_3) {
  if (VAR_5(VAR_9->name, VAR_1+VAR_10, VAR_11)) {
   FUNC_0(&VAR_9->dev_table_buf,
       "MODULE_ALIAS(\"%s\");\n", VAR_11);
  }
 }
}
