
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sock {int dummy; } ;
struct mgmt_ev_ext_info_changed {int eir_len; int eir; } ;
struct hci_dev {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,struct hci_dev*,struct mgmt_ev_ext_info_changed*,scalar_t__,int ,struct sock*) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_2, struct sock *VAR_3)
{
 char VAR_4[512];
 struct mgmt_ev_ext_info_changed *VAR_5 = (void *)VAR_4;
 u16 VAR_6;

 FUNC_2(VAR_4, 0, sizeof(VAR_4));

 VAR_6 = FUNC_0(VAR_2, VAR_5->eir);
 VAR_5->eir_len = FUNC_1(VAR_6);

 return FUNC_3(VAR_1, VAR_2, VAR_5,
      sizeof(*VAR_5) + VAR_6,
      VAR_0, VAR_3);
}
