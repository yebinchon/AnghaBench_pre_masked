
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int snd_portid; int snd_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (int ,struct sk_buff*,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct sk_buff *VAR_9;
 void *VAR_10;
 int VAR_11 = -VAR_1;

 VAR_9 = FUNC_5(VAR_5, VAR_3);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  goto out;
 }

 VAR_10 = FUNC_2(VAR_9, VAR_8->snd_portid, VAR_8->snd_seq,
     &VAR_6, 0, VAR_4);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto err_out;
 }

 FUNC_1(VAR_9, VAR_10);

 return FUNC_3(FUNC_0(VAR_8), VAR_9, VAR_8->snd_portid);

err_out:
 FUNC_4(VAR_9);

out:
 return VAR_11;
}
