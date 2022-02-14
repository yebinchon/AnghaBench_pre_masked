
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_rp_read_config_info {int missing_options; int supported_options; int manufacturer; } ;
struct hci_dev {int id; scalar_t__ set_bdaddr; int quirks; int manufacturer; int name; } ;
typedef int rp ;


 int FUNC_0 (char*,struct sock*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct mgmt_rp_read_config_info*,int ,int) ;
 int FUNC_7 (struct sock*,int ,int ,int ,struct mgmt_rp_read_config_info*,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_4, struct hci_dev *VAR_5,
       void *VAR_6, u16 VAR_7)
{
 struct mgmt_rp_read_config_info VAR_8;
 u32 VAR_9 = 0;

 FUNC_0("sock %p %s", VAR_4, VAR_5->name);

 FUNC_4(VAR_5);

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.manufacturer = FUNC_1(VAR_5->manufacturer);

 if (FUNC_8(VAR_0, &VAR_5->quirks))
  VAR_9 |= VAR_1;

 if (VAR_5->set_bdaddr)
  VAR_9 |= VAR_2;

 VAR_8.supported_options = FUNC_2(VAR_9);
 VAR_8.missing_options = FUNC_3(VAR_5);

 FUNC_5(VAR_5);

 return FUNC_7(VAR_4, VAR_5->id, VAR_3, 0,
     &VAR_8, sizeof(VAR_8));
}
