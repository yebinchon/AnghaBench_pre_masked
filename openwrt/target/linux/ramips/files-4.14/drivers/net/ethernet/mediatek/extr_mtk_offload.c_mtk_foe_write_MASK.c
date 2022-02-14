
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mtk_foe_entry {int dummy; } ;
struct mtk_eth {scalar_t__ foe_table; } ;


 int FUNC_0 (struct mtk_foe_entry*,struct mtk_foe_entry*,int) ;

__attribute__((used)) static void
FUNC_1(struct mtk_eth *VAR_0, u32 VAR_1,
       struct mtk_foe_entry *VAR_2)
{
 struct mtk_foe_entry *VAR_3 = (struct mtk_foe_entry *)VAR_0->foe_table;

 FUNC_0(&VAR_3[VAR_1], VAR_2, sizeof(*VAR_2));
}
