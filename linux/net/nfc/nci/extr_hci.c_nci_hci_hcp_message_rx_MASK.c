
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nci_dev {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nci_dev*,int,int,struct sk_buff*) ;
 int FUNC_2 (struct nci_dev*,int,int,struct sk_buff*) ;
 int FUNC_3 (struct nci_dev*,int,int,struct sk_buff*) ;
 int FUNC_4 (struct nci_dev*,int ) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static void FUNC_6(struct nci_dev *VAR_1, u8 VAR_2,
       u8 VAR_3, u8 VAR_4, struct sk_buff *VAR_5)
{
 switch (VAR_3) {
 case 128:
  FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5);
  break;
 case 130:
  FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5);
  break;
 case 129:
  FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5);
  break;
 default:
  FUNC_5("UNKNOWN MSG Type %d, instruction=%d\n",
         VAR_3, VAR_4);
  FUNC_0(VAR_5);
  break;
 }

 FUNC_4(VAR_1, VAR_0);
}
