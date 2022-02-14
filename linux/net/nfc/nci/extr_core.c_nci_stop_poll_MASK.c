
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {int dummy; } ;
struct nci_dev {int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nci_dev*,int ,int ,int ) ;
 int VAR_4 ;
 struct nci_dev* FUNC_3 (struct nfc_dev*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct nfc_dev *VAR_5)
{
 struct nci_dev *VAR_6 = FUNC_3(VAR_5);

 if ((FUNC_0(&VAR_6->state) != VAR_1) &&
     (FUNC_0(&VAR_6->state) != VAR_3)) {
  FUNC_4("unable to stop poll, since poll is not active\n");
  return;
 }

 FUNC_2(VAR_6, VAR_4, VAR_0,
      FUNC_1(VAR_2));
}
