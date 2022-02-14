
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {scalar_t__ acl_last_tx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_4, unsigned int VAR_5)
{
 if (!FUNC_0(VAR_4, VAR_2)) {


  if (!VAR_5 && FUNC_2(VAR_3, VAR_4->acl_last_tx +
           VAR_1))
   FUNC_1(VAR_4, VAR_0);
 }
}
