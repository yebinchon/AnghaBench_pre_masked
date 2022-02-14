
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ csum_offset; scalar_t__ csum_start; int ip_summed; } ;
typedef int __sum16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

bool FUNC_5(struct sk_buff *VAR_2, u16 VAR_3, u16 VAR_4)
{
 u32 VAR_5 = (u32)VAR_3 + (u32)VAR_4 + sizeof(__sum16);
 u32 VAR_6 = FUNC_2(VAR_2) + (u32)VAR_3;

 if (FUNC_4(VAR_6 > VAR_1 || VAR_5 > FUNC_1(VAR_2))) {
  FUNC_0("bad partial csum: csum=%u/%u headroom=%u headlen=%u\n",
         VAR_3, VAR_4, FUNC_2(VAR_2), FUNC_1(VAR_2));
  return 0;
 }
 VAR_2->ip_summed = VAR_0;
 VAR_2->csum_start = VAR_6;
 VAR_2->csum_offset = VAR_4;
 FUNC_3(VAR_2, VAR_3);
 return 1;
}
