
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_dev {int dummy; } ;
struct netlink_callback {scalar_t__* args; } ;


 int FUNC_0 (struct nfc_dev*) ;

__attribute__((used)) static int FUNC_1(struct netlink_callback *VAR_0)
{
 struct nfc_dev *VAR_1 = (struct nfc_dev *) VAR_0->args[1];

 if (VAR_1)
  FUNC_0(VAR_1);

 return 0;
}
