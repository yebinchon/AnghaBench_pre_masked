
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddebug_table {char const* mod_name; unsigned int num_ddebugs; int link; struct _ddebug* ddebugs; } ;
struct _ddebug {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ddebug_table* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,unsigned int,char const*) ;

int FUNC_6(struct _ddebug *VAR_4, unsigned int VAR_5,
        const char *VAR_6)
{
 struct ddebug_table *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_4("error adding module: %s\n", VAR_6);
  return -VAR_0;
 }






 VAR_7->mod_name = VAR_6;
 VAR_7->num_ddebugs = VAR_5;
 VAR_7->ddebugs = VAR_4;

 FUNC_2(&VAR_2);
 FUNC_1(&VAR_7->link, &VAR_3);
 FUNC_3(&VAR_2);

 FUNC_5("%u debug prints in module %s\n", VAR_5, VAR_7->mod_name);
 return 0;
}
