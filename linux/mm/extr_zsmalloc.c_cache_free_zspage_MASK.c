
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zspage {int dummy; } ;
struct zs_pool {int zspage_cachep; } ;


 int FUNC_0 (int ,struct zspage*) ;

__attribute__((used)) static void FUNC_1(struct zs_pool *VAR_0, struct zspage *VAR_1)
{
 FUNC_0(VAR_0->zspage_cachep, VAR_1);
}
