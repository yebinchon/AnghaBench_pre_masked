
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_lock_cookie {int dummy; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct bdi_writeback {int dummy; } ;
struct address_space {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,struct address_space*,struct bdi_writeback*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct address_space*) ;
 struct address_space* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 struct bdi_writeback* FUNC_7 (struct inode*,struct wb_lock_cookie*) ;
 int FUNC_8 (struct inode*,struct wb_lock_cookie*) ;

void FUNC_9(struct page *VAR_0)
{
 struct address_space *VAR_1 = FUNC_5(VAR_0);

 if (FUNC_4(VAR_1)) {
  struct inode *VAR_2 = VAR_1->host;
  struct bdi_writeback *VAR_3;
  struct wb_lock_cookie VAR_4 = {};

  FUNC_3(VAR_0);
  VAR_3 = FUNC_7(VAR_2, &VAR_4);

  if (FUNC_1(VAR_0))
   FUNC_2(VAR_0, VAR_1, VAR_3);

  FUNC_8(VAR_2, &VAR_4);
  FUNC_6(VAR_0);
 } else {
  FUNC_0(VAR_0);
 }
}
