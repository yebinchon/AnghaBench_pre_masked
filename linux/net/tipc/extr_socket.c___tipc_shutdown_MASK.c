
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_sock {int portid; int cong_link_cnt; } ;
struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_receive_queue; int sk_write_queue; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ bytes_read; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 struct net* FUNC_4 (struct sock*) ;
 struct sk_buff* FUNC_5 (int ,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_6 (struct net*,int ,int ) ;
 int FUNC_7 (struct net*,struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sock*,scalar_t__) ;
 struct tipc_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct sk_buff*,int) ;
 scalar_t__ FUNC_11 (struct sock*) ;
 int FUNC_12 (struct socket*,long*,int) ;
 int FUNC_13 (struct tipc_sock*) ;
 int FUNC_14 (struct tipc_sock*) ;
 int FUNC_15 (struct tipc_sock*) ;
 int FUNC_16 (struct tipc_sock*) ;

__attribute__((used)) static void FUNC_17(struct socket *VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_5->sk;
 struct tipc_sock *VAR_8 = FUNC_9(VAR_7);
 struct net *VAR_9 = FUNC_4(VAR_7);
 long VAR_10 = VAR_0;
 u32 VAR_11 = FUNC_15(VAR_8);
 struct sk_buff *VAR_12;


 FUNC_12(VAR_5, &VAR_10, (!VAR_8->cong_link_cnt &&
         !FUNC_13(VAR_8)));


 FUNC_2(&VAR_7->sk_write_queue);




 while ((VAR_12 = FUNC_1(&VAR_7->sk_receive_queue)) != ((void*)0)) {
  if (FUNC_0(VAR_12)->bytes_read) {
   FUNC_3(VAR_12);
   continue;
  }
  if (!FUNC_11(VAR_7) &&
      VAR_7->sk_state != VAR_4) {
   FUNC_8(VAR_7, VAR_4);
   FUNC_6(VAR_9, VAR_11, VAR_8->portid);
  }
  FUNC_10(VAR_7, VAR_12, VAR_6);
 }

 if (FUNC_11(VAR_7))
  return;

 if (VAR_7->sk_state != VAR_4) {
  VAR_12 = FUNC_5(VAR_3,
          VAR_2, VAR_1, 0, VAR_11,
          FUNC_14(VAR_8), FUNC_16(VAR_8),
          VAR_8->portid, VAR_6);
  if (VAR_12)
   FUNC_7(VAR_9, VAR_12, VAR_11, VAR_8->portid);
  FUNC_6(VAR_9, VAR_11, VAR_8->portid);
  FUNC_8(VAR_7, VAR_4);
 }
}
