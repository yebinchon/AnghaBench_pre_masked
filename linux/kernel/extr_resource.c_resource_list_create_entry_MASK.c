
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct resource_entry {struct resource __res; struct resource* res; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct resource_entry* FUNC_1 (int,int ) ;

struct resource_entry *FUNC_2(struct resource *VAR_1,
        size_t VAR_2)
{
 struct resource_entry *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3) + VAR_2, VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_3->node);
  VAR_3->res = VAR_1 ? VAR_1 : &VAR_3->__res;
 }

 return VAR_3;
}
