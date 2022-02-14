
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_write_space; int sk_data_ready; } ;
struct sctp_shared_key {int key_list; } ;
struct TYPE_4__ {int dead; struct sock* sk; int bind_addr; int inqueue; int refcnt; int type; } ;
struct sctp_endpoint {int digest; TYPE_2__ base; int ecn_enable; int reconf_enable; int prsctp_enable; int endpoint_shared_keys; int secret_key; int rcvbuf_policy; int sndbuf_policy; int asocs; scalar_t__ asconf_enable; scalar_t__ auth_enable; } ;
struct TYPE_3__ {int ecn_enable; int reconf_enable; int prsctp_enable; int rcvbuf_policy; int sndbuf_policy; scalar_t__ auth_enable; scalar_t__ addip_enable; } ;
struct net {TYPE_1__ sctp; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct sctp_endpoint*,int ) ;
 int FUNC_7 (struct sctp_endpoint*) ;
 scalar_t__ FUNC_8 (struct sctp_endpoint*,int ) ;
 struct sctp_shared_key* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int VAR_7 ;
 int FUNC_13 (struct sock*) ;
 struct net* FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*,int ) ;

__attribute__((used)) static struct sctp_endpoint *FUNC_16(struct sctp_endpoint *VAR_8,
      struct sock *VAR_9,
      gfp_t VAR_10)
{
 struct net *VAR_11 = FUNC_14(VAR_9);
 struct sctp_shared_key *VAR_12;

 VAR_8->digest = FUNC_3(VAR_3, VAR_10);
 if (!VAR_8->digest)
  return ((void*)0);

 VAR_8->asconf_enable = VAR_11->sctp.addip_enable;
 VAR_8->auth_enable = VAR_11->sctp.auth_enable;
 if (VAR_8->auth_enable) {
  if (FUNC_8(VAR_8, VAR_10))
   goto nomem;
  if (VAR_8->asconf_enable) {
   FUNC_6(VAR_8, VAR_0);
   FUNC_6(VAR_8, VAR_1);
  }
 }



 VAR_8->base.type = VAR_2;


 FUNC_5(&VAR_8->base.refcnt, 1);
 VAR_8->base.dead = 0;


 FUNC_11(&VAR_8->base.inqueue);


 FUNC_12(&VAR_8->base.inqueue, VAR_6);


 FUNC_10(&VAR_8->base.bind_addr, 0);


 FUNC_0(&VAR_8->asocs);


 VAR_8->sndbuf_policy = VAR_11->sctp.sndbuf_policy;

 VAR_9->sk_data_ready = VAR_5;
 VAR_9->sk_write_space = VAR_7;
 FUNC_15(VAR_9, VAR_4);


 VAR_8->rcvbuf_policy = VAR_11->sctp.rcvbuf_policy;


 FUNC_1(VAR_8->secret_key, sizeof(VAR_8->secret_key));


 FUNC_0(&VAR_8->endpoint_shared_keys);
 VAR_12 = FUNC_9(0, VAR_10);
 if (!VAR_12)
  goto nomem_shkey;

 FUNC_4(&VAR_12->key_list, &VAR_8->endpoint_shared_keys);




 VAR_8->prsctp_enable = VAR_11->sctp.prsctp_enable;
 VAR_8->reconf_enable = VAR_11->sctp.reconf_enable;
 VAR_8->ecn_enable = VAR_11->sctp.ecn_enable;


 VAR_8->base.sk = VAR_9;
 FUNC_13(VAR_8->base.sk);

 return VAR_8;

nomem_shkey:
 FUNC_7(VAR_8);
nomem:
 FUNC_2(VAR_8->digest);
 return ((void*)0);

}
