
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib_rules_ops {scalar_t__ (* nlmsg_payload ) (struct fib_rule*) ;} ;
struct fib_rule_port_range {int dummy; } ;
struct fib_rule_hdr {int dummy; } ;
struct fib_rule {int dummy; } ;
struct fib_kuid_range {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct fib_rule*) ;

__attribute__((used)) static inline size_t FUNC_4(struct fib_rules_ops *VAR_1,
      struct fib_rule *VAR_2)
{
 size_t VAR_3 = FUNC_0(sizeof(struct fib_rule_hdr))
    + FUNC_1(VAR_0)
    + FUNC_1(VAR_0)
    + FUNC_1(4)
    + FUNC_1(4)
    + FUNC_1(4)
    + FUNC_1(4)
    + FUNC_1(4)
    + FUNC_1(4)
    + FUNC_2(8)
    + FUNC_1(sizeof(struct fib_kuid_range))
    + FUNC_1(1)
    + FUNC_1(1)
    + FUNC_1(sizeof(struct fib_rule_port_range))
    + FUNC_1(sizeof(struct fib_rule_port_range));

 if (VAR_1->nlmsg_payload)
  VAR_3 += VAR_1->nlmsg_payload(VAR_2);

 return VAR_3;
}
