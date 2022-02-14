
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {scalar_t__ rf_mode; } ;
struct nci_dev {int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfc_dev*,int *,int ) ;
 int FUNC_3 (struct nci_dev*,int ,int ,int ) ;
 int VAR_5 ;
 struct nci_dev* FUNC_4 (struct nfc_dev*) ;
 int FUNC_5 (struct nfc_dev*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct nfc_dev *VAR_6)
{
 struct nci_dev *VAR_7 = FUNC_4(VAR_6);
 int VAR_8;

 FUNC_6("entry\n");

 if (VAR_6->rf_mode == VAR_4) {
  FUNC_2(VAR_6, ((void*)0), VAR_0);
 } else {
  if (FUNC_0(&VAR_7->state) == VAR_2 ||
      FUNC_0(&VAR_7->state) == VAR_1) {
   FUNC_3(VAR_7, VAR_5, 0,
    FUNC_1(VAR_3));
  }

  VAR_8 = FUNC_5(VAR_6);
  if (VAR_8)
   FUNC_7("error when signaling tm deactivation\n");
 }

 return 0;
}
