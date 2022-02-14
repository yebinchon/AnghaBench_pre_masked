
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long index; int lru; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int i_pages; struct inode* host; } ;
typedef unsigned long pgoff_t ;
typedef int loff_t ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (struct address_space*,struct file*,int *,unsigned int,int ) ;
 int FUNC_8 (struct address_space*) ;
 int FUNC_9 (struct page*) ;
 struct page* FUNC_10 (int *,unsigned long) ;

unsigned int FUNC_11(struct address_space *VAR_2,
  struct file *VAR_3, pgoff_t VAR_4, unsigned long VAR_5,
  unsigned long VAR_6)
{
 struct inode *VAR_7 = VAR_2->host;
 struct page *VAR_8;
 unsigned long VAR_9;
 FUNC_1(VAR_1);
 int VAR_10;
 unsigned int VAR_11 = 0;
 loff_t VAR_12 = FUNC_4(VAR_7);
 gfp_t VAR_13 = FUNC_8(VAR_2);

 if (VAR_12 == 0)
  goto out;

 VAR_9 = ((VAR_12 - 1) >> VAR_0);




 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  pgoff_t VAR_14 = VAR_4 + VAR_10;

  if (VAR_14 > VAR_9)
   break;

  VAR_8 = FUNC_10(&VAR_2->i_pages, VAR_14);
  if (VAR_8 && !FUNC_9(VAR_8)) {





   if (VAR_11)
    FUNC_7(VAR_2, VAR_3, &VAR_1, VAR_11,
      VAR_13);
   VAR_11 = 0;
   continue;
  }

  VAR_8 = FUNC_3(VAR_13);
  if (!VAR_8)
   break;
  VAR_8->index = VAR_14;
  FUNC_5(&VAR_8->lru, &VAR_1);
  if (VAR_10 == VAR_5 - VAR_6)
   FUNC_2(VAR_8);
  VAR_11++;
 }






 if (VAR_11)
  FUNC_7(VAR_2, VAR_3, &VAR_1, VAR_11, VAR_13);
 FUNC_0(!FUNC_6(&VAR_1));
out:
 return VAR_11;
}
