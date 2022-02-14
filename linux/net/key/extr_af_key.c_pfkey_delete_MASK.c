
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_pid; int sadb_msg_seq; } ;
struct net {int dummy; } ;
struct km_event {int event; int portid; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct xfrm_state*,struct km_event*) ;
 struct xfrm_state* FUNC_1 (struct net*,struct sadb_msg const*,void* const*) ;
 int FUNC_2 (void* const,void* const) ;
 int FUNC_3 (struct xfrm_state*) ;
 struct net* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct xfrm_state*,int,int) ;
 int FUNC_6 (struct xfrm_state*) ;
 scalar_t__ FUNC_7 (struct xfrm_state*) ;
 int FUNC_8 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_7, struct sk_buff *VAR_8, const struct sadb_msg *VAR_9, void * const *VAR_10)
{
 struct net *VAR_11 = FUNC_4(VAR_7);
 struct xfrm_state *VAR_12;
 struct km_event VAR_13;
 int VAR_14;

 if (!VAR_10[VAR_5-1] ||
     !FUNC_2(VAR_10[VAR_4-1],
         VAR_10[VAR_3-1]))
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_11, VAR_9, VAR_10);
 if (VAR_12 == ((void*)0))
  return -VAR_2;

 if ((VAR_14 = FUNC_3(VAR_12)))
  goto out;

 if (FUNC_7(VAR_12)) {
  VAR_14 = -VAR_1;
  goto out;
 }

 VAR_14 = FUNC_6(VAR_12);

 if (VAR_14 < 0)
  goto out;

 VAR_13.seq = VAR_9->sadb_msg_seq;
 VAR_13.portid = VAR_9->sadb_msg_pid;
 VAR_13.event = VAR_6;
 FUNC_0(VAR_12, &VAR_13);
out:
 FUNC_5(VAR_12, VAR_14 ? 0 : 1, 1);
 FUNC_8(VAR_12);

 return VAR_14;
}
