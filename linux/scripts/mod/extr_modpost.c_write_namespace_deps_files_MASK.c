
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct namespace_list {int namespace; struct namespace_list* next; } ;
struct module {char* name; struct namespace_list* required_namespaces; scalar_t__ skip; struct module* next; } ;
struct buffer {scalar_t__ pos; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer*,char*,int ) ;
 struct module* VAR_1 ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (struct buffer*,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct module *VAR_2;
 struct namespace_list *VAR_3;
 struct buffer VAR_4 = {};

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next) {
  char VAR_5[VAR_0];

  if (VAR_2->skip)
   continue;

  VAR_4.pos = 0;

  for (VAR_3 = VAR_2->required_namespaces; VAR_3; VAR_3 = VAR_3->next)
   FUNC_0(&VAR_4, "%s\n", VAR_3->namespace);

  if (VAR_4.pos == 0)
   continue;

  FUNC_1(VAR_5, "%s.ns_deps", VAR_2->name);
  FUNC_2(&VAR_4, VAR_5);
 }
}
