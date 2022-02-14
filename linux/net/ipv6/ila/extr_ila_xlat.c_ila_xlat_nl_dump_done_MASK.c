
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_callback {scalar_t__* args; } ;
struct ila_dump_iter {int rhiter; } ;


 int FUNC_0 (struct ila_dump_iter*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct netlink_callback *VAR_0)
{
 struct ila_dump_iter *VAR_1 = (struct ila_dump_iter *)VAR_0->args[0];

 FUNC_1(&VAR_1->rhiter);

 FUNC_0(VAR_1);

 return 0;
}
