
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmap_walk_control {void* arg; int anon_lock; int done; int rmap_one; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int,struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct page*,struct rmap_walk_control*) ;
 int VAR_3 ;

void FUNC_6(struct page *VAR_4)
{
 struct rmap_walk_control VAR_5 = {
  .rmap_one = VAR_3,
  .arg = (void *)VAR_0,
  .done = VAR_2,
  .anon_lock = VAR_1,

 };

 FUNC_4(!FUNC_3(VAR_4) || FUNC_2(VAR_4), VAR_4);
 FUNC_4(FUNC_0(VAR_4) && FUNC_1(VAR_4), VAR_4);

 FUNC_5(VAR_4, &VAR_5);
}
