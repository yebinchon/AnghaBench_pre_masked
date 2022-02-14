
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {int dummy; } ;
struct nci_rf_discover_param {int im_protocols; int tm_protocols; } ;
struct nci_dev {int poll_prots; int state; scalar_t__ target_active_prot; } ;
typedef int __u32 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nci_dev*,int ,unsigned long,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct nfc_dev*) ;
 int FUNC_4 (struct nfc_dev*) ;
 struct nci_dev* FUNC_5 (struct nfc_dev*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct nfc_dev *VAR_11,
     __u32 VAR_12, __u32 VAR_13)
{
 struct nci_dev *VAR_14 = FUNC_5(VAR_11);
 struct nci_rf_discover_param VAR_15;
 int VAR_16;

 if ((FUNC_0(&VAR_14->state) == VAR_2) ||
     (FUNC_0(&VAR_14->state) == VAR_6)) {
  FUNC_7("unable to start poll, since poll is already active\n");
  return -VAR_0;
 }

 if (VAR_14->target_active_prot) {
  FUNC_7("there is an active target\n");
  return -VAR_0;
 }

 if ((FUNC_0(&VAR_14->state) == VAR_7) ||
     (FUNC_0(&VAR_14->state) == VAR_3)) {
  FUNC_6("target active or w4 select, implicitly deactivate\n");

  VAR_16 = FUNC_2(VAR_14, VAR_9,
     VAR_1,
     FUNC_1(VAR_4));
  if (VAR_16)
   return -VAR_0;
 }

 if ((VAR_12 | VAR_13) & VAR_8) {
  VAR_16 = FUNC_4(VAR_11);
  if (VAR_16) {
   FUNC_7("failed to set local general bytes\n");
   return VAR_16;
  }
 }

 if (VAR_13 & VAR_8) {
  VAR_16 = FUNC_3(VAR_11);
  if (VAR_16)
   FUNC_7("failed to set listen parameters\n");
 }

 VAR_15.im_protocols = VAR_12;
 VAR_15.tm_protocols = VAR_13;
 VAR_16 = FUNC_2(VAR_14, VAR_10, (unsigned long)&VAR_15,
    FUNC_1(VAR_5));

 if (!VAR_16)
  VAR_14->poll_prots = VAR_12;

 return VAR_16;
}
