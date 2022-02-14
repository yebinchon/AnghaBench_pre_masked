
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_deferred_req {int recent; int hash; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cache_deferred_req *VAR_1)
{
 FUNC_0(&VAR_1->hash);
 if (!FUNC_2(&VAR_1->recent)) {
  FUNC_1(&VAR_1->recent);
  VAR_0--;
 }
}
