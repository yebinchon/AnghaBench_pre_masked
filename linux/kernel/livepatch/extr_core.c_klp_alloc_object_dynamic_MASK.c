
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct klp_patch {int dummy; } ;
struct klp_object {int dynamic; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct klp_object*) ;
 int FUNC_1 (struct klp_patch*,struct klp_object*) ;
 int FUNC_2 (char const*,int ) ;
 struct klp_object* FUNC_3 (int,int ) ;

__attribute__((used)) static struct klp_object *FUNC_4(const char *VAR_1,
         struct klp_patch *VAR_2)
{
 struct klp_object *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 if (VAR_1) {
  VAR_3->name = FUNC_2(VAR_1, VAR_0);
  if (!VAR_3->name) {
   FUNC_0(VAR_3);
   return ((void*)0);
  }
 }

 FUNC_1(VAR_2, VAR_3);
 VAR_3->dynamic = 1;

 return VAR_3;
}
