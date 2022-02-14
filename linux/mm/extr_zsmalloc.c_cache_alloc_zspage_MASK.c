
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zspage {int dummy; } ;
struct zs_pool {int zspage_cachep; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct zspage* FUNC_0 (int ,int) ;

__attribute__((used)) static struct zspage *FUNC_1(struct zs_pool *VAR_2, gfp_t VAR_3)
{
 return FUNC_0(VAR_2->zspage_cachep,
   VAR_3 & ~(VAR_0|VAR_1));
}
