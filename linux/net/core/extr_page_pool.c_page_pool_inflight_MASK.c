
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page_pool {int pages_state_hold_cnt; int pages_state_release_cnt; } ;
typedef int s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct page_pool*,int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_4(struct page_pool *VAR_0)
{
 u32 VAR_1 = FUNC_2(&VAR_0->pages_state_release_cnt);
 u32 VAR_2 = FUNC_0(VAR_0->pages_state_hold_cnt);
 s32 VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);

 FUNC_3(VAR_0, VAR_3, VAR_2, VAR_1);
 return VAR_3;
}
