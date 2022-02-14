
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {struct tep_filter_arg* left; int type; struct tep_filter_arg* right; } ;
struct TYPE_7__ {struct tep_filter_arg* right; struct tep_filter_arg* left; } ;
struct TYPE_6__ {struct tep_filter_arg* right; struct tep_filter_arg* left; } ;
struct TYPE_5__ {int value; } ;
struct tep_filter_arg {int type; TYPE_4__ op; TYPE_3__ num; TYPE_2__ exp; TYPE_1__ boolean; } ;





 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tep_filter_arg*,struct tep_filter_arg*,struct tep_filter_arg*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct tep_filter_arg *VAR_4, struct tep_filter_arg *VAR_5,
      char *VAR_6)
{
 int VAR_7, VAR_8;

 switch (VAR_5->type) {


 case 134:
  return 137 + VAR_5->boolean.value;


 case 129:
 case 128:
 case 132:
  return 136;

 case 133:
  VAR_7 = FUNC_2(VAR_5, VAR_5->exp.left, VAR_6);
  if (VAR_7 != 136)
   return VAR_7;
  VAR_8 = FUNC_2(VAR_5, VAR_5->exp.right, VAR_6);
  if (VAR_8 != 136)
   return VAR_8;
  return 136;

 case 131:
  VAR_7 = FUNC_2(VAR_5, VAR_5->num.left, VAR_6);
  if (VAR_7 != 136)
   return VAR_7;
  VAR_8 = FUNC_2(VAR_5, VAR_5->num.right, VAR_6);
  if (VAR_8 != 136)
   return VAR_8;
  return 136;

 case 130:
  if (VAR_5->op.type != VAR_2) {
   VAR_7 = FUNC_2(VAR_5, VAR_5->op.left, VAR_6);
   switch (VAR_7) {
   case 136:
    break;
   case 135:
    if (VAR_5->op.type == VAR_3)
     return 135;
    VAR_8 = FUNC_2(VAR_5, VAR_5->op.right, VAR_6);
    if (VAR_8 != 136)
     return VAR_8;

    return FUNC_0(VAR_4, VAR_5, VAR_5->op.right,
             VAR_6);

   case 137:
    if (VAR_5->op.type == VAR_1)
     return 137;
    VAR_8 = FUNC_2(VAR_5, VAR_5->op.right, VAR_6);
    if (VAR_8 != 136)
     return VAR_8;

    return FUNC_0(VAR_4, VAR_5, VAR_5->op.right,
             VAR_6);

   default:
    return VAR_7;
   }
  }

  VAR_8 = FUNC_2(VAR_5, VAR_5->op.right, VAR_6);
  switch (VAR_8) {
  case 136:
  default:
   break;

  case 135:
   if (VAR_5->op.type == VAR_3)
    return 135;
   if (VAR_5->op.type == VAR_2)
    return 137;

   return FUNC_0(VAR_4, VAR_5, VAR_5->op.left,
            VAR_6);

  case 137:
   if (VAR_5->op.type == VAR_1)
    return 137;
   if (VAR_5->op.type == VAR_2)
    return 135;

   return FUNC_0(VAR_4, VAR_5, VAR_5->op.left,
            VAR_6);
  }

  return VAR_8;
 default:
  FUNC_1(VAR_6, "bad arg in filter tree");
  return VAR_0;
 }
 return 136;
}
