
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct xfrm_state {int lock; TYPE_1__ km; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_len; scalar_t__ sadb_msg_seq; scalar_t__ sadb_msg_errno; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct net* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct xfrm_state* FUNC_3 (struct net*,int ,scalar_t__) ;
 int FUNC_4 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_4, struct sk_buff *VAR_5, const struct sadb_msg *VAR_6, void * const *VAR_7)
{
 struct net *VAR_8 = FUNC_0(VAR_4);
 struct xfrm_state *VAR_9;

 if (VAR_6->sadb_msg_len != sizeof(struct sadb_msg)/8)
  return -VAR_1;

 if (VAR_6->sadb_msg_seq == 0 || VAR_6->sadb_msg_errno == 0)
  return 0;

 VAR_9 = FUNC_3(VAR_8, VAR_0, VAR_6->sadb_msg_seq);
 if (VAR_9 == ((void*)0))
  return 0;

 FUNC_1(&VAR_9->lock);
 if (VAR_9->km.state == VAR_2)
  VAR_9->km.state = VAR_3;

 FUNC_2(&VAR_9->lock);
 FUNC_4(VAR_9);
 return 0;
}
