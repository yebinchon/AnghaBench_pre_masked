
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mdev_state {struct page** pages; int ops_lock; } ;
typedef size_t pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct page* FUNC_1 (int,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct page *FUNC_4(struct mdev_state *VAR_2,
          pgoff_t VAR_3)
{
 FUNC_0(!FUNC_3(&VAR_2->ops_lock));

 if (!VAR_2->pages[VAR_3]) {
  VAR_2->pages[VAR_3] =
   FUNC_1(VAR_0 | VAR_1, 0);
  if (!VAR_2->pages[VAR_3])
   return ((void*)0);
 }

 FUNC_2(VAR_2->pages[VAR_3]);
 return VAR_2->pages[VAR_3];
}
