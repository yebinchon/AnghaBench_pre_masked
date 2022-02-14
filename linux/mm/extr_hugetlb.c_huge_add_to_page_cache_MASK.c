
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_lock; int i_blocks; } ;
struct hstate {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*,struct address_space*,int ,int ) ;
 scalar_t__ FUNC_2 (struct hstate*) ;
 struct hstate* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct page *VAR_1, struct address_space *VAR_2,
      pgoff_t VAR_3)
{
 struct inode *VAR_4 = VAR_2->host;
 struct hstate *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0);

 if (VAR_6)
  return VAR_6;
 FUNC_0(VAR_1);





 FUNC_4(VAR_1);

 FUNC_5(&VAR_4->i_lock);
 VAR_4->i_blocks += FUNC_2(VAR_5);
 FUNC_6(&VAR_4->i_lock);
 return 0;
}
