
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct backing_dev_info {int dummy; } ;
struct address_space {struct inode* host; int i_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (struct backing_dev_info*) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct page*,int ) ;
 struct backing_dev_info* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct address_space*,int ) ;
 scalar_t__ FUNC_11 (struct address_space*) ;
 int FUNC_12 (struct page*) ;
 struct address_space* FUNC_13 (struct page*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct page*) ;
 int VAR_6 ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,unsigned long) ;

int FUNC_21(struct page *VAR_7, bool VAR_8)
{
 struct address_space *VAR_9 = FUNC_13(VAR_7);
 int VAR_10;

 FUNC_9(VAR_7);
 if (VAR_9 && FUNC_11(VAR_9)) {
  FUNC_2(VAR_6, &VAR_9->i_pages, FUNC_12(VAR_7));
  struct inode *VAR_11 = VAR_9->host;
  struct backing_dev_info *VAR_12 = FUNC_7(VAR_11);
  unsigned long VAR_13;

  FUNC_18(&VAR_6, VAR_13);
  FUNC_17(&VAR_6);
  VAR_10 = FUNC_1(VAR_7);
  if (!VAR_10) {
   bool VAR_14;

   VAR_14 = FUNC_10(VAR_9,
         VAR_4);

   FUNC_19(&VAR_6, VAR_4);
   if (FUNC_3(VAR_12))
    FUNC_5(FUNC_8(VAR_11), VAR_5);






   if (VAR_9->host && !VAR_14)
    FUNC_14(VAR_9->host);
  }
  if (!FUNC_0(VAR_7))
   FUNC_16(&VAR_6, VAR_2);
  if (!VAR_8)
   FUNC_16(&VAR_6, VAR_3);
  FUNC_20(&VAR_6, VAR_13);
 } else {
  VAR_10 = FUNC_1(VAR_7);
 }
 if (!VAR_10) {
  FUNC_4(VAR_7, VAR_0);
  FUNC_6(VAR_7, VAR_1);
 }
 FUNC_15(VAR_7);
 return VAR_10;

}
