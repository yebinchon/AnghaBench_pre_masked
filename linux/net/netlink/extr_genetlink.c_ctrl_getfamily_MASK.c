
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; scalar_t__* attrs; } ;
struct genl_family {int netnsok; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_7 ;
 struct sk_buff* FUNC_2 (struct genl_family const*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 struct genl_family* FUNC_4 (int ) ;
 struct genl_family* FUNC_5 (char*) ;
 int FUNC_6 (struct genl_info*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct sk_buff*,struct genl_info*) ;
 int VAR_8 ;
 int FUNC_10 (int ,int *) ;
 char* FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*,int ,int ,char*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct sk_buff *VAR_11;
 const struct genl_family *VAR_12 = ((void*)0);
 int VAR_13 = -VAR_3;

 if (VAR_10->attrs[VAR_0]) {
  u16 VAR_14 = FUNC_12(VAR_10->attrs[VAR_0]);
  VAR_12 = FUNC_4(VAR_14);
  VAR_13 = -VAR_4;
 }

 if (VAR_10->attrs[VAR_1]) {
  char *VAR_15;

  VAR_15 = FUNC_11(VAR_10->attrs[VAR_1]);
  VAR_12 = FUNC_5(VAR_15);
  VAR_13 = -VAR_4;
 }

 if (VAR_12 == ((void*)0))
  return VAR_13;

 if (!VAR_12->netnsok && !FUNC_10(FUNC_6(VAR_10), &VAR_8)) {

  return -VAR_4;
 }

 VAR_11 = FUNC_2(VAR_12, VAR_10->snd_portid, VAR_10->snd_seq,
        VAR_2);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 return FUNC_9(VAR_11, VAR_10);
}
