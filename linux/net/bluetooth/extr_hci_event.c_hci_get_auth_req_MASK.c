
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_conn {int remote_auth; int auth_type; scalar_t__ remote_cap; scalar_t__ io_capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u8 FUNC_0(struct hci_conn *VAR_3)
{

 if (VAR_3->remote_auth == VAR_0 ||
     VAR_3->remote_auth == VAR_1)
  return VAR_3->remote_auth | (VAR_3->auth_type & 0x01);




 if (VAR_3->remote_cap != VAR_2 &&
     VAR_3->io_capability != VAR_2)
  return VAR_3->remote_auth | 0x01;


 return (VAR_3->remote_auth & ~0x01) | (VAR_3->auth_type & 0x01);
}
