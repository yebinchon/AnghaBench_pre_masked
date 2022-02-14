
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int data_len; scalar_t__ len; int head; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct sk_buff* FUNC_1 (unsigned int,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (struct sk_buff const*,int,int ,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,struct sk_buff const*) ;
 unsigned int FUNC_5 (struct sk_buff const*) ;
 int FUNC_6 (struct sk_buff const*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,int) ;

struct sk_buff *FUNC_9(const struct sk_buff *VAR_1, gfp_t VAR_2)
{
 int VAR_3 = FUNC_6(VAR_1);
 unsigned int VAR_4 = FUNC_5(VAR_1) + VAR_1->data_len;
 struct sk_buff *VAR_5 = FUNC_1(VAR_4, VAR_2,
     FUNC_2(VAR_1), VAR_0);

 if (!VAR_5)
  return ((void*)0);


 FUNC_8(VAR_5, VAR_3);

 FUNC_7(VAR_5, VAR_1->len);

 FUNC_0(FUNC_3(VAR_1, -VAR_3, VAR_5->head, VAR_3 + VAR_1->len));

 FUNC_4(VAR_5, VAR_1);
 return VAR_5;
}
