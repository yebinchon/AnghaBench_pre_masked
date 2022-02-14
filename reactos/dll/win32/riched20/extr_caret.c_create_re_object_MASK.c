
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_object {int obj; } ;
typedef int REOBJECT ;


 int FUNC_0 (int *,int const*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 struct re_object* FUNC_2 (int) ;

__attribute__((used)) static struct re_object* FUNC_3(const REOBJECT *VAR_1)
{
  struct re_object *VAR_2 = FUNC_2(sizeof(*VAR_2));

  if (!VAR_2)
  {
    FUNC_1("Fail to allocate re_object.\n");
    return ((void*)0);
  }
  FUNC_0(&VAR_2->obj, VAR_1, VAR_0);
  return VAR_2;
}
