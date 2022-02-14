
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; int lru; } ;
struct list_head {int dummy; } ;
struct file {int dummy; } ;
struct blk_plug {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* readpages ) (struct file*,struct address_space*,struct list_head*,unsigned int) ;int (* readpage ) (struct file*,struct page*) ;} ;


 int FUNC_0 (struct page*,struct address_space*,int ,int ) ;
 int FUNC_1 (struct blk_plug*) ;
 int FUNC_2 (struct blk_plug*) ;
 int FUNC_3 (int *) ;
 struct page* FUNC_4 (struct list_head*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct list_head*) ;
 int FUNC_7 (struct file*,struct address_space*,struct list_head*,unsigned int) ;
 int FUNC_8 (struct file*,struct page*) ;

__attribute__((used)) static int FUNC_9(struct address_space *VAR_0, struct file *VAR_1,
  struct list_head *VAR_2, unsigned int VAR_3, gfp_t VAR_4)
{
 struct blk_plug VAR_5;
 unsigned VAR_6;
 int VAR_7;

 FUNC_2(&VAR_5);

 if (VAR_0->a_ops->readpages) {
  VAR_7 = VAR_0->a_ops->readpages(VAR_1, VAR_0, VAR_2, VAR_3);

  FUNC_6(VAR_2);
  goto out;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct page *VAR_8 = FUNC_4(VAR_2);
  FUNC_3(&VAR_8->lru);
  if (!FUNC_0(VAR_8, VAR_0, VAR_8->index, VAR_4))
   VAR_0->a_ops->readpage(VAR_1, VAR_8);
  FUNC_5(VAR_8);
 }
 VAR_7 = 0;

out:
 FUNC_1(&VAR_5);

 return VAR_7;
}
