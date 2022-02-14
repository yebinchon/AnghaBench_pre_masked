
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int dummy; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 unsigned char FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct address_space*,int ) ;
 struct page* FUNC_2 (struct address_space*,int ) ;
 struct swap_info_struct* FUNC_3 (int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct swap_info_struct*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct address_space*) ;
 struct address_space* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct page*) ;

__attribute__((used)) static unsigned char FUNC_11(struct address_space *VAR_0, pgoff_t VAR_1)
{
 unsigned char VAR_2 = 0;
 struct page *VAR_3;
 VAR_3 = FUNC_2(VAR_0, VAR_1);

 if (VAR_3) {
  VAR_2 = FUNC_0(VAR_3);
  FUNC_4(VAR_3);
 }

 return VAR_2;
}
