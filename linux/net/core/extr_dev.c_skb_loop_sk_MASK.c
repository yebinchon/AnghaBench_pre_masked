
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {struct sock* sk; } ;
struct packet_type {int (* id_match ) (struct packet_type*,struct sock*) ;scalar_t__ af_packet_priv; } ;


 int FUNC_0 (struct packet_type*,struct sock*) ;

__attribute__((used)) static inline bool FUNC_1(struct packet_type *VAR_0, struct sk_buff *VAR_1)
{
 if (!VAR_0->af_packet_priv || !VAR_1->sk)
  return 0;

 if (VAR_0->id_match)
  return VAR_0->id_match(VAR_0, VAR_1->sk);
 else if ((struct sock *)VAR_0->af_packet_priv == VAR_1->sk)
  return 1;

 return 0;
}
