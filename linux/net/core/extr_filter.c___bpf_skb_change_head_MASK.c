
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; int data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline int FUNC_8(struct sk_buff *VAR_1, u32 VAR_2,
     u64 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5 = VAR_1->len + VAR_2;
 int VAR_6;

 if (FUNC_7(VAR_3 || (!FUNC_5(VAR_1) && VAR_5 > VAR_4) ||
       VAR_5 < VAR_1->len))
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_1, VAR_2);
 if (FUNC_2(!VAR_6)) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_3(VAR_1->data, 0, VAR_2);
  FUNC_6(VAR_1);
 }

 return VAR_6;
}
