
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_pool {int zspage_cachep; int handle_cachep; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct zs_pool *VAR_0)
{
 FUNC_0(VAR_0->handle_cachep);
 FUNC_0(VAR_0->zspage_cachep);
}
