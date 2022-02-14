
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef void* u32 ;
struct sk_buff {int dummy; } ;
struct nfc_dev {int dummy; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nfc_dev*,int,scalar_t__) ;
 struct nfc_dev* FUNC_1 (void*) ;
 int FUNC_2 (struct nfc_dev*) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 struct nfc_dev *VAR_10;
 int VAR_11, VAR_12;
 u32 VAR_13;
 u8 VAR_14;

 FUNC_5("DEP link up\n");

 if (!VAR_9->attrs[VAR_3] ||
     !VAR_9->attrs[VAR_2])
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_9->attrs[VAR_3]);
 if (!VAR_9->attrs[VAR_4])
  VAR_12 = VAR_7;
 else
  VAR_12 = FUNC_3(VAR_9->attrs[VAR_4]);

 VAR_14 = FUNC_4(VAR_9->attrs[VAR_2]);

 if (VAR_14 != VAR_5 && VAR_14 != VAR_6)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_13);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_0(VAR_10, VAR_12, VAR_14);

 FUNC_2(VAR_10);

 return VAR_11;
}
