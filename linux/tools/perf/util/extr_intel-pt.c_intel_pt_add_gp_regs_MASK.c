
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct regs_dump {int mask; } ;
struct intel_pt_blk_items {int** val; int* mask; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static u64 *FUNC_0(struct regs_dump *VAR_3, u64 *VAR_4,
     const struct intel_pt_blk_items *VAR_5,
     u64 VAR_6)
{
 const u64 *VAR_7 = VAR_5->val[VAR_0];
 u32 VAR_8 = VAR_5->mask[VAR_0];
 u32 VAR_9;
 int VAR_10;

 for (VAR_10 = 0, VAR_9 = 1; VAR_10 < VAR_1; VAR_10++, VAR_9 <<= 1) {

  int VAR_11 = VAR_2[VAR_10] - 1;

  if (VAR_11 < 0)
   continue;





  if (VAR_8 & 1 << VAR_11 && VAR_6 & VAR_9) {
   VAR_3->mask |= VAR_9;
   *VAR_4++ = VAR_7[VAR_11];
  }
 }

 return VAR_4;
}
