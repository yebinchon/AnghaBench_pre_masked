
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wb_lock_cookie {int dummy; } ;
struct page {struct address_space* mapping; } ;
struct inode {int dummy; } ;
struct bdi_writeback {int dummy; } ;
struct address_space {struct inode* host; } ;
struct TYPE_2__ {int nr_dirtied; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct page*,int ) ;
 int FUNC_1 (struct bdi_writeback*,int ) ;
 scalar_t__ FUNC_2 (struct address_space*) ;
 struct bdi_writeback* FUNC_3 (struct inode*,struct wb_lock_cookie*) ;
 int FUNC_4 (struct inode*,struct wb_lock_cookie*) ;

void FUNC_5(struct page *VAR_3)
{
 struct address_space *VAR_4 = VAR_3->mapping;

 if (VAR_4 && FUNC_2(VAR_4)) {
  struct inode *VAR_5 = VAR_4->host;
  struct bdi_writeback *VAR_6;
  struct wb_lock_cookie VAR_7 = {};

  VAR_6 = FUNC_3(VAR_5, &VAR_7);
  VAR_2->nr_dirtied--;
  FUNC_0(VAR_3, VAR_0);
  FUNC_1(VAR_6, VAR_1);
  FUNC_4(VAR_5, &VAR_7);
 }
}
