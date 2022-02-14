
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_policy {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct sadb_msg {int sadb_msg_pid; int sadb_msg_seq; scalar_t__ sadb_msg_errno; scalar_t__ sadb_msg_satype; int sadb_msg_type; int sadb_msg_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,struct sock*,int ) ;
 int FUNC_4 (struct sk_buff*,struct xfrm_policy*,int) ;
 struct sk_buff* FUNC_5 (struct xfrm_policy*) ;
 int FUNC_6 (struct xfrm_policy*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_2, struct xfrm_policy *VAR_3, const struct sadb_msg *VAR_4, int VAR_5)
{
 int VAR_6;
 struct sk_buff *VAR_7;
 struct sadb_msg *VAR_8;
 VAR_6 = 0;

 VAR_7 = FUNC_5(VAR_3);
 if (FUNC_0(VAR_7)) {
  VAR_6 = FUNC_1(VAR_7);
  goto out;
 }
 VAR_6 = FUNC_4(VAR_7, VAR_3, VAR_5);
 if (VAR_6 < 0) {
  FUNC_2(VAR_7);
  goto out;
 }

 VAR_8 = (struct sadb_msg *) VAR_7->data;
 VAR_8->sadb_msg_version = VAR_4->sadb_msg_version;
 VAR_8->sadb_msg_type = VAR_4->sadb_msg_type;
 VAR_8->sadb_msg_satype = 0;
 VAR_8->sadb_msg_errno = 0;
 VAR_8->sadb_msg_seq = VAR_4->sadb_msg_seq;
 VAR_8->sadb_msg_pid = VAR_4->sadb_msg_pid;
 FUNC_3(VAR_7, VAR_1, VAR_0, VAR_2, FUNC_6(VAR_3));
 VAR_6 = 0;

out:
 return VAR_6;
}
