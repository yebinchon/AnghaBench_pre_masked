
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; int * attrs; struct batadv_priv** user_ptr; } ;
struct batadv_priv {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct batadv_priv*,int *,int ,int *) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct genl_info*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct batadv_priv *VAR_11 = VAR_10->user_ptr[0];
 struct sk_buff *VAR_12 = ((void*)0);
 u32 VAR_13;
 void *VAR_14;
 u32 VAR_15;
 u8 *VAR_16;
 int VAR_17;

 if (!VAR_10->attrs[VAR_0])
  return -VAR_3;

 if (!VAR_10->attrs[VAR_1])
  return -VAR_3;

 VAR_16 = FUNC_5(VAR_10->attrs[VAR_0]);

 VAR_13 = FUNC_6(VAR_10->attrs[VAR_1]);

 VAR_12 = FUNC_8(VAR_7, VAR_6);
 if (!VAR_12) {
  VAR_17 = -VAR_5;
  goto out;
 }

 VAR_14 = FUNC_3(VAR_12, VAR_10->snd_portid, VAR_10->snd_seq,
          &VAR_8, 0,
          VAR_2);
 if (!VAR_14) {
  VAR_17 = -VAR_4;
  goto out;
 }

 FUNC_1(VAR_11, VAR_16, VAR_13, &VAR_15);

 VAR_17 = FUNC_0(VAR_12, VAR_15);

 out:
 if (VAR_17) {
  if (VAR_12)
   FUNC_7(VAR_12);
  return VAR_17;
 }

 FUNC_2(VAR_12, VAR_14);
 return FUNC_4(VAR_12, VAR_10);
}
