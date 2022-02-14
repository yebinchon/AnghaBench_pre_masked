
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbox_request {int cmd; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mbox_request *VAR_1)
{
 switch (VAR_1->cmd) {
 case 0:
  return 0;
 default:
  break;
 }
 return -VAR_0;
}
