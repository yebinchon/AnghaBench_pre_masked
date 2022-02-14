
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_info_struct {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 struct swap_info_struct* FUNC_2 (TYPE_1__) ;
 struct page* FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct swap_info_struct*,TYPE_1__) ;

__attribute__((used)) static bool FUNC_8(struct page *VAR_1)
{
 swp_entry_t VAR_2;
 struct swap_info_struct *VAR_3;

 if (!FUNC_0(VAR_0) || FUNC_4(!FUNC_1(VAR_1)))
  return FUNC_6(VAR_1) != 0;

 VAR_1 = FUNC_3(VAR_1);
 VAR_2.val = FUNC_5(VAR_1);
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return FUNC_7(VAR_3, VAR_2);
 return 0;
}
