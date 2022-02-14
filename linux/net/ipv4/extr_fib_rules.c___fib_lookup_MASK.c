
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rules_ops; } ;
struct net {TYPE_1__ ipv4; } ;
struct flowi4 {int dummy; } ;
struct fib_result {int tclassid; } ;
struct fib_lookup_arg {unsigned int flags; scalar_t__ rule; struct fib_result* result; } ;
struct fib4_rule {int tclassid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct fib_lookup_arg*) ;
 int FUNC_1 (struct flowi4*) ;
 int FUNC_2 (struct net*,int ) ;

int FUNC_3(struct net *VAR_2, struct flowi4 *VAR_3,
   struct fib_result *VAR_4, unsigned int VAR_5)
{
 struct fib_lookup_arg VAR_6 = {
  .result = VAR_4,
  .flags = VAR_5,
 };
 int VAR_7;


 FUNC_2(VAR_2, FUNC_1(VAR_3));

 VAR_7 = FUNC_0(VAR_2->ipv4.rules_ops, FUNC_1(VAR_3), 0, &VAR_6);







 if (VAR_7 == -VAR_1)
  VAR_7 = -VAR_0;

 return VAR_7;
}
