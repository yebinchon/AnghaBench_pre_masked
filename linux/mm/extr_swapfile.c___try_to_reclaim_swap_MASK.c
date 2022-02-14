
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_info_struct {int type; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct page* FUNC_0 (int ,unsigned long) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct swap_info_struct *VAR_3,
     unsigned long VAR_4, unsigned long VAR_5)
{
 swp_entry_t VAR_6 = FUNC_5(VAR_3->type, VAR_4);
 struct page *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_0(FUNC_4(VAR_6), VAR_4);
 if (!VAR_7)
  return 0;







 if (FUNC_7(VAR_7)) {
  if ((VAR_5 & VAR_0) ||
      ((VAR_5 & VAR_2) && !FUNC_2(VAR_7)) ||
      ((VAR_5 & VAR_1) && FUNC_1(VAR_7)))
   VAR_8 = FUNC_6(VAR_7);
  FUNC_8(VAR_7);
 }
 FUNC_3(VAR_7);
 return VAR_8;
}
