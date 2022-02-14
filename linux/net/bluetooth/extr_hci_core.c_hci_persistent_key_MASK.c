
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ type; int auth_type; int remote_auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct hci_dev *VAR_3, struct hci_conn *VAR_4,
          u8 VAR_5, u8 VAR_6)
{

 if (VAR_5 < 0x03)
  return 1;


 if (VAR_5 == VAR_1)
  return 0;


 if (VAR_5 == VAR_0 && VAR_6 == 0xff)
  return 0;


 if (!VAR_4)
  return 1;


 if (VAR_4->type == VAR_2)
  return 1;


 if (VAR_4->auth_type > 0x01 && VAR_4->remote_auth > 0x01)
  return 1;


 if (VAR_4->auth_type == 0x02 || VAR_4->auth_type == 0x03)
  return 1;


 if (VAR_4->remote_auth == 0x02 || VAR_4->remote_auth == 0x03)
  return 1;



 return 0;
}
