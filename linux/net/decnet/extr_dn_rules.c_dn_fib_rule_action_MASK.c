
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flowidn {int dummy; } ;
struct TYPE_2__ {struct flowidn dn; } ;
struct flowi {TYPE_1__ u; } ;
struct fib_rule {int action; int table; } ;
struct fib_lookup_arg {scalar_t__ result; } ;
struct dn_fib_table {int (* lookup ) (struct dn_fib_table*,struct flowidn*,struct dn_fib_res*) ;} ;
struct dn_fib_res {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 struct dn_fib_table* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dn_fib_table*,struct flowidn*,struct dn_fib_res*) ;

__attribute__((used)) static int FUNC_2(struct fib_rule *VAR_4, struct flowi *VAR_5,
         int VAR_6, struct fib_lookup_arg *VAR_7)
{
 struct flowidn *VAR_8 = &VAR_5->u.dn;
 int VAR_9 = -VAR_1;
 struct dn_fib_table *VAR_10;

 switch(VAR_4->action) {
 case 129:
  break;

 case 128:
  VAR_9 = -VAR_3;
  goto errout;

 case 130:
  VAR_9 = -VAR_0;
  goto errout;

 case 131:
 default:
  VAR_9 = -VAR_2;
  goto errout;
 }

 VAR_10 = FUNC_0(VAR_4->table, 0);
 if (VAR_10 == ((void*)0))
  goto errout;

 VAR_9 = VAR_10->lookup(VAR_10, VAR_8, (struct dn_fib_res *)VAR_7->result);
 if (VAR_9 > 0)
  VAR_9 = -VAR_1;
errout:
 return VAR_9;
}
