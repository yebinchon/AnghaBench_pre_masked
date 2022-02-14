
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_dev {int rf_mode; int dev_up; int supported_protocols; int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfc_dev*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct nfc_dev *VAR_5, struct sk_buff *VAR_6)
{
 if (FUNC_1(VAR_6, VAR_1, FUNC_0(VAR_5)) ||
     FUNC_2(VAR_6, VAR_0, VAR_5->idx) ||
     FUNC_2(VAR_6, VAR_3, VAR_5->supported_protocols) ||
     FUNC_3(VAR_6, VAR_2, VAR_5->dev_up) ||
     FUNC_3(VAR_6, VAR_4, VAR_5->rf_mode))
  return -1;
 return 0;
}
