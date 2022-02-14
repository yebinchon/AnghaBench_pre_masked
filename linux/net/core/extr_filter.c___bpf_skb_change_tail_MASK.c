
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ encapsulation; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline int FUNC_8(struct sk_buff *VAR_2, u32 VAR_3,
     u64 VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 if (FUNC_7(VAR_4 || VAR_3 > VAR_5 || VAR_3 < VAR_6))
  return -VAR_0;
 if (VAR_2->encapsulation)
  return -VAR_1;
 VAR_7 = FUNC_2(VAR_2, VAR_2->len);
 if (!VAR_7) {
  if (VAR_3 > VAR_2->len)
   VAR_7 = FUNC_3(VAR_2, VAR_3);
  else if (VAR_3 < VAR_2->len)
   VAR_7 = FUNC_4(VAR_2, VAR_3);
  if (!VAR_7 && FUNC_6(VAR_2))
   FUNC_5(VAR_2);
 }
 return VAR_7;
}
