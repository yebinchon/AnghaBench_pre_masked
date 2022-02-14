
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_hashlimit_htable {scalar_t__ use; int node; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xt_hashlimit_htable*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct xt_hashlimit_htable *VAR_1)
{
 FUNC_2(&VAR_0);
 if (--VAR_1->use == 0) {
  FUNC_0(&VAR_1->node);
  FUNC_1(VAR_1);
 }
 FUNC_3(&VAR_0);
}
