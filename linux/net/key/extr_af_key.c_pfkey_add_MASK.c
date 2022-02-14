
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct xfrm_state {TYPE_1__ km; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {scalar_t__ sadb_msg_type; int sadb_msg_pid; int sadb_msg_seq; } ;
struct net {int dummy; } ;
struct km_event {int portid; int seq; int event; } ;


 scalar_t__ FUNC_0 (struct xfrm_state*) ;
 int FUNC_1 (struct xfrm_state*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct xfrm_state*) ;
 int FUNC_3 (struct xfrm_state*,struct km_event*) ;
 struct xfrm_state* FUNC_4 (struct net*,struct sadb_msg const*,void* const*) ;
 struct net* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct xfrm_state*,int,int) ;
 int FUNC_7 (struct xfrm_state*) ;
 int FUNC_8 (struct xfrm_state*) ;
 int FUNC_9 (struct xfrm_state*) ;
 int FUNC_10 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_4, struct sk_buff *VAR_5, const struct sadb_msg *VAR_6, void * const *VAR_7)
{
 struct net *VAR_8 = FUNC_5(VAR_4);
 struct xfrm_state *VAR_9;
 int VAR_10;
 struct km_event VAR_11;

 VAR_9 = FUNC_4(VAR_8, VAR_6, VAR_7);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 FUNC_8(VAR_9);
 if (VAR_6->sadb_msg_type == VAR_0)
  VAR_10 = FUNC_7(VAR_9);
 else
  VAR_10 = FUNC_10(VAR_9);

 FUNC_6(VAR_9, VAR_10 ? 0 : 1, 1);

 if (VAR_10 < 0) {
  VAR_9->km.state = VAR_3;
  FUNC_2(VAR_9);
  goto out;
 }

 if (VAR_6->sadb_msg_type == VAR_0)
  VAR_11.event = VAR_1;
 else
  VAR_11.event = VAR_2;
 VAR_11.seq = VAR_6->sadb_msg_seq;
 VAR_11.portid = VAR_6->sadb_msg_pid;
 FUNC_3(VAR_9, &VAR_11);
out:
 FUNC_9(VAR_9);
 return VAR_10;
}
