
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool {void* data; scalar_t__ algo; } ;
typedef scalar_t__ genpool_algo_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(struct gen_pool *VAR_1, genpool_algo_t VAR_2, void *VAR_3)
{
 FUNC_0();

 VAR_1->algo = VAR_2;
 if (!VAR_1->algo)
  VAR_1->algo = VAR_0;

 VAR_1->data = VAR_3;

 FUNC_1();
}
