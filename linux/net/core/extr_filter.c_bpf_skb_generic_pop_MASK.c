
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, u32 VAR_2, u32 VAR_3)
{



 if (FUNC_4(!FUNC_2(VAR_1, VAR_2 + VAR_3)))
  return -VAR_0;

 FUNC_3(VAR_1, VAR_1->data + VAR_2, VAR_3);
 FUNC_1(VAR_1->data + VAR_3, VAR_1->data, VAR_2);
 FUNC_0(VAR_1, VAR_3);

 return 0;
}
