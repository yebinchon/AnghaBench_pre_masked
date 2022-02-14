
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int parent; } ;
struct hci_dev {int public_addr; TYPE_1__ dev; } ;
struct fwnode_handle {int dummy; } ;
typedef int bdaddr_t ;
typedef int ba ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 struct fwnode_handle* FUNC_2 (int ) ;
 int FUNC_3 (struct fwnode_handle*,char*,int *,int) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_1)
{
 struct fwnode_handle *VAR_2 = FUNC_2(VAR_1->dev.parent);
 bdaddr_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, "local-bd-address",
         (u8 *)&VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0 || !FUNC_0(&VAR_3, VAR_0))
  return;

 FUNC_1(&VAR_1->public_addr, &VAR_3);
}
