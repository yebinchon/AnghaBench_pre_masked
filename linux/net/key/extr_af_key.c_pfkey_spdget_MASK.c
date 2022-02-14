
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_policy {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_x_policy {int sadb_x_policy_id; } ;
struct sadb_msg {scalar_t__ sadb_msg_type; int sadb_msg_pid; int sadb_msg_seq; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int byid; } ;
struct km_event {int event; TYPE_1__ data; int portid; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sock*,struct xfrm_policy*,struct sadb_msg const*,unsigned int) ;
 int FUNC_1 (struct xfrm_policy*,unsigned int,struct km_event*) ;
 struct net* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct xfrm_policy*,int,int) ;
 int FUNC_4 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_5 (struct net*,int ,int ,int ,unsigned int,int ,int,int*) ;
 unsigned int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_8, struct sk_buff *VAR_9, const struct sadb_msg *VAR_10, void * const *VAR_11)
{
 struct net *VAR_12 = FUNC_2(VAR_8);
 unsigned int VAR_13;
 int VAR_14 = 0, VAR_15;
 struct sadb_x_policy *VAR_16;
 struct xfrm_policy *VAR_17;
 struct km_event VAR_18;

 if ((VAR_16 = VAR_11[VAR_3-1]) == ((void*)0))
  return -VAR_1;

 VAR_13 = FUNC_6(VAR_16->sadb_x_policy_id);
 if (VAR_13 >= VAR_6)
  return -VAR_1;

 VAR_15 = (VAR_10->sadb_msg_type == VAR_4);
 VAR_17 = FUNC_5(VAR_12, VAR_0, 0, VAR_7,
         VAR_13, VAR_16->sadb_x_policy_id, VAR_15, &VAR_14);
 if (VAR_17 == ((void*)0))
  return -VAR_2;

 if (VAR_15) {
  FUNC_3(VAR_17, VAR_14 ? 0 : 1, 1);

  if (VAR_14)
   goto out;
  VAR_18.seq = VAR_10->sadb_msg_seq;
  VAR_18.portid = VAR_10->sadb_msg_pid;
  VAR_18.data.byid = 1;
  VAR_18.event = VAR_5;
  FUNC_1(VAR_17, VAR_13, &VAR_18);
 } else {
  VAR_14 = FUNC_0(VAR_8, VAR_17, VAR_10, VAR_13);
 }

out:
 FUNC_4(VAR_17);
 return VAR_14;
}
