
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_conn {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct hci_conn *VAR_2)
{
 if (VAR_2->type != VAR_0)
  return 0;

 if (!VAR_1)
  return 0;

 return 1;
}
