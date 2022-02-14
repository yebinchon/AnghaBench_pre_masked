
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_callback {scalar_t__* args; } ;
struct class_dev_iter {int dummy; } ;


 int FUNC_0 (struct class_dev_iter*) ;
 int FUNC_1 (struct class_dev_iter*) ;

__attribute__((used)) static int FUNC_2(struct netlink_callback *VAR_0)
{
 struct class_dev_iter *VAR_1 = (struct class_dev_iter *) VAR_0->args[0];

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 return 0;
}
