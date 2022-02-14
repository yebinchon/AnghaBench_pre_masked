
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_conn {scalar_t__ sec_level; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (char*,struct hci_conn*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct hci_conn *VAR_2, __u8 VAR_3)
{
 FUNC_0("hcon %p", VAR_2);


 if (VAR_3 != VAR_1 && VAR_3 != VAR_0)
  return 1;


 if (VAR_2->sec_level == VAR_1 ||
     VAR_2->sec_level == VAR_0)
  return 1;


 return 0;
}
