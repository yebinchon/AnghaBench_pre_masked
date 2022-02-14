
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmap_walk_control {void* arg; int invalid_vma; int rmap_one; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int FUNC_2 (struct page*) ;
 struct address_space* FUNC_3 (struct page*) ;
 int VAR_1 ;
 int FUNC_4 (struct page*,struct rmap_walk_control*) ;

int FUNC_5(struct page *VAR_2)
{
 int VAR_3 = 0;
 struct address_space *VAR_4;
 struct rmap_walk_control VAR_5 = {
  .arg = (void *)&VAR_3,
  .rmap_one = VAR_1,
  .invalid_vma = VAR_0,
 };

 FUNC_0(!FUNC_1(VAR_2));

 if (!FUNC_2(VAR_2))
  return 0;

 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4)
  return 0;

 FUNC_4(VAR_2, &VAR_5);

 return VAR_3;
}
