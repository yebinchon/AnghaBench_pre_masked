
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct load_weight {int inv_weight; } ;


 int VAR_0 ;
 int FUNC_0 (struct load_weight*) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static u64 FUNC_4(u64 VAR_1, unsigned long VAR_2, struct load_weight *VAR_3)
{
 u64 VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = VAR_0;

 FUNC_0(VAR_3);

 if (FUNC_3(VAR_4 >> 32)) {
  while (VAR_4 >> 32) {
   VAR_4 >>= 1;
   VAR_5--;
  }
 }


 VAR_4 = (u64)(u32)VAR_4 * VAR_3->inv_weight;

 while (VAR_4 >> 32) {
  VAR_4 >>= 1;
  VAR_5--;
 }

 return FUNC_1(VAR_1, VAR_4, VAR_5);
}
