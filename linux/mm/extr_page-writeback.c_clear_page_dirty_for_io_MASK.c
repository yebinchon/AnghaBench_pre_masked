
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wb_lock_cookie {int dummy; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct bdi_writeback {int dummy; } ;
struct address_space {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_2 ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct bdi_writeback*,int ) ;
 int FUNC_5 (struct page*,int ) ;
 scalar_t__ FUNC_6 (struct address_space*) ;
 struct address_space* FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 struct bdi_writeback* FUNC_10 (struct inode*,struct wb_lock_cookie*) ;
 int FUNC_11 (struct inode*,struct wb_lock_cookie*) ;

int FUNC_12(struct page *VAR_3)
{
 struct address_space *VAR_4 = FUNC_7(VAR_3);
 int VAR_5 = 0;

 FUNC_0(!FUNC_1(VAR_3));

 if (VAR_4 && FUNC_6(VAR_4)) {
  struct inode *VAR_6 = VAR_4->host;
  struct bdi_writeback *VAR_7;
  struct wb_lock_cookie VAR_8 = {};
  if (FUNC_8(VAR_3))
   FUNC_9(VAR_3);
  VAR_7 = FUNC_10(VAR_6, &VAR_8);
  if (FUNC_2(VAR_3)) {
   FUNC_3(VAR_3, VAR_0);
   FUNC_5(VAR_3, VAR_1);
   FUNC_4(VAR_7, VAR_2);
   VAR_5 = 1;
  }
  FUNC_11(VAR_6, &VAR_8);
  return VAR_5;
 }
 return FUNC_2(VAR_3);
}
