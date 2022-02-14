
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sock {int sk_write_queue; int sk_timer; } ;
struct tipc_sock {int peer_caps; void* snd_win; void* rcv_win; int portid; int max_pkt; struct tipc_msg phdr; struct sock sk; } ;
struct net {int dummy; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct tipc_msg*,int ) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct sock*,int *,scalar_t__) ;
 struct net* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct net*,int ,int ,int ) ;
 int FUNC_10 (struct net*,int ) ;
 int FUNC_11 (struct net*,int ,int ) ;
 int FUNC_12 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_13(struct tipc_sock *VAR_7, u32 VAR_8,
    u32 VAR_9)
{
 struct sock *VAR_10 = &VAR_7->sk;
 struct net *VAR_11 = FUNC_8(VAR_10);
 struct tipc_msg *VAR_12 = &VAR_7->phdr;

 FUNC_5(VAR_12, 0);
 FUNC_1(VAR_12, VAR_9);
 FUNC_2(VAR_12, VAR_8);
 FUNC_6(VAR_12, VAR_4);
 FUNC_4(VAR_12, 0);
 FUNC_3(VAR_12, VAR_2);

 FUNC_7(VAR_10, &VAR_10->sk_timer, VAR_6 + VAR_0);
 FUNC_12(VAR_10, VAR_5);
 FUNC_9(VAR_11, VAR_9, VAR_7->portid, VAR_8);
 VAR_7->max_pkt = FUNC_11(VAR_11, VAR_9, VAR_7->portid);
 VAR_7->peer_caps = FUNC_10(VAR_11, VAR_9);
 FUNC_0(&VAR_10->sk_write_queue);
 if (VAR_7->peer_caps & VAR_3)
  return;


 VAR_7->rcv_win = VAR_1;
 VAR_7->snd_win = VAR_1;
}
