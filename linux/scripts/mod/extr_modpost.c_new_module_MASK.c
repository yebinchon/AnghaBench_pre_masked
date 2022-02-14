
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int is_dot_o; char* name; int gpl_compatible; struct module* next; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct module*,int ,int) ;
 struct module* VAR_0 ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct module *FUNC_6(const char *VAR_1)
{
 struct module *VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_0(FUNC_1(sizeof(*VAR_2)));
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_3 = FUNC_0(FUNC_3(VAR_1));


 if (FUNC_4(VAR_3, ".o")) {
  VAR_3[FUNC_5(VAR_3) - 2] = '\0';
  VAR_2->is_dot_o = 1;
 }


 VAR_2->name = VAR_3;
 VAR_2->gpl_compatible = -1;
 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;

 return VAR_2;
}
