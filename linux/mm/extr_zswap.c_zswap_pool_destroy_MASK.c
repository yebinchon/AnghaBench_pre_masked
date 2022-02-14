
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zswap_pool {int zpool; int tfm; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct zswap_pool*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,struct zswap_pool*) ;

__attribute__((used)) static void FUNC_5(struct zswap_pool *VAR_1)
{
 FUNC_4("destroying", VAR_1);

 FUNC_0(VAR_0, &VAR_1->node);
 FUNC_1(VAR_1->tfm);
 FUNC_3(VAR_1->zpool);
 FUNC_2(VAR_1);
}
