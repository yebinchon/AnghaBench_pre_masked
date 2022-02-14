
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sock {int dummy; } ;
struct mgmt_rp_get_adv_size_info {int instance; void* max_scan_rsp_len; void* max_adv_data_len; int flags; } ;
struct mgmt_cp_get_adv_size_info {int instance; int flags; } ;
struct hci_dev {int id; int name; } ;
typedef int rp ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct sock*,int ,int ,int ,struct mgmt_rp_get_adv_size_info*,int) ;
 int FUNC_5 (struct sock*,int ,int ,int ) ;
 void* FUNC_6 (struct hci_dev*,int,int) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_5, struct hci_dev *VAR_6,
        void *VAR_7, u16 VAR_8)
{
 struct mgmt_cp_get_adv_size_info *VAR_9 = VAR_7;
 struct mgmt_rp_get_adv_size_info VAR_10;
 u32 VAR_11, VAR_12;
 int VAR_13;

 FUNC_0("%s", VAR_6->name);

 if (!FUNC_3(VAR_6))
  return FUNC_5(VAR_5, VAR_6->id, VAR_1,
           VAR_3);

 if (VAR_9->instance < 1 || VAR_9->instance > VAR_0)
  return FUNC_5(VAR_5, VAR_6->id, VAR_1,
           VAR_2);

 VAR_11 = FUNC_1(VAR_9->flags);




 VAR_12 = FUNC_2(VAR_6);
 if (VAR_11 & ~VAR_12)
  return FUNC_5(VAR_5, VAR_6->id, VAR_1,
           VAR_2);

 VAR_10.instance = VAR_9->instance;
 VAR_10.flags = VAR_9->flags;
 VAR_10.max_adv_data_len = FUNC_6(VAR_6, VAR_11, 1);
 VAR_10.max_scan_rsp_len = FUNC_6(VAR_6, VAR_11, 0);

 VAR_13 = FUNC_4(VAR_5, VAR_6->id, VAR_1,
    VAR_4, &VAR_10, sizeof(VAR_10));

 return VAR_13;
}
