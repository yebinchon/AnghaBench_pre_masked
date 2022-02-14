
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct nfc_llcp_local {int miux; scalar_t__ rw; void* lto; } ;
struct nfc_dev {int dev; scalar_t__ dep_link_up; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nfc_dev* FUNC_3 (int ) ;
 struct nfc_llcp_local* FUNC_4 (struct nfc_dev*) ;
 int FUNC_5 (struct nfc_dev*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 void* FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct nfc_dev *VAR_11;
 struct nfc_llcp_local *VAR_12;
 u8 VAR_13 = 0;
 u16 VAR_14 = 0;
 u32 VAR_15;
 int VAR_16 = 0;

 if (!VAR_10->attrs[VAR_5] ||
     (!VAR_10->attrs[VAR_6] &&
      !VAR_10->attrs[VAR_8] &&
      !VAR_10->attrs[VAR_7]))
  return -VAR_1;

 if (VAR_10->attrs[VAR_8]) {
  VAR_13 = FUNC_8(VAR_10->attrs[VAR_8]);

  if (VAR_13 > VAR_4)
   return -VAR_1;
 }

 if (VAR_10->attrs[VAR_7]) {
  VAR_14 = FUNC_6(VAR_10->attrs[VAR_7]);

  if (VAR_14 > VAR_3)
   return -VAR_1;
 }

 VAR_15 = FUNC_7(VAR_10->attrs[VAR_5]);

 VAR_11 = FUNC_3(VAR_15);
 if (!VAR_11)
  return -VAR_2;

 FUNC_1(&VAR_11->dev);

 VAR_12 = FUNC_4(VAR_11);
 if (!VAR_12) {
  VAR_16 = -VAR_2;
  goto exit;
 }

 if (VAR_10->attrs[VAR_6]) {
  if (VAR_11->dep_link_up) {
   VAR_16 = -VAR_0;
   goto exit;
  }

  VAR_12->lto = FUNC_8(VAR_10->attrs[VAR_6]);
 }

 if (VAR_10->attrs[VAR_8])
  VAR_12->rw = VAR_13;

 if (VAR_10->attrs[VAR_7])
  VAR_12->miux = FUNC_0(VAR_14);

exit:
 FUNC_2(&VAR_11->dev);

 FUNC_5(VAR_11);

 return VAR_16;
}
