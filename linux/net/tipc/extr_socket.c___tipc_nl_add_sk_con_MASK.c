
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_sock {scalar_t__ conn_type; scalar_t__ conn_instance; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct tipc_sock*) ;
 scalar_t__ FUNC_6 (struct tipc_sock*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_7, struct tipc_sock *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 struct nlattr *VAR_11;

 VAR_9 = FUNC_5(VAR_8);
 VAR_10 = FUNC_6(VAR_8);

 VAR_11 = FUNC_2(VAR_7, VAR_6);
 if (!VAR_11)
  return -VAR_0;

 if (FUNC_4(VAR_7, VAR_3, VAR_9))
  goto msg_full;
 if (FUNC_4(VAR_7, VAR_4, VAR_10))
  goto msg_full;

 if (VAR_8->conn_type != 0) {
  if (FUNC_3(VAR_7, VAR_1))
   goto msg_full;
  if (FUNC_4(VAR_7, VAR_5, VAR_8->conn_type))
   goto msg_full;
  if (FUNC_4(VAR_7, VAR_2, VAR_8->conn_instance))
   goto msg_full;
 }
 FUNC_1(VAR_7, VAR_11);

 return 0;

msg_full:
 FUNC_0(VAR_7, VAR_11);

 return -VAR_0;
}
