
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct genl_info {int snd_seq; int snd_portid; int attrs; int userhdr; } ;
struct datapath {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct datapath*) ;
 int VAR_1 ;
 int FUNC_2 (struct datapath*) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct datapath* FUNC_5 (int ,int ,int ) ;
 struct sk_buff* FUNC_6 () ;
 int FUNC_7 (struct datapath*,struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 struct sk_buff *VAR_4;
 struct datapath *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_6();
 if (!VAR_4)
  return -VAR_0;

 FUNC_8();
 VAR_5 = FUNC_5(FUNC_10(VAR_2->sk), VAR_3->userhdr, VAR_3->attrs);
 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_2(VAR_5);
  goto err_unlock_free;
 }
 VAR_6 = FUNC_7(VAR_5, VAR_4, VAR_3->snd_portid,
       VAR_3->snd_seq, 0, VAR_1);
 FUNC_0(VAR_6 < 0);
 FUNC_9();

 return FUNC_3(VAR_4, VAR_3);

err_unlock_free:
 FUNC_9();
 FUNC_4(VAR_4);
 return VAR_6;
}
