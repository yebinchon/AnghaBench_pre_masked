
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct sk_buff* FUNC_3 (struct sk_buff_head*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_4(struct sk_buff_head *VAR_0,
       u16 VAR_1)
{
 struct sk_buff *VAR_2 = FUNC_3(VAR_0);

 if (VAR_2 && FUNC_2(FUNC_1(VAR_2), VAR_1)) {
  FUNC_0(VAR_2, VAR_0);
  return VAR_2;
 }
 return ((void*)0);
}
