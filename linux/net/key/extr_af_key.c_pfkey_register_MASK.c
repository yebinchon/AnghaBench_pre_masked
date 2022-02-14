
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_satype; } ;
struct pfkey_sock {int registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (struct sadb_msg const*,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,struct sock*,int ) ;
 struct pfkey_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_7, struct sk_buff *VAR_8, const struct sadb_msg *VAR_9, void * const *VAR_10)
{
 struct pfkey_sock *VAR_11 = FUNC_2(VAR_7);
 struct sk_buff *VAR_12;

 if (VAR_9->sadb_msg_satype > VAR_5)
  return -VAR_2;

 if (VAR_9->sadb_msg_satype != VAR_6) {
  if (VAR_11->registered&(1<<VAR_9->sadb_msg_satype))
   return -VAR_1;
  VAR_11->registered |= (1<<VAR_9->sadb_msg_satype);
 }

 FUNC_4();

 VAR_12 = FUNC_0(VAR_9, VAR_4);
 if (!VAR_12) {
  if (VAR_9->sadb_msg_satype != VAR_6)
   VAR_11->registered &= ~(1<<VAR_9->sadb_msg_satype);

  return -VAR_3;
 }

 FUNC_1(VAR_12, VAR_4, VAR_0, VAR_7,
   FUNC_3(VAR_7));
 return 0;
}
