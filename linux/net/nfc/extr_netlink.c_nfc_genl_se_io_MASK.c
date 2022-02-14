
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct sk_buff {int dummy; } ;
struct se_io_ctx {void* se_idx; void* dev_idx; } ;
struct nfc_dev {TYPE_1__* ops; } ;
struct genl_info {int * attrs; } ;
struct TYPE_2__ {int se_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 struct se_io_ctx* FUNC_0 (int,int ) ;
 struct nfc_dev* FUNC_1 (void*) ;
 int FUNC_2 (struct nfc_dev*,void*,int *,size_t,int ,struct se_io_ctx*) ;
 int * FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct nfc_dev *VAR_11;
 struct se_io_ctx *VAR_12;
 u32 VAR_13, VAR_14;
 u8 *VAR_15;
 size_t VAR_16;

 if (!VAR_10->attrs[VAR_5] ||
     !VAR_10->attrs[VAR_7] ||
     !VAR_10->attrs[VAR_6])
  return -VAR_0;

 VAR_13 = FUNC_4(VAR_10->attrs[VAR_5]);
 VAR_14 = FUNC_4(VAR_10->attrs[VAR_7]);

 VAR_11 = FUNC_1(VAR_13);
 if (!VAR_11)
  return -VAR_1;

 if (!VAR_11->ops || !VAR_11->ops->se_io)
  return -VAR_3;

 VAR_16 = FUNC_5(VAR_10->attrs[VAR_6]);
 if (VAR_16 == 0)
  return -VAR_0;

 VAR_15 = FUNC_3(VAR_10->attrs[VAR_6]);
 if (!VAR_15)
  return -VAR_0;

 VAR_12 = FUNC_0(sizeof(struct se_io_ctx), VAR_4);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->dev_idx = VAR_13;
 VAR_12->se_idx = VAR_14;

 return FUNC_2(VAR_11, VAR_14, VAR_15, VAR_16, VAR_8, VAR_12);
}
