
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_l2 {int l2_bdaddr_type; void* l2_cid; int l2_bdaddr; int l2_psm; } ;
struct sockaddr {int sa_family; } ;
struct sock {scalar_t__ sk_state; } ;
struct l2cap_chan {int src_type; int scid; int src; int dst_type; int dcid; int dst; int psm; } ;
struct TYPE_2__ {struct l2cap_chan* chan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_5 ;
 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sockaddr_l2*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_6, struct sockaddr *VAR_7,
         int VAR_8)
{
 struct sockaddr_l2 *VAR_9 = (struct sockaddr_l2 *) VAR_7;
 struct sock *VAR_10 = VAR_6->sk;
 struct l2cap_chan *VAR_11 = FUNC_3(VAR_10)->chan;

 FUNC_0("sock %p, sk %p", VAR_6, VAR_10);

 if (VAR_8 && VAR_10->sk_state != VAR_4 &&
     VAR_10->sk_state != VAR_2 && VAR_10->sk_state != VAR_3 &&
     VAR_10->sk_state != VAR_1)
  return -VAR_5;

 FUNC_4(VAR_9, 0, sizeof(struct sockaddr_l2));
 VAR_7->sa_family = VAR_0;

 VAR_9->l2_psm = VAR_11->psm;

 if (VAR_8) {
  FUNC_1(&VAR_9->l2_bdaddr, &VAR_11->dst);
  VAR_9->l2_cid = FUNC_2(VAR_11->dcid);
  VAR_9->l2_bdaddr_type = VAR_11->dst_type;
 } else {
  FUNC_1(&VAR_9->l2_bdaddr, &VAR_11->src);
  VAR_9->l2_cid = FUNC_2(VAR_11->scid);
  VAR_9->l2_bdaddr_type = VAR_11->src_type;
 }

 return sizeof(struct sockaddr_l2);
}
