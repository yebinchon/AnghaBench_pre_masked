
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sock {int dummy; } ;
struct mgmt_rp_read_ext_info {void* eir_len; int eir; void* current_settings; void* supported_settings; void* manufacturer; int version; int bdaddr; } ;
struct hci_dev {int id; scalar_t__ manufacturer; int hci_ver; int bdaddr; int name; } ;
typedef int buf ;


 int FUNC_0 (char*,struct sock*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (int *,int *) ;
 void* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct hci_dev*) ;
 int FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (char**,int ,int) ;
 int FUNC_12 (struct sock*,int ,int ,int ,struct mgmt_rp_read_ext_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_4, struct hci_dev *VAR_5,
        void *VAR_6, u16 VAR_7)
{
 char VAR_8[512];
 struct mgmt_rp_read_ext_info *VAR_9 = (void *)VAR_8;
 u16 VAR_10;

 FUNC_0("sock %p %s", VAR_4, VAR_5->name);

 FUNC_11(&VAR_8, 0, sizeof(VAR_8));

 FUNC_7(VAR_5);

 FUNC_2(&VAR_9->bdaddr, &VAR_5->bdaddr);

 VAR_9->version = VAR_5->hci_ver;
 VAR_9->manufacturer = FUNC_3(VAR_5->manufacturer);

 VAR_9->supported_settings = FUNC_4(FUNC_6(VAR_5));
 VAR_9->current_settings = FUNC_4(FUNC_5(VAR_5));


 VAR_10 = FUNC_1(VAR_5, VAR_9->eir);
 VAR_9->eir_len = FUNC_3(VAR_10);

 FUNC_8(VAR_5);






 FUNC_10(VAR_4, VAR_1);
 FUNC_9(VAR_4, VAR_0);
 FUNC_9(VAR_4, VAR_2);

 return FUNC_12(VAR_4, VAR_5->id, VAR_3, 0, VAR_9,
     sizeof(*VAR_9) + VAR_10);
}
