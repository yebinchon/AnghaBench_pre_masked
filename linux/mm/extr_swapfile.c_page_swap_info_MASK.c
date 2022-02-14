
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_info_struct {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 struct swap_info_struct* FUNC_1 (TYPE_1__) ;

struct swap_info_struct *FUNC_2(struct page *VAR_0)
{
 swp_entry_t VAR_1 = { .val = FUNC_0(VAR_0) };
 return FUNC_1(VAR_1);
}
