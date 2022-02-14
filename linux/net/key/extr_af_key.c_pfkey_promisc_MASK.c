
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct sadb_msg {int sadb_msg_satype; int sadb_msg_len; scalar_t__ sadb_msg_errno; } ;
struct pfkey_sock {int promisc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int *,int ) ;
 struct pfkey_sock* FUNC_1 (struct sock*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_3, struct sk_buff *VAR_4, const struct sadb_msg *VAR_5, void * const *VAR_6)
{
 struct pfkey_sock *VAR_7 = FUNC_1(VAR_3);
 int VAR_8 = VAR_5->sadb_msg_satype;
 bool VAR_9 = 0;

 if (VAR_5->sadb_msg_len == (sizeof(*VAR_5) / sizeof(uint64_t))) {
  VAR_9 = 1;
  if (VAR_8 != 0 && VAR_8 != 1)
   return -VAR_1;
  VAR_7->promisc = VAR_8;
 }
 if (VAR_9 && FUNC_3(VAR_4))
  VAR_4 = FUNC_4(VAR_4, VAR_2);
 else
  VAR_4 = FUNC_2(VAR_4, VAR_2);

 if (VAR_9 && VAR_4) {
  struct sadb_msg *VAR_10 = (struct sadb_msg *) VAR_4->data;
  VAR_10->sadb_msg_errno = 0;
 }

 FUNC_0(VAR_4, VAR_2, VAR_0, ((void*)0), FUNC_5(VAR_3));
 return 0;
}
