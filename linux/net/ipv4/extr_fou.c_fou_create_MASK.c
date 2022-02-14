
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tunnel_cfg ;
struct udp_tunnel_sock_cfg {int encap_type; int gro_complete; int gro_receive; int encap_rcv; int * encap_destroy; struct fou* sk_user_data; } ;
struct socket {struct sock* sk; } ;
struct sock {int sk_allocation; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int family; int local_udp_port; } ;
struct fou_cfg {int type; int protocol; int flags; TYPE_1__ udp_config; } ;
struct fou {int type; int protocol; struct socket* sock; int flags; int family; int port; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net*,struct fou*,struct fou_cfg*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct fou*) ;
 struct fou* FUNC_2 (int,int ) ;
 int FUNC_3 (struct udp_tunnel_sock_cfg*,int ,int) ;
 int FUNC_4 (struct net*,struct socket*,struct udp_tunnel_sock_cfg*) ;
 int FUNC_5 (struct net*,TYPE_1__*,struct socket**) ;
 int FUNC_6 (struct socket*) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_10, struct fou_cfg *VAR_11,
        struct socket **VAR_12)
{
 struct socket *VAR_13 = ((void*)0);
 struct fou *VAR_14 = ((void*)0);
 struct sock *VAR_15;
 struct udp_tunnel_sock_cfg VAR_16;
 int VAR_17;


 VAR_17 = FUNC_5(VAR_10, &VAR_11->udp_config, &VAR_13);
 if (VAR_17 < 0)
  goto error;


 VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_3);
 if (!VAR_14) {
  VAR_17 = -VAR_1;
  goto error;
 }

 VAR_15 = VAR_13->sk;

 VAR_14->port = VAR_11->udp_config.local_udp_port;
 VAR_14->family = VAR_11->udp_config.family;
 VAR_14->flags = VAR_11->flags;
 VAR_14->type = VAR_11->type;
 VAR_14->sock = VAR_13;

 FUNC_3(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.encap_type = 1;
 VAR_16.sk_user_data = VAR_14;
 VAR_16.encap_destroy = ((void*)0);


 switch (VAR_11->type) {
 case 129:
  VAR_16.encap_rcv = VAR_6;
  VAR_16.gro_receive = VAR_5;
  VAR_16.gro_complete = VAR_4;
  VAR_14->protocol = VAR_11->protocol;
  break;
 case 128:
  VAR_16.encap_rcv = VAR_9;
  VAR_16.gro_receive = VAR_8;
  VAR_16.gro_complete = VAR_7;
  break;
 default:
  VAR_17 = -VAR_0;
  goto error;
 }

 FUNC_4(VAR_10, VAR_13, &VAR_16);

 VAR_15->sk_allocation = VAR_2;

 VAR_17 = FUNC_0(VAR_10, VAR_14, VAR_11);
 if (VAR_17)
  goto error;

 if (VAR_12)
  *VAR_12 = VAR_13;

 return 0;

error:
 FUNC_1(VAR_14);
 if (VAR_13)
  FUNC_6(VAR_13);

 return VAR_17;
}
