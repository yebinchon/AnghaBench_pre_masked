
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hci_dev {int dummy; } ;
struct hci_conn {int dummy; } ;


 int FUNC_0 (struct hci_dev*,char*,int ) ;
 int FUNC_1 (struct hci_conn*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_conn*,int ) ;
 struct hci_conn* FUNC_5 (struct hci_dev*) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_0, u8 VAR_1, u16 VAR_2)
{
 struct hci_conn *VAR_3;

 FUNC_2(VAR_0);

 VAR_3 = FUNC_5(VAR_0);

 if (!VAR_1) {
  FUNC_1(VAR_3);
  goto done;
 }

 FUNC_0(VAR_0, "request failed to create LE connection: "
     "status 0x%2.2x", VAR_1);

 if (!VAR_3)
  goto done;

 FUNC_4(VAR_3, VAR_1);

done:
 FUNC_3(VAR_0);
}
