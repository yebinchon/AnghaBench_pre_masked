
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int proto; } ;
struct xfrm_state {TYPE_1__ id; } ;
struct sk_buff {scalar_t__ data; } ;
struct sadb_msg {int sadb_msg_seq; int sadb_msg_pid; scalar_t__ sadb_msg_reserved; scalar_t__ sadb_msg_errno; int sadb_msg_satype; int sadb_msg_type; int sadb_msg_version; } ;
struct TYPE_4__ {struct sk_buff* skb; int msg_portid; int msg_version; } ;
struct pfkey_sock {TYPE_2__ dump; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_2 (struct sk_buff*,int ,int ,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (struct xfrm_state*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct xfrm_state *VAR_4, int VAR_5, void *VAR_6)
{
 struct pfkey_sock *VAR_7 = VAR_6;
 struct sk_buff *VAR_8;
 struct sadb_msg *VAR_9;

 if (!FUNC_3(&VAR_7->sk))
  return -VAR_1;

 VAR_8 = FUNC_5(VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = (struct sadb_msg *) VAR_8->data;
 VAR_9->sadb_msg_version = VAR_7->dump.msg_version;
 VAR_9->sadb_msg_type = VAR_3;
 VAR_9->sadb_msg_satype = FUNC_4(VAR_4->id.proto);
 VAR_9->sadb_msg_errno = 0;
 VAR_9->sadb_msg_reserved = 0;
 VAR_9->sadb_msg_seq = VAR_5 + 1;
 VAR_9->sadb_msg_pid = VAR_7->dump.msg_portid;

 if (VAR_7->dump.skb)
  FUNC_2(VAR_7->dump.skb, VAR_2, VAR_0,
    &VAR_7->sk, FUNC_6(&VAR_7->sk));
 VAR_7->dump.skb = VAR_8;

 return 0;
}
