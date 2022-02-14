
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ type; int ops; int state; } ;
struct sock {int sk_protocol; TYPE_1__* sk_prot; int sk_backlog_rcv; } ;
struct pn_sock {scalar_t__ resource; scalar_t__ dobject; scalar_t__ sobject; } ;
struct phonet_protocol {scalar_t__ sock_type; int ops; int prot; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* init ) (struct sock*) ;int backlog_rcv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct phonet_protocol* FUNC_1 (int) ;
 int FUNC_2 (struct phonet_protocol const*) ;
 struct pn_sock* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (char*,int ,int) ;
 struct sock* FUNC_5 (struct net*,int ,int ,int ,int) ;
 int FUNC_6 (struct socket*,struct sock*) ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_9, struct socket *VAR_10, int VAR_11,
       int VAR_12)
{
 struct sock *VAR_13;
 struct pn_sock *VAR_14;
 const struct phonet_protocol *VAR_15;
 int VAR_16;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 if (VAR_11 == 0) {

  switch (VAR_10->type) {
  case 129:
   VAR_11 = VAR_6;
   break;
  case 128:
   VAR_11 = VAR_7;
   break;
  default:
   return -VAR_3;
  }
 }

 VAR_15 = FUNC_1(VAR_11);
 if (VAR_15 == ((void*)0) &&
     FUNC_4("net-pf-%d-proto-%d", VAR_5, VAR_11) == 0)
  VAR_15 = FUNC_1(VAR_11);

 if (VAR_15 == ((void*)0))
  return -VAR_3;
 if (VAR_10->type != VAR_15->sock_type) {
  VAR_16 = -VAR_3;
  goto out;
 }

 VAR_13 = FUNC_5(VAR_9, VAR_5, VAR_4, VAR_15->prot, VAR_12);
 if (VAR_13 == ((void*)0)) {
  VAR_16 = -VAR_1;
  goto out;
 }

 FUNC_6(VAR_10, VAR_13);
 VAR_10->state = VAR_8;
 VAR_10->ops = VAR_15->ops;
 VAR_13->sk_backlog_rcv = VAR_13->sk_prot->backlog_rcv;
 VAR_13->sk_protocol = VAR_11;
 VAR_14 = FUNC_3(VAR_13);
 VAR_14->sobject = 0;
 VAR_14->dobject = 0;
 VAR_14->resource = 0;
 VAR_13->sk_prot->init(VAR_13);
 VAR_16 = 0;

out:
 FUNC_2(VAR_15);
 return VAR_16;
}
