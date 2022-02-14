
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_pool {int handle_cachep; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static unsigned long FUNC_1(struct zs_pool *VAR_2, gfp_t VAR_3)
{
 return (unsigned long)FUNC_0(VAR_2->handle_cachep,
   VAR_3 & ~(VAR_0|VAR_1));
}
