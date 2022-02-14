
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct hci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*,struct sock*) ;
 int FUNC_6 (struct sock*,int ,struct hci_dev*) ;

__attribute__((used)) static int FUNC_7(struct hci_dev *VAR_3,
        struct sock *VAR_4, u8 VAR_5)
{
 bool VAR_6 = 0;
 int VAR_7;

 if (!!VAR_5 != FUNC_2(VAR_3, VAR_0))
  VAR_6 = 1;

 if (VAR_5) {
  FUNC_1(VAR_3, VAR_0);
 } else {
  FUNC_0(VAR_3, VAR_0);
  FUNC_0(VAR_3, VAR_1);
 }

 VAR_7 = FUNC_6(VAR_4, VAR_2, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6) {
  FUNC_3(VAR_3);
  FUNC_4(VAR_3);
  return FUNC_5(VAR_3, VAR_4);
 }

 return 0;
}
