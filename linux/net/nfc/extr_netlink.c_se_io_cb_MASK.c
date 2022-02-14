
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct se_io_ctx {int se_idx; int dev_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_3 (struct se_io_ctx*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,size_t,int *) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_7, u8 *VAR_8, size_t VAR_9, int VAR_10)
{
 struct se_io_ctx *VAR_11 = VAR_7;
 struct sk_buff *VAR_12;
 void *VAR_13;

 VAR_12 = FUNC_7(VAR_5, VAR_0);
 if (!VAR_12) {
  FUNC_3(VAR_11);
  return;
 }

 VAR_13 = FUNC_2(VAR_12, 0, 0, &VAR_6, 0,
     VAR_4);
 if (!VAR_13)
  goto free_msg;

 if (FUNC_5(VAR_12, VAR_1, VAR_11->dev_idx) ||
     FUNC_5(VAR_12, VAR_3, VAR_11->se_idx) ||
     FUNC_4(VAR_12, VAR_2, VAR_9, VAR_8))
  goto nla_put_failure;

 FUNC_0(VAR_12, VAR_13);

 FUNC_1(&VAR_6, VAR_12, 0, 0, VAR_0);

 FUNC_3(VAR_11);

 return;

nla_put_failure:
free_msg:
 FUNC_6(VAR_12);
 FUNC_3(VAR_11);

 return;
}
