
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmap_walk_control {void* arg; int invalid_vma; int anon_lock; int done; int rmap_one; } ;
struct page {int dummy; } ;
typedef enum ttu_flags { ____Placeholder_ttu_flags } ttu_flags ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct page*) ;
 int VAR_5 ;
 int FUNC_3 (struct page*,struct rmap_walk_control*) ;
 int FUNC_4 (struct page*,struct rmap_walk_control*) ;
 int VAR_6 ;

bool FUNC_5(struct page *VAR_7, enum ttu_flags VAR_8)
{
 struct rmap_walk_control VAR_9 = {
  .rmap_one = VAR_6,
  .arg = (void *)VAR_8,
  .done = VAR_5,
  .anon_lock = VAR_4,
 };
 if ((VAR_8 & (VAR_0|VAR_2))
     && !FUNC_1(VAR_7) && FUNC_0(VAR_7))
  VAR_9.invalid_vma = VAR_3;

 if (VAR_8 & VAR_1)
  FUNC_4(VAR_7, &VAR_9);
 else
  FUNC_3(VAR_7, &VAR_9);

 return !FUNC_2(VAR_7) ? 1 : 0;
}
