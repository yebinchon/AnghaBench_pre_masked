
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {scalar_t__ i_size; int i_mapping; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct page* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

void FUNC_8(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4)
{
 int VAR_5 = FUNC_2(VAR_2);
 loff_t VAR_6;
 struct page *VAR_7;
 pgoff_t VAR_8;

 FUNC_0(VAR_4 > VAR_2->i_size);

 if (VAR_3 >= VAR_4 || VAR_5 == VAR_1)
  return;

 VAR_6 = FUNC_5(VAR_3, VAR_5);
 if (VAR_4 <= VAR_6 || !(VAR_6 & (VAR_1 - 1)))
  return;

 VAR_8 = VAR_3 >> VAR_0;
 VAR_7 = FUNC_1(VAR_2->i_mapping, VAR_8);

 if (!VAR_7)
  return;




 if (FUNC_3(VAR_7))
  FUNC_6(VAR_7);
 FUNC_7(VAR_7);
 FUNC_4(VAR_7);
}
