
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nfc_vendor_cmd {scalar_t__ vendor_id; scalar_t__ subcmd; int (* doit ) (struct nfc_dev*,int *,size_t) ;} ;
struct nfc_dev {int n_vendor_cmds; struct genl_info* cur_cmd_info; struct nfc_vendor_cmd* vendor_cmds; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 struct nfc_dev* FUNC_0 (scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct nfc_dev*,int *,size_t) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_7,
          struct genl_info *VAR_8)
{
 struct nfc_dev *VAR_9;
 struct nfc_vendor_cmd *VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 u8 *VAR_14;
 size_t VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_8->attrs[VAR_3] ||
     !VAR_8->attrs[VAR_5] ||
     !VAR_8->attrs[VAR_6])
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_8->attrs[VAR_3]);
 VAR_12 = FUNC_2(VAR_8->attrs[VAR_5]);
 VAR_13 = FUNC_2(VAR_8->attrs[VAR_6]);

 VAR_9 = FUNC_0(VAR_11);
 if (!VAR_9 || !VAR_9->vendor_cmds || !VAR_9->n_vendor_cmds)
  return -VAR_1;

 if (VAR_8->attrs[VAR_4]) {
  VAR_14 = FUNC_1(VAR_8->attrs[VAR_4]);
  VAR_15 = FUNC_3(VAR_8->attrs[VAR_4]);
  if (VAR_15 == 0)
   return -VAR_0;
 } else {
  VAR_14 = ((void*)0);
  VAR_15 = 0;
 }

 for (VAR_16 = 0; VAR_16 < VAR_9->n_vendor_cmds; VAR_16++) {
  VAR_10 = &VAR_9->vendor_cmds[VAR_16];

  if (VAR_10->vendor_id != VAR_12 || VAR_10->subcmd != VAR_13)
   continue;

  VAR_9->cur_cmd_info = VAR_8;
  VAR_17 = VAR_10->doit(VAR_9, VAR_14, VAR_15);
  VAR_9->cur_cmd_info = ((void*)0);
  return VAR_17;
 }

 return -VAR_2;
}
