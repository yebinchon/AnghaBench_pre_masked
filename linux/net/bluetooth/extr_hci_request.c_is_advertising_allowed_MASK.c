
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ le_num_slave; } ;
struct hci_dev {int* le_states; TYPE_1__ conn_hash; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hci_dev*,int ) ;

__attribute__((used)) static bool FUNC_1(struct hci_dev *VAR_1, bool VAR_2)
{

 if (FUNC_0(VAR_1, VAR_0) == 0)
  return 1;


 if (VAR_1->conn_hash.le_num_slave > 0) {

  if (!VAR_2 && !(VAR_1->le_states[2] & 0x10))
   return 0;




  if (VAR_2 && (!(VAR_1->le_states[4] & 0x40) ||
        !(VAR_1->le_states[2] & 0x20)))
   return 0;
 }


 if (FUNC_0(VAR_1, VAR_0) != VAR_1->conn_hash.le_num_slave) {

  if (!VAR_2 && !(VAR_1->le_states[2] & 0x02))
   return 0;




  if (VAR_2 && (!(VAR_1->le_states[4] & 0x08) ||
        !(VAR_1->le_states[2] & 0x08)))
   return 0;
 }

 return 1;
}
