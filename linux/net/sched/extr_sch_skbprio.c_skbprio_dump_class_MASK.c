
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmsg {int tcm_handle; } ;
struct sk_buff {int dummy; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static int FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1,
        struct sk_buff *VAR_2, struct tcmsg *VAR_3)
{
 VAR_3->tcm_handle |= FUNC_0(VAR_1);
 return 0;
}
