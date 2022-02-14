
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_pt_blk_items {int* mask; int ** val; } ;
struct branch_stack {scalar_t__ nr; TYPE_1__* entries; } ;
struct TYPE_2__ {int from; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(struct branch_stack *VAR_2,
         const struct intel_pt_blk_items *VAR_3)
{
 u64 *VAR_4;
 int VAR_5;

 VAR_2->nr = 0;

 VAR_4 = &VAR_2->entries[0].from;

 for (VAR_5 = VAR_0; VAR_5 <= VAR_1; VAR_5++) {
  u32 VAR_6 = VAR_3->mask[VAR_5];
  const u64 *VAR_7 = VAR_3->val[VAR_5];

  for (; VAR_6; VAR_6 >>= 3, VAR_7 += 3) {
   if ((VAR_6 & 7) == 7) {
    *VAR_4++ = VAR_7[0];
    *VAR_4++ = VAR_7[1];
    *VAR_4++ = FUNC_0(VAR_7[2]);
    VAR_2->nr += 1;
   }
  }
 }
}
