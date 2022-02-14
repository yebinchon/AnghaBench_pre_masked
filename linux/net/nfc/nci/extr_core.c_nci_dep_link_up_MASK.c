
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_target {int idx; } ;
struct nfc_dev {int dummy; } ;
struct nci_dev {int remote_gb_len; int remote_gb; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfc_dev*,struct nfc_target*,int ) ;
 int FUNC_1 (struct nfc_dev*,int ,int ,int ) ;
 struct nci_dev* FUNC_2 (struct nfc_dev*) ;
 int FUNC_3 (struct nfc_dev*,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct nfc_dev *VAR_3, struct nfc_target *VAR_4,
      __u8 VAR_5, __u8 *VAR_6, size_t VAR_7)
{
 struct nci_dev *VAR_8 = FUNC_2(VAR_3);
 int VAR_9;

 FUNC_4("target_idx %d, comm_mode %d\n", VAR_4->idx, VAR_5);

 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_1);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_3, VAR_8->remote_gb,
       VAR_8->remote_gb_len);
 if (!VAR_9)
  VAR_9 = FUNC_1(VAR_3, VAR_4->idx, VAR_0,
     VAR_2);

 return VAR_9;
}
