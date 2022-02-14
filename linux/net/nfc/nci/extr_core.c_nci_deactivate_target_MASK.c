
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_target {int dummy; } ;
struct nfc_dev {int dummy; } ;
struct nci_dev {int state; scalar_t__ target_active_prot; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nci_dev*,int ,int ,int ) ;
 int VAR_4 ;
 struct nci_dev* FUNC_3 (struct nfc_dev*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(struct nfc_dev *VAR_5,
      struct nfc_target *VAR_6,
      __u8 VAR_7)
{
 struct nci_dev *VAR_8 = FUNC_3(VAR_5);
 u8 VAR_9 = VAR_0;

 FUNC_4("entry\n");

 if (!VAR_8->target_active_prot) {
  FUNC_5("unable to deactivate target, no active target\n");
  return;
 }

 VAR_8->target_active_prot = 0;

 switch (VAR_7) {
 case 128:
  VAR_9 = VAR_1;
  break;
 }

 if (FUNC_0(&VAR_8->state) == VAR_2) {
  FUNC_2(VAR_8, VAR_4, VAR_9,
       FUNC_1(VAR_3));
 }
}
