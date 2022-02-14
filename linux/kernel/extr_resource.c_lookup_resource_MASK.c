
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; struct resource* sibling; struct resource* child; } ;
typedef scalar_t__ resource_size_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

struct resource *FUNC_2(struct resource *VAR_1, resource_size_t VAR_2)
{
 struct resource *VAR_3;

 FUNC_0(&VAR_0);
 for (VAR_3 = VAR_1->child; VAR_3; VAR_3 = VAR_3->sibling) {
  if (VAR_3->start == VAR_2)
   break;
 }
 FUNC_1(&VAR_0);

 return VAR_3;
}
