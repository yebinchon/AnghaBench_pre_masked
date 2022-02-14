
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {struct tep_filter_arg* right; struct tep_filter_arg* left; } ;
struct TYPE_9__ {struct tep_filter_arg* str; int type; } ;
struct TYPE_8__ {struct tep_filter_arg* buffer; int reg; struct tep_filter_arg* val; } ;
struct TYPE_7__ {struct tep_filter_arg* right; struct tep_filter_arg* left; } ;
struct TYPE_6__ {struct tep_filter_arg* right; struct tep_filter_arg* left; } ;
struct tep_filter_arg {int type; TYPE_5__ op; TYPE_4__ value; TYPE_3__ str; TYPE_2__ exp; TYPE_1__ num; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tep_filter_arg*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tep_filter_arg *VAR_2)
{
 if (!VAR_2)
  return;

 switch (VAR_2->type) {
 case 132:
 case 134:
  break;

 case 131:
  FUNC_2(VAR_2->num.left);
  FUNC_2(VAR_2->num.right);
  break;

 case 133:
  FUNC_2(VAR_2->exp.left);
  FUNC_2(VAR_2->exp.right);
  break;

 case 129:
  FUNC_0(VAR_2->str.val);
  FUNC_1(&VAR_2->str.reg);
  FUNC_0(VAR_2->str.buffer);
  break;

 case 128:
  if (VAR_2->value.type == VAR_1 ||
      VAR_2->value.type == VAR_0)
   FUNC_0(VAR_2->value.str);
  break;

 case 130:
  FUNC_2(VAR_2->op.left);
  FUNC_2(VAR_2->op.right);
 default:
  break;
 }

 FUNC_0(VAR_2);
}
