
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
 int VAR_2 ;
 int FUNC_3 (struct sk_buff*) ;
 struct datapath* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct datapath*,int ) ;
 struct sk_buff* FUNC_6 () ;
 int FUNC_7 (struct datapath*,struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *,struct sk_buff*,struct genl_info*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct sk_buff *VAR_5;
 struct datapath *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_6();
 if (!VAR_5)
  return -VAR_0;

 FUNC_8();
 VAR_6 = FUNC_4(FUNC_11(VAR_3->sk), VAR_4->userhdr, VAR_4->attrs);
 VAR_7 = FUNC_2(VAR_6);
 if (FUNC_1(VAR_6))
  goto err_unlock_free;

 VAR_7 = FUNC_5(VAR_6, VAR_4->attrs);
 if (VAR_7)
  goto err_unlock_free;

 VAR_7 = FUNC_7(VAR_6, VAR_5, VAR_4->snd_portid,
       VAR_4->snd_seq, 0, VAR_1);
 FUNC_0(VAR_7 < 0);

 FUNC_10();
 FUNC_9(&VAR_2, VAR_5, VAR_4);

 return 0;

err_unlock_free:
 FUNC_10();
 FUNC_3(VAR_5);
 return VAR_7;
}
