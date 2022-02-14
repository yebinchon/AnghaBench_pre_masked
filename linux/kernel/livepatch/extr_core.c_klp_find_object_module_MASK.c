
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {scalar_t__ klp_alive; } ;
struct klp_object {struct module* mod; int name; } ;


 struct module* FUNC_0 (int ) ;
 int FUNC_1 (struct klp_object*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct klp_object *VAR_1)
{
 struct module *VAR_2;

 if (!FUNC_1(VAR_1))
  return;

 FUNC_2(&VAR_0);





 VAR_2 = FUNC_0(VAR_1->name);







 if (VAR_2 && VAR_2->klp_alive)
  VAR_1->mod = VAR_2;

 FUNC_3(&VAR_0);
}
