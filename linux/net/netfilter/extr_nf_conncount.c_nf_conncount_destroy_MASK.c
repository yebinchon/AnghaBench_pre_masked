
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conncount_data {int * root; int gc_work; } ;
struct net {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nf_conncount_data*) ;
 int FUNC_4 (struct net*,unsigned int) ;

void FUNC_5(struct net *VAR_0, unsigned int VAR_1,
     struct nf_conncount_data *VAR_2)
{
 unsigned int VAR_3;

 FUNC_1(&VAR_2->gc_work);
 FUNC_4(VAR_0, VAR_1);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->root); ++VAR_3)
  FUNC_2(&VAR_2->root[VAR_3]);

 FUNC_3(VAR_2);
}
