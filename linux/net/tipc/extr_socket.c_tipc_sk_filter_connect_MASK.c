
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int sk_state; int (* sk_state_change ) (struct sock*) ;int sk_err; int sk_timer; int sk_write_queue; } ;
struct tipc_sock {int conn_timeout; int portid; int phdr; struct sock sk; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;



 int VAR_2 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (unsigned long*,int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (struct sock*,int *,int ) ;
 int FUNC_16 (int *) ;
 struct net* FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct net*,int ) ;
 int FUNC_22 (struct net*,int ,int ) ;
 int FUNC_23 (struct sock*,int const) ;
 int FUNC_24 (struct tipc_sock*,int ,int ) ;
 int FUNC_25 (struct tipc_sock*,struct tipc_msg*) ;
 int FUNC_26 (struct tipc_sock*) ;
 int FUNC_27 (struct tipc_sock*) ;
 scalar_t__ FUNC_28 (int ) ;

__attribute__((used)) static bool FUNC_29(struct tipc_sock *VAR_4, struct sk_buff *VAR_5)
{
 struct sock *VAR_6 = &VAR_4->sk;
 struct net *VAR_7 = FUNC_17(VAR_6);
 struct tipc_msg *VAR_8 = FUNC_0(VAR_5);
 bool VAR_9 = FUNC_4(VAR_8);
 u32 VAR_10 = FUNC_27(VAR_4);
 u32 VAR_11 = FUNC_26(VAR_4);
 u32 VAR_12 = FUNC_11(VAR_8);
 u32 VAR_13 = FUNC_10(VAR_8);
 int VAR_14 = FUNC_6(VAR_8);
 unsigned long VAR_15;

 if (FUNC_28(FUNC_9(VAR_8)))
  return 0;

 switch (VAR_6->sk_state) {
 case 132:

  if (FUNC_2(VAR_9)) {
   if (VAR_14)
    break;
   FUNC_24(VAR_4, VAR_12, VAR_13);
   FUNC_13(&VAR_4->phdr, FUNC_7(VAR_8));

   if (FUNC_5(VAR_8))
    return 1;

   VAR_6->sk_state_change(VAR_6);
   FUNC_12(VAR_8, 1);
   return 0;
  }

  if (VAR_12 != VAR_10 || VAR_13 != VAR_11)
   return 0;


  if (VAR_14 != VAR_1)
   break;


  if (FUNC_16(&VAR_6->sk_write_queue))
   break;
  FUNC_1(&VAR_15, 2);
  VAR_15 %= (VAR_4->conn_timeout / 4);
  VAR_15 = FUNC_3(VAR_15 + 100);
  FUNC_15(VAR_6, &VAR_6->sk_timer, VAR_3 + VAR_15);
  return 0;
 case 128:
 case 131:
  return 0;
 case 129:

  if (!FUNC_8(VAR_8) &&
      FUNC_21(VAR_7, VAR_13) & VAR_2)
   return 0;
  if (!VAR_9 && !VAR_14)
   return 1;
  return 0;
 case 130:

  if (FUNC_2(VAR_9 && !VAR_14 && VAR_10 == VAR_12 && VAR_11 == VAR_13))
   return 1;
  if (!FUNC_25(VAR_4, VAR_8))
   return 0;
  if (!VAR_14)
   return 1;
  FUNC_23(VAR_6, 131);
  FUNC_22(VAR_7, VAR_11, VAR_4->portid);
  VAR_6->sk_state_change(VAR_6);
  return 1;
 default:
  FUNC_14("Unknown sk_state %u\n", VAR_6->sk_state);
 }

 FUNC_23(VAR_6, 131);
 VAR_6->sk_err = VAR_0;
 VAR_6->sk_state_change(VAR_6);
 return 1;
}
