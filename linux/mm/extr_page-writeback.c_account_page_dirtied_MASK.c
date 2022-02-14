
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct bdi_writeback {int dummy; } ;
struct address_space {struct inode* host; } ;
struct TYPE_2__ {int nr_dirtied; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*,int ) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct page*,int ) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_3 (struct bdi_writeback*,int ) ;
 int FUNC_4 (struct inode*,struct page*) ;
 struct bdi_writeback* FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct address_space*) ;
 int FUNC_7 (struct page*,struct bdi_writeback*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct page*,struct address_space*) ;

void FUNC_11(struct page *VAR_8, struct address_space *VAR_9)
{
 struct inode *VAR_10 = VAR_9->host;

 FUNC_10(VAR_8, VAR_9);

 if (FUNC_6(VAR_9)) {
  struct bdi_writeback *VAR_11;

  FUNC_4(VAR_10, VAR_8);
  VAR_11 = FUNC_5(VAR_10);

  FUNC_0(VAR_8, VAR_1);
  FUNC_2(VAR_8, VAR_2);
  FUNC_1(VAR_8, VAR_0);
  FUNC_3(VAR_11, VAR_5);
  FUNC_3(VAR_11, VAR_4);
  FUNC_8(VAR_3);
  VAR_7->nr_dirtied++;
  FUNC_9(VAR_6);

  FUNC_7(VAR_8, VAR_11);
 }
}
