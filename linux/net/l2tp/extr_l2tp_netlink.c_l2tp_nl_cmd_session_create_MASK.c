
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct l2tp_tunnel {int version; } ;
struct l2tp_session_cfg {size_t pw_type; scalar_t__ l2specific_type; int cookie_len; int peer_cookie_len; int reorder_timeout; void* lns_mode; void* send_seq; void* recv_seq; void* debug; int ifname; int * peer_cookie; int * cookie; int member_0; } ;
struct l2tp_session {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_2__ {int (* session_create ) (struct net*,struct l2tp_tunnel*,void*,void*,struct l2tp_session_cfg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 struct net* FUNC_0 (struct genl_info*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__** VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct l2tp_session*) ;
 int FUNC_4 (int *,struct genl_info*,struct l2tp_session*,int ) ;
 int FUNC_5 (struct l2tp_tunnel*) ;
 struct l2tp_tunnel* FUNC_6 (struct net*,void*) ;
 struct l2tp_session* FUNC_7 (struct l2tp_tunnel*,void*) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 size_t FUNC_11 (scalar_t__) ;
 void* FUNC_12 (scalar_t__) ;
 void* FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (char*,size_t) ;
 int FUNC_16 (struct net*,struct l2tp_tunnel*,void*,void*,struct l2tp_session_cfg*) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_23, struct genl_info *VAR_24)
{
 u32 VAR_25 = 0;
 u32 VAR_26;
 u32 VAR_27;
 int VAR_28 = 0;
 struct l2tp_tunnel *VAR_29;
 struct l2tp_session *VAR_30;
 struct l2tp_session_cfg VAR_31 = { 0, };
 struct net *VAR_32 = FUNC_0(VAR_24);

 if (!VAR_24->attrs[VAR_3]) {
  VAR_28 = -VAR_0;
  goto out;
 }

 VAR_25 = FUNC_12(VAR_24->attrs[VAR_3]);
 VAR_29 = FUNC_6(VAR_32, VAR_25);
 if (!VAR_29) {
  VAR_28 = -VAR_1;
  goto out;
 }

 if (!VAR_24->attrs[VAR_15]) {
  VAR_28 = -VAR_0;
  goto out_tunnel;
 }
 VAR_26 = FUNC_12(VAR_24->attrs[VAR_15]);

 if (!VAR_24->attrs[VAR_10]) {
  VAR_28 = -VAR_0;
  goto out_tunnel;
 }
 VAR_27 = FUNC_12(VAR_24->attrs[VAR_10]);

 if (!VAR_24->attrs[VAR_11]) {
  VAR_28 = -VAR_0;
  goto out_tunnel;
 }
 VAR_31.pw_type = FUNC_11(VAR_24->attrs[VAR_11]);
 if (VAR_31.pw_type >= VAR_20) {
  VAR_28 = -VAR_0;
  goto out_tunnel;
 }


 if (VAR_29->version == 2 && VAR_31.pw_type != VAR_19) {
  VAR_28 = -VAR_2;
  goto out_tunnel;
 }

 if (VAR_29->version > 2) {
  if (VAR_24->attrs[VAR_7]) {
   VAR_31.l2specific_type = FUNC_13(VAR_24->attrs[VAR_7]);
   if (VAR_31.l2specific_type != VAR_17 &&
       VAR_31.l2specific_type != VAR_18) {
    VAR_28 = -VAR_0;
    goto out_tunnel;
   }
  } else {
   VAR_31.l2specific_type = VAR_17;
  }

  if (VAR_24->attrs[VAR_4]) {
   u16 VAR_33 = FUNC_14(VAR_24->attrs[VAR_4]);
   if (VAR_33 > 8) {
    VAR_28 = -VAR_0;
    goto out_tunnel;
   }
   VAR_31.cookie_len = VAR_33;
   FUNC_8(&VAR_31.cookie[0], FUNC_9(VAR_24->attrs[VAR_4]), VAR_33);
  }
  if (VAR_24->attrs[VAR_9]) {
   u16 VAR_34 = FUNC_14(VAR_24->attrs[VAR_9]);
   if (VAR_34 > 8) {
    VAR_28 = -VAR_0;
    goto out_tunnel;
   }
   VAR_31.peer_cookie_len = VAR_34;
   FUNC_8(&VAR_31.peer_cookie[0], FUNC_9(VAR_24->attrs[VAR_9]), VAR_34);
  }
  if (VAR_24->attrs[VAR_6])
   VAR_31.ifname = FUNC_9(VAR_24->attrs[VAR_6]);
 }

 if (VAR_24->attrs[VAR_5])
  VAR_31.debug = FUNC_12(VAR_24->attrs[VAR_5]);

 if (VAR_24->attrs[VAR_12])
  VAR_31.recv_seq = FUNC_13(VAR_24->attrs[VAR_12]);

 if (VAR_24->attrs[VAR_14])
  VAR_31.send_seq = FUNC_13(VAR_24->attrs[VAR_14]);

 if (VAR_24->attrs[VAR_8])
  VAR_31.lns_mode = FUNC_13(VAR_24->attrs[VAR_8]);

 if (VAR_24->attrs[VAR_13])
  VAR_31.reorder_timeout = FUNC_10(VAR_24->attrs[VAR_13]);
 if ((VAR_21[VAR_31.pw_type] == ((void*)0)) ||
     (VAR_21[VAR_31.pw_type]->session_create == ((void*)0))) {
  VAR_28 = -VAR_2;
  goto out_tunnel;
 }

 VAR_28 = VAR_21[VAR_31.pw_type]->session_create(VAR_32, VAR_29,
          VAR_26,
          VAR_27,
          &VAR_31);

 if (VAR_28 >= 0) {
  VAR_30 = FUNC_7(VAR_29, VAR_26);
  if (VAR_30) {
   VAR_28 = FUNC_4(&VAR_22, VAR_24, VAR_30,
        VAR_16);
   FUNC_3(VAR_30);
  }
 }

out_tunnel:
 FUNC_5(VAR_29);
out:
 return VAR_28;
}
