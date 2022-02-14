
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ip4; } ;
struct flowi {TYPE_1__ u; } ;
struct fib_table {int dummy; } ;
struct fib_rule {int action; int fr_net; } ;
struct fib_result {int dummy; } ;
struct fib_lookup_arg {int flags; scalar_t__ result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 struct fib_table* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fib_rule*,struct fib_lookup_arg*) ;
 int FUNC_2 (struct fib_table*,int *,struct fib_result*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct fib_rule *VAR_4, struct flowi *VAR_5,
       int VAR_6, struct fib_lookup_arg *VAR_7)
{
 int VAR_8 = -VAR_1;
 struct fib_table *VAR_9;
 u32 VAR_10;

 switch (VAR_4->action) {
 case 129:
  break;

 case 128:
  return -VAR_3;

 case 130:
  return -VAR_0;

 case 131:
 default:
  return -VAR_2;
 }

 FUNC_3();

 VAR_10 = FUNC_1(VAR_4, VAR_7);
 VAR_9 = FUNC_0(VAR_4->fr_net, VAR_10);
 if (VAR_9)
  VAR_8 = FUNC_2(VAR_9, &VAR_5->u.ip4,
           (struct fib_result *)VAR_7->result,
           VAR_7->flags);

 FUNC_4();
 return VAR_8;
}
