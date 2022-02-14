
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mdev_state {scalar_t__ pagecount; int ops_lock; } ;
typedef scalar_t__ pgoff_t ;


 scalar_t__ FUNC_0 (int) ;
 struct page* FUNC_1 (struct mdev_state*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct page *FUNC_4(struct mdev_state *VAR_0,
        pgoff_t VAR_1)
{
 struct page *VAR_2;

 if (FUNC_0(VAR_1 >= VAR_0->pagecount))
  return ((void*)0);

 FUNC_2(&VAR_0->ops_lock);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_3(&VAR_0->ops_lock);

 return VAR_2;
}
