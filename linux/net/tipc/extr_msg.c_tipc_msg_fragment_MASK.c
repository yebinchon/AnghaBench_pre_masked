
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tipc_msg {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct tipc_msg*,int) ;
 int FUNC_5 (struct tipc_msg*,int) ;
 int FUNC_6 (struct tipc_msg*,int) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct sk_buff*,struct tipc_msg const*,int) ;
 int FUNC_9 (struct sk_buff*,int,int *,int) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (int,int ) ;

int FUNC_13(struct sk_buff *VAR_4, const struct tipc_msg *VAR_5,
        int VAR_6, struct sk_buff_head *VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct tipc_msg *VAR_13;
 struct sk_buff *VAR_14;
 u8 *VAR_15;


 if (FUNC_10(VAR_4))
  return -VAR_1;

 VAR_15 = (u8 *)VAR_4->data;
 VAR_10 = FUNC_7(FUNC_3(VAR_4));
 VAR_11 = VAR_6 - VAR_3;
 if (VAR_10 <= VAR_11 || !VAR_11)
  return -VAR_0;

 VAR_9 = VAR_10 / VAR_11 + 1;
 for (VAR_8 = 1; VAR_8 <= VAR_9; VAR_8++) {
  if (VAR_8 < VAR_9)
   VAR_12 = VAR_11;
  else
   VAR_12 = VAR_10 % VAR_11;

  VAR_14 = FUNC_12(VAR_3 + VAR_12, VAR_2);
  if (!VAR_14)
   goto error;
  FUNC_11(VAR_14);
  FUNC_2(VAR_7, VAR_14);

  FUNC_8(VAR_14, VAR_5, VAR_3);
  FUNC_9(VAR_14, VAR_3, VAR_15, VAR_12);
  VAR_15 += VAR_12;

  VAR_13 = FUNC_3(VAR_14);
  FUNC_4(VAR_13, VAR_8);
  FUNC_5(VAR_13, VAR_9);
  FUNC_6(VAR_13, VAR_3 + VAR_12);
 }
 return 0;

error:
 FUNC_1(VAR_7);
 FUNC_0(VAR_7);
 return -VAR_1;
}
