
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
struct lruvec {int dummy; } ;
struct inode {int dummy; } ;
struct bdi_writeback {int dummy; } ;
struct backing_dev_info {int dummy; } ;
struct address_space {int i_pages; struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int VAR_4 ;
 int FUNC_1 (struct mem_cgroup*) ;
 int FUNC_2 (struct bdi_writeback*) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (struct backing_dev_info*) ;
 int FUNC_5 (struct lruvec*,int ) ;
 int FUNC_6 (struct bdi_writeback*,int ) ;
 int FUNC_7 (struct page*,int ) ;
 int FUNC_8 (struct page*,int ) ;
 struct backing_dev_info* FUNC_9 (struct inode*) ;
 struct bdi_writeback* FUNC_10 (struct inode*) ;
 struct mem_cgroup* FUNC_11 (struct page*) ;
 int FUNC_12 (struct address_space*,int ) ;
 scalar_t__ FUNC_13 (struct address_space*) ;
 struct lruvec* FUNC_14 (struct page*,int ) ;
 int FUNC_15 (struct page*) ;
 struct address_space* FUNC_16 (struct page*) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;

int FUNC_21(struct page *VAR_5)
{
 struct address_space *VAR_6 = FUNC_16(VAR_5);
 struct mem_cgroup *VAR_7;
 struct lruvec *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_11(VAR_5);
 VAR_8 = FUNC_14(VAR_5, FUNC_17(VAR_5));
 if (VAR_6 && FUNC_13(VAR_6)) {
  struct inode *VAR_10 = VAR_6->host;
  struct backing_dev_info *VAR_11 = FUNC_9(VAR_10);
  unsigned long VAR_12;

  FUNC_19(&VAR_6->i_pages, VAR_12);
  VAR_9 = FUNC_0(VAR_5);
  if (VAR_9) {
   FUNC_3(&VAR_6->i_pages, FUNC_15(VAR_5),
      VAR_3);
   if (FUNC_4(VAR_11)) {
    struct bdi_writeback *VAR_13 = FUNC_10(VAR_10);

    FUNC_6(VAR_13, VAR_4);
    FUNC_2(VAR_13);
   }
  }

  if (VAR_6->host && !FUNC_12(VAR_6,
           VAR_3))
   FUNC_18(VAR_6->host);

  FUNC_20(&VAR_6->i_pages, VAR_12);
 } else {
  VAR_9 = FUNC_0(VAR_5);
 }






 if (VAR_9) {
  FUNC_5(VAR_8, VAR_0);
  FUNC_7(VAR_5, VAR_2);
  FUNC_8(VAR_5, VAR_1);
 }
 FUNC_1(VAR_7);
 return VAR_9;
}
