
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_policy {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct sadb_msg {int sadb_msg_seq; int sadb_msg_pid; scalar_t__ sadb_msg_errno; int sadb_msg_satype; int sadb_msg_type; int sadb_msg_version; } ;
struct TYPE_2__ {struct sk_buff* skb; int msg_portid; int msg_version; } ;
struct pfkey_sock {TYPE_1__ dump; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,struct xfrm_policy*,int) ;
 struct sk_buff* FUNC_6 (struct xfrm_policy*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct xfrm_policy *VAR_5, int VAR_6, int VAR_7, void *VAR_8)
{
 struct pfkey_sock *VAR_9 = VAR_8;
 struct sk_buff *VAR_10;
 struct sadb_msg *VAR_11;
 int VAR_12;

 if (!FUNC_4(&VAR_9->sk))
  return -VAR_1;

 VAR_10 = FUNC_6(VAR_5);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_12 = FUNC_5(VAR_10, VAR_5, VAR_6);
 if (VAR_12 < 0) {
  FUNC_2(VAR_10);
  return VAR_12;
 }

 VAR_11 = (struct sadb_msg *) VAR_10->data;
 VAR_11->sadb_msg_version = VAR_9->dump.msg_version;
 VAR_11->sadb_msg_type = VAR_4;
 VAR_11->sadb_msg_satype = VAR_3;
 VAR_11->sadb_msg_errno = 0;
 VAR_11->sadb_msg_seq = VAR_7 + 1;
 VAR_11->sadb_msg_pid = VAR_9->dump.msg_portid;

 if (VAR_9->dump.skb)
  FUNC_3(VAR_9->dump.skb, VAR_2, VAR_0,
    &VAR_9->sk, FUNC_7(&VAR_9->sk));
 VAR_9->dump.skb = VAR_10;

 return 0;
}
