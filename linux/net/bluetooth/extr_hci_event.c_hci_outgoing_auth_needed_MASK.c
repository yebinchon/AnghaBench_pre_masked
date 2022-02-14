
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ state; scalar_t__ pending_sec_level; int auth_type; int out; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct hci_conn*) ;

__attribute__((used)) static int FUNC_1(struct hci_dev *VAR_5,
        struct hci_conn *VAR_6)
{
 if (VAR_6->state != VAR_0 || !VAR_6->out)
  return 0;

 if (VAR_6->pending_sec_level == VAR_4)
  return 0;





 if (!FUNC_0(VAR_6) && !(VAR_6->auth_type & 0x01) &&
     VAR_6->pending_sec_level != VAR_1 &&
     VAR_6->pending_sec_level != VAR_2 &&
     VAR_6->pending_sec_level != VAR_3)
  return 0;

 return 1;
}
