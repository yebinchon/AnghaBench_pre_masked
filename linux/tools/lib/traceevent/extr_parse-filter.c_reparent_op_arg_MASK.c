
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct tep_filter_arg* left; struct tep_filter_arg* right; } ;
struct tep_filter_arg {scalar_t__ type; TYPE_1__ op; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tep_filter_arg*) ;
 int FUNC_1 (struct tep_filter_arg*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static enum tep_errno
FUNC_3(struct tep_filter_arg *VAR_3, struct tep_filter_arg *VAR_4,
  struct tep_filter_arg *VAR_5, char *VAR_6)
{
 struct tep_filter_arg *VAR_7;
 struct tep_filter_arg **VAR_8;

 if (VAR_3->type != VAR_2 &&
     VAR_5->type != VAR_2) {
  FUNC_2(VAR_6, "can not reparent other than OP");
  return VAR_1;
 }


 if (VAR_4->op.right == VAR_5) {
  VAR_8 = &VAR_4->op.right;
  VAR_7 = VAR_4->op.left;
 } else if (VAR_4->op.left == VAR_5) {
  VAR_8 = &VAR_4->op.left;
  VAR_7 = VAR_4->op.right;
 } else {
  FUNC_2(VAR_6, "Error in reparent op, find other child");
  return VAR_0;
 }


 *VAR_8 = ((void*)0);


 if (VAR_3 == VAR_4) {
  FUNC_1(VAR_7);
  *VAR_3 = *VAR_5;

  FUNC_0(VAR_5);
  return 0;
 }

 if (VAR_3->op.right == VAR_4)
  VAR_8 = &VAR_3->op.right;
 else if (VAR_3->op.left == VAR_4)
  VAR_8 = &VAR_3->op.left;
 else {
  FUNC_2(VAR_6, "Error in reparent op");
  return VAR_0;
 }

 *VAR_8 = VAR_5;

 FUNC_1(VAR_4);
 return 0;
}
