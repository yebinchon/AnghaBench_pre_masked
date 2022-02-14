
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct l2tp_session {int dummy; } ;
struct genl_info {int snd_portid; int snd_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct genl_info*) ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 struct l2tp_session* FUNC_2 (struct genl_info*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int ,struct l2tp_session*,int ) ;
 int FUNC_4 (struct l2tp_session*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 struct l2tp_session *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto err;
 }

 VAR_8 = FUNC_6(VAR_4, VAR_2);
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto err_ref;
 }

 VAR_9 = FUNC_3(VAR_8, VAR_6->snd_portid, VAR_6->snd_seq,
       0, VAR_7, VAR_3);
 if (VAR_9 < 0)
  goto err_ref_msg;

 VAR_9 = FUNC_1(FUNC_0(VAR_6), VAR_8, VAR_6->snd_portid);

 FUNC_4(VAR_7);

 return VAR_9;

err_ref_msg:
 FUNC_5(VAR_8);
err_ref:
 FUNC_4(VAR_7);
err:
 return VAR_9;
}
