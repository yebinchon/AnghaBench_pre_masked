
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; } ;
struct psample_group {int net; int seq; int group_num; } ;
struct nlattr {int nla_len; int nla_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct sk_buff*,int ,int) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (char*) ;
 int VAR_13 ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ,int) ;
 struct nlattr* FUNC_13 (struct sk_buff*,int) ;
 scalar_t__ FUNC_14 (int) ;

void FUNC_15(struct psample_group *VAR_14, struct sk_buff *VAR_15,
      u32 VAR_16, int VAR_17, int VAR_18,
      u32 VAR_19)
{
 struct sk_buff *VAR_20;
 int VAR_21;
 int VAR_22;
 void *VAR_23;
 int VAR_24;

 VAR_22 = (VAR_17 ? FUNC_9(sizeof(u16)) : 0) +
     (VAR_18 ? FUNC_9(sizeof(u16)) : 0) +
     FUNC_9(sizeof(u32)) +
     FUNC_9(sizeof(u32)) +
     FUNC_9(sizeof(u32)) +
     FUNC_9(sizeof(u32));

 VAR_21 = FUNC_4(VAR_15->len, VAR_16);
 if (VAR_22 + FUNC_9(VAR_21) > VAR_11)
  VAR_21 = VAR_11 - VAR_22 - VAR_2
       - VAR_1;

 VAR_20 = FUNC_2(VAR_22 + VAR_21, VAR_0);
 if (FUNC_14(!VAR_20))
  return;

 VAR_23 = FUNC_3(VAR_20, 0, 0, &VAR_13, 0,
      VAR_10);
 if (FUNC_14(!VAR_23))
  goto error;

 if (VAR_17) {
  VAR_24 = FUNC_7(VAR_20, VAR_5, VAR_17);
  if (FUNC_14(VAR_24 < 0))
   goto error;
 }

 if (VAR_18) {
  VAR_24 = FUNC_7(VAR_20, VAR_6, VAR_18);
  if (FUNC_14(VAR_24 < 0))
   goto error;
 }

 VAR_24 = FUNC_8(VAR_20, VAR_9, VAR_19);
 if (FUNC_14(VAR_24 < 0))
  goto error;

 VAR_24 = FUNC_8(VAR_20, VAR_7, VAR_15->len);
 if (FUNC_14(VAR_24 < 0))
  goto error;

 VAR_24 = FUNC_8(VAR_20, VAR_8, VAR_14->group_num);
 if (FUNC_14(VAR_24 < 0))
  goto error;

 VAR_24 = FUNC_8(VAR_20, VAR_4, VAR_14->seq++);
 if (FUNC_14(VAR_24 < 0))
  goto error;

 if (VAR_21) {
  int VAR_25 = FUNC_9(VAR_21);
  struct nlattr *VAR_26;

  VAR_26 = FUNC_13(VAR_20, VAR_25);
  VAR_26->nla_type = VAR_3;
  VAR_26->nla_len = FUNC_5(VAR_21);

  if (FUNC_12(VAR_15, 0, FUNC_6(VAR_26), VAR_21))
   goto error;
 }

 FUNC_0(VAR_20, VAR_23);
 FUNC_1(&VAR_13, VAR_14->net, VAR_20, 0,
    VAR_12, VAR_0);

 return;
error:
 FUNC_11("Could not create psample log message\n");
 FUNC_10(VAR_20);
}
