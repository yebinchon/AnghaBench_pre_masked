
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmap_walk_control {struct page* arg; int rmap_one; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*,struct rmap_walk_control*) ;
 int FUNC_1 (struct page*,struct rmap_walk_control*) ;

void FUNC_2(struct page *VAR_1, struct page *VAR_2, bool VAR_3)
{
 struct rmap_walk_control VAR_4 = {
  .rmap_one = VAR_0,
  .arg = VAR_1,
 };

 if (VAR_3)
  FUNC_1(VAR_2, &VAR_4);
 else
  FUNC_0(VAR_2, &VAR_4);
}
