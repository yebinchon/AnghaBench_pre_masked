
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct tep_filter_arg* left; } ;
struct TYPE_6__ {struct tep_filter_arg* left; } ;
struct TYPE_5__ {struct tep_filter_arg* left; } ;
struct tep_filter_arg {int type; TYPE_1__ num; TYPE_3__ op; TYPE_2__ exp; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;


 int VAR_0 ;
 int const VAR_1 ;

 int const VAR_2 ;


 struct tep_filter_arg* FUNC_0 (struct tep_filter_arg*,struct tep_filter_arg*) ;

__attribute__((used)) static enum tep_errno FUNC_1(struct tep_filter_arg *VAR_3, struct tep_filter_arg *VAR_4)
{
 switch (VAR_3->type) {
 case 130:
  if (VAR_4->type == 128)
   VAR_4 = FUNC_0(VAR_4, VAR_3);
  VAR_3->exp.left = VAR_4;
  break;

 case 128:
  VAR_3->op.left = VAR_4;
  break;
 case 129:
  if (VAR_4->type == 128)
   VAR_4 = FUNC_0(VAR_4, VAR_3);


  if (VAR_4->type != VAR_2 &&
      VAR_4->type != VAR_1)
   return VAR_0;
  VAR_3->num.left = VAR_4;
  break;
 default:
  return VAR_0;
 }
 return 0;
}
