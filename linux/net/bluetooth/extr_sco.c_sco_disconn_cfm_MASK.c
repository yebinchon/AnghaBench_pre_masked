
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_conn {scalar_t__ type; } ;
typedef int __u8 ;


 int FUNC_0 (char*,struct hci_conn*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hci_conn*,int ) ;

__attribute__((used)) static void FUNC_3(struct hci_conn *VAR_2, __u8 VAR_3)
{
 if (VAR_2->type != VAR_1 && VAR_2->type != VAR_0)
  return;

 FUNC_0("hcon %p reason %d", VAR_2, VAR_3);

 FUNC_2(VAR_2, FUNC_1(VAR_3));
}
