
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sock {int dummy; } ;
struct mgmt_cp_set_appearance {int appearance; } ;
struct hci_dev {scalar_t__ appearance; int id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*,struct sock*) ;
 int FUNC_3 (struct hci_dev*) ;
 scalar_t__ FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct sock*,int ,int ,int ,int *,int ) ;
 int FUNC_9 (struct sock*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_4, struct hci_dev *VAR_5, void *VAR_6,
     u16 VAR_7)
{
 struct mgmt_cp_set_appearance *VAR_8 = VAR_6;
 u16 VAR_9;
 int VAR_10;

 FUNC_0("");

 if (!FUNC_7(VAR_5))
  return FUNC_9(VAR_4, VAR_5->id, VAR_2,
           VAR_3);

 VAR_9 = FUNC_6(VAR_8->appearance);

 FUNC_3(VAR_5);

 if (VAR_5->appearance != VAR_9) {
  VAR_5->appearance = VAR_9;

  if (FUNC_4(VAR_5, VAR_0))
   FUNC_1(VAR_5, VAR_1);

  FUNC_2(VAR_5, VAR_4);
 }

 VAR_10 = FUNC_8(VAR_4, VAR_5->id, VAR_2, 0, ((void*)0),
    0);

 FUNC_5(VAR_5);

 return VAR_10;
}
