
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_msg {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {char* data; } ;
struct msghdr {int msg_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*,int) ;
 int FUNC_11 (struct tipc_msg*,int ) ;
 int FUNC_12 (struct tipc_msg*,int) ;
 int FUNC_13 (struct tipc_msg*,int ) ;
 int FUNC_14 (struct sk_buff*,struct tipc_msg*,int) ;
 int FUNC_15 (struct sk_buff*,int,struct tipc_msg*,int) ;
 int FUNC_16 (struct sk_buff*) ;
 struct sk_buff* FUNC_17 (int,int ) ;
 scalar_t__ FUNC_18 (struct sk_buff_head*) ;
 int FUNC_19 (int ,struct tipc_msg*,int ,int ,int,int ) ;
 scalar_t__ FUNC_20 (int) ;

int FUNC_21(struct tipc_msg *VAR_10, struct msghdr *VAR_11, int VAR_12,
     int VAR_13, int VAR_14, struct sk_buff_head *VAR_15)
{
 int VAR_16 = FUNC_7(VAR_10);
 struct tipc_msg VAR_17;
 int VAR_18 = VAR_16 + VAR_13;
 int VAR_19 = VAR_14;
 struct sk_buff *VAR_20;
 int VAR_21 = VAR_13;
 int VAR_22 = 1;
 char *VAR_23;
 int VAR_24;
 int VAR_25;

 FUNC_12(VAR_10, VAR_18);


 if (FUNC_5(VAR_18 <= VAR_14)) {
  VAR_20 = FUNC_17(VAR_18, VAR_5);


  if (FUNC_20(!VAR_20)) {
   if (VAR_14 != VAR_8)
    return -VAR_1;
   VAR_25 = FUNC_21(VAR_10, VAR_11, VAR_12, VAR_13, VAR_2, VAR_15);
   if (VAR_25 != VAR_13)
    return VAR_25;
   if (FUNC_18(VAR_15))
    return VAR_13;
   return -VAR_1;
  }
  FUNC_16(VAR_20);
  FUNC_2(VAR_15, VAR_20);
  FUNC_14(VAR_20, VAR_10, VAR_16);
  VAR_23 = VAR_20->data + VAR_16;
  if (FUNC_4(VAR_23, VAR_13, &VAR_11->msg_iter))
   return VAR_13;
  VAR_25 = -VAR_0;
  goto error;
 }


 FUNC_19(FUNC_9(VAR_10), &VAR_17, VAR_9,
        VAR_3, VAR_6, FUNC_6(VAR_10));
 FUNC_12(&VAR_17, VAR_14);
 FUNC_10(&VAR_17, VAR_22);
 FUNC_11(&VAR_17, FUNC_8(VAR_10));


 VAR_20 = FUNC_17(VAR_14, VAR_5);
 if (!VAR_20)
  return -VAR_1;
 FUNC_16(VAR_20);
 FUNC_2(VAR_15, VAR_20);
 VAR_23 = VAR_20->data;
 FUNC_14(VAR_20, &VAR_17, VAR_6);
 VAR_23 += VAR_6;
 VAR_19 -= VAR_6;
 FUNC_15(VAR_20, VAR_6, VAR_10, VAR_16);
 VAR_23 += VAR_16;
 VAR_19 -= VAR_16;

 do {
  if (VAR_21 < VAR_19)
   VAR_19 = VAR_21;

  if (!FUNC_4(VAR_23, VAR_19, &VAR_11->msg_iter)) {
   VAR_25 = -VAR_0;
   goto error;
  }
  VAR_21 -= VAR_19;

  if (!VAR_21)
   break;


  if (VAR_21 < (VAR_14 - VAR_6))
   VAR_24 = VAR_21 + VAR_6;
  else
   VAR_24 = VAR_14;
  VAR_20 = FUNC_17(VAR_24, VAR_5);
  if (!VAR_20) {
   VAR_25 = -VAR_1;
   goto error;
  }
  FUNC_16(VAR_20);
  FUNC_2(VAR_15, VAR_20);
  FUNC_13(&VAR_17, VAR_4);
  FUNC_12(&VAR_17, VAR_24);
  FUNC_10(&VAR_17, ++VAR_22);
  FUNC_14(VAR_20, &VAR_17, VAR_6);
  VAR_23 = VAR_20->data + VAR_6;
  VAR_19 = VAR_24 - VAR_6;

 } while (1);
 FUNC_13(FUNC_3(VAR_20), VAR_7);
 return VAR_13;
error:
 FUNC_1(VAR_15);
 FUNC_0(VAR_15);
 return VAR_25;
}
