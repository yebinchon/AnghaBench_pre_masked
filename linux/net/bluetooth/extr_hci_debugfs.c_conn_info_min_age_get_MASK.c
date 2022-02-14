
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hci_dev {int conn_info_min_age; } ;


 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, u64 *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_0;

 FUNC_0(VAR_2);
 *VAR_1 = VAR_2->conn_info_min_age;
 FUNC_1(VAR_2);

 return 0;
}
