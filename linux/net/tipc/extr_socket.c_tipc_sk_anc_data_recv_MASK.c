
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_sock {int conn_type; int conn_instance; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct msghdr {scalar_t__ msg_controllen; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int* FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct msghdr*,int ,int ,int,int*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct msghdr *VAR_6, struct sk_buff *VAR_7,
     struct tipc_sock *VAR_8)
{
 struct tipc_msg *VAR_9;
 u32 VAR_10[3];
 u32 VAR_11;
 u32 VAR_12;
 int VAR_13;
 int VAR_14;

 if (FUNC_1(VAR_6->msg_controllen == 0))
  return 0;
 VAR_9 = FUNC_0(VAR_7);


 VAR_11 = VAR_9 ? FUNC_4(VAR_9) : 0;
 if (FUNC_11(VAR_11)) {
  VAR_10[0] = VAR_11;
  VAR_10[1] = FUNC_3(VAR_9);
  VAR_14 = FUNC_9(VAR_6, VAR_1, VAR_4, 8, VAR_10);
  if (VAR_14)
   return VAR_14;
  if (VAR_10[1]) {
   if (FUNC_10(VAR_7))
    return -VAR_0;
   VAR_9 = FUNC_0(VAR_7);
   VAR_14 = FUNC_9(VAR_6, VAR_1, VAR_5, VAR_10[1],
           FUNC_2(VAR_9));
   if (VAR_14)
    return VAR_14;
  }
 }


 VAR_12 = VAR_9 ? FUNC_8(VAR_9) : VAR_3;
 switch (VAR_12) {
 case 128:
  VAR_13 = 1;
  VAR_10[0] = FUNC_6(VAR_9);
  VAR_10[1] = FUNC_5(VAR_9);
  VAR_10[2] = FUNC_5(VAR_9);
  break;
 case 129:
  VAR_13 = 1;
  VAR_10[0] = FUNC_6(VAR_9);
  VAR_10[1] = FUNC_5(VAR_9);
  VAR_10[2] = FUNC_7(VAR_9);
  break;
 case 130:
  VAR_13 = (VAR_8->conn_type != 0);
  VAR_10[0] = VAR_8->conn_type;
  VAR_10[1] = VAR_8->conn_instance;
  VAR_10[2] = VAR_8->conn_instance;
  break;
 default:
  VAR_13 = 0;
 }
 if (VAR_13) {
  VAR_14 = FUNC_9(VAR_6, VAR_1, VAR_2, 12, VAR_10);
  if (VAR_14)
   return VAR_14;
 }

 return 0;
}
