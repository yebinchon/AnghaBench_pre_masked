
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct tep_filter_arg {TYPE_1__ op; int type; } ;
typedef enum tep_filter_op_type { ____Placeholder_tep_filter_op_type } tep_filter_op_type ;


 int VAR_0 ;
 struct tep_filter_arg* FUNC_0 () ;

__attribute__((used)) static struct tep_filter_arg *
FUNC_1(enum tep_filter_op_type VAR_1)
{
 struct tep_filter_arg *VAR_2;

 VAR_2 = FUNC_0();
 if (!VAR_2)
  return ((void*)0);

 VAR_2->type = VAR_0;
 VAR_2->op.type = VAR_1;

 return VAR_2;
}
