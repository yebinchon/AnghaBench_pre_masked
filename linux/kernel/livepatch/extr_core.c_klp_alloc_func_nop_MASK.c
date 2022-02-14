
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klp_object {int dummy; } ;
struct klp_func {int nop; int old_sympos; scalar_t__ old_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct klp_func*) ;
 int FUNC_1 (struct klp_object*,struct klp_func*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 struct klp_func* FUNC_3 (int,int ) ;

__attribute__((used)) static struct klp_func *FUNC_4(struct klp_func *VAR_1,
        struct klp_object *VAR_2)
{
 struct klp_func *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 if (VAR_1->old_name) {
  VAR_3->old_name = FUNC_2(VAR_1->old_name, VAR_0);
  if (!VAR_3->old_name) {
   FUNC_0(VAR_3);
   return ((void*)0);
  }
 }

 FUNC_1(VAR_2, VAR_3);




 VAR_3->old_sympos = VAR_1->old_sympos;
 VAR_3->nop = 1;

 return VAR_3;
}
