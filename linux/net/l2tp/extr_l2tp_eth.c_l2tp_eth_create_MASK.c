
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int name; int max_mtu; scalar_t__ min_mtu; } ;
struct net {int dummy; } ;
struct l2tp_tunnel {int dummy; } ;
struct l2tp_session_cfg {int ifname; } ;
struct l2tp_session {char* ifname; int show; int session_close; int recv_skb; } ;
struct l2tp_eth_sess {int dev; } ;
struct l2tp_eth {struct l2tp_session* session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct l2tp_session*) ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_2 (struct l2tp_session*) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 struct net_device* FUNC_4 (int,char*,unsigned char,int ) ;
 int FUNC_5 (struct net_device*,struct net*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct l2tp_session*) ;
 int FUNC_8 (struct l2tp_tunnel*,struct l2tp_session*,struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct l2tp_session* FUNC_9 (int,struct l2tp_tunnel*,int ,int ,struct l2tp_session_cfg*) ;
 int FUNC_10 (struct l2tp_session*) ;
 int FUNC_11 (struct l2tp_session*) ;
 int FUNC_12 (struct l2tp_session*) ;
 struct l2tp_eth_sess* FUNC_13 (struct l2tp_session*) ;
 int FUNC_14 (struct l2tp_session*,struct l2tp_tunnel*) ;
 struct l2tp_eth* FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,struct net_device*) ;
 int FUNC_17 (struct net_device*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (char*,int ,int) ;

__attribute__((used)) static int FUNC_22(struct net *VAR_12, struct l2tp_tunnel *VAR_13,
      u32 VAR_14, u32 VAR_15,
      struct l2tp_session_cfg *VAR_16)
{
 unsigned char VAR_17;
 struct net_device *VAR_18;
 char VAR_19[VAR_3];
 struct l2tp_session *VAR_20;
 struct l2tp_eth *VAR_21;
 struct l2tp_eth_sess *VAR_22;
 int VAR_23;

 if (VAR_16->ifname) {
  FUNC_21(VAR_19, VAR_16->ifname, VAR_3);
  VAR_17 = VAR_6;
 } else {
  FUNC_20(VAR_19, VAR_4);
  VAR_17 = VAR_5;
 }

 VAR_20 = FUNC_9(sizeof(*VAR_22), VAR_13, VAR_14,
          VAR_15, VAR_16);
 if (FUNC_1(VAR_20)) {
  VAR_23 = FUNC_2(VAR_20);
  goto err;
 }

 VAR_18 = FUNC_4(sizeof(*VAR_21), VAR_19, VAR_17,
      VAR_10);
 if (!VAR_18) {
  VAR_23 = -VAR_1;
  goto err_sess;
 }

 FUNC_5(VAR_18, VAR_12);
 VAR_18->min_mtu = 0;
 VAR_18->max_mtu = VAR_2;
 FUNC_8(VAR_13, VAR_20, VAR_18);

 VAR_21 = FUNC_15(VAR_18);
 VAR_21->session = VAR_20;

 VAR_20->recv_skb = VAR_9;
 VAR_20->session_close = VAR_8;
 if (FUNC_0(VAR_0))
  VAR_20->show = VAR_11;

 VAR_22 = FUNC_13(VAR_20);

 FUNC_12(VAR_20);

 FUNC_18();





 VAR_23 = FUNC_14(VAR_20, VAR_13);
 if (VAR_23 < 0) {
  FUNC_19();
  goto err_sess_dev;
 }

 VAR_23 = FUNC_17(VAR_18);
 if (VAR_23 < 0) {
  FUNC_19();
  FUNC_11(VAR_20);
  FUNC_10(VAR_20);
  FUNC_6(VAR_18);

  return VAR_23;
 }

 FUNC_21(VAR_20->ifname, VAR_18->name, VAR_3);
 FUNC_16(VAR_22->dev, VAR_18);

 FUNC_19();

 FUNC_10(VAR_20);

 FUNC_3(VAR_7);

 return 0;

err_sess_dev:
 FUNC_10(VAR_20);
 FUNC_6(VAR_18);
err_sess:
 FUNC_7(VAR_20);
err:
 return VAR_23;
}
