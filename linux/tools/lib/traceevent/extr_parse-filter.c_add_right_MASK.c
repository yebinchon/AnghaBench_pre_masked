
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int type; struct tep_filter_arg* right; struct tep_filter_arg* left; } ;
struct TYPE_15__ {int type; TYPE_6__* field; int * buffer; int val; int reg; } ;
struct TYPE_13__ {TYPE_6__* field; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_11__ {int type; char* str; } ;
struct TYPE_10__ {struct tep_filter_arg* right; } ;
struct TYPE_9__ {struct tep_filter_arg* right; } ;
struct tep_filter_arg {int type; TYPE_8__ num; TYPE_7__ str; TYPE_5__ field; TYPE_4__ boolean; TYPE_3__ value; TYPE_2__ op; TYPE_1__ exp; } ;
typedef enum tep_errno { ____Placeholder_tep_errno } tep_errno ;
struct TYPE_14__ {size_t size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int const VAR_10 ;



 int VAR_11 ;

 int VAR_12 ;


 int VAR_13 ;


 int FUNC_0 (struct tep_filter_arg*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct tep_filter_arg*,int ,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static enum tep_errno
FUNC_7(struct tep_filter_arg *VAR_14, struct tep_filter_arg *VAR_15, char *VAR_16)
{
 struct tep_filter_arg *VAR_17;
 char *VAR_18;
 int VAR_19;
 int VAR_20;

 switch (VAR_14->type) {
 case 139:
  if (VAR_14->exp.right)
   goto out_fail;
  VAR_14->exp.right = VAR_15;
  break;

 case 136:
  if (VAR_14->op.right)
   goto out_fail;
  VAR_14->op.right = VAR_15;
  break;

 case 137:
  if (VAR_14->op.right)
   goto out_fail;



  switch (VAR_15->type) {
  case 135:
  case 138:
   break;
  default:
   FUNC_4(VAR_16, "Illegal rvalue");
   return VAR_4;
  }





  switch (VAR_15->value.type) {
  case 134:





   if (FUNC_6(VAR_15->value.str) == 1 &&
       VAR_14->num.type != 130 &&
       VAR_14->num.type != 131) {
    VAR_15->value.type = 129;
    goto do_int;
   }

  case 128:


   VAR_19 = VAR_14->num.type;
   VAR_17 = VAR_14->num.left;
   VAR_18 = VAR_15->value.str;


   FUNC_2(VAR_14, 0, sizeof(*VAR_14));





   if (VAR_17->type == VAR_9) {
    FUNC_0(VAR_17);
    FUNC_0(VAR_15);
    VAR_14->type = VAR_9;
    VAR_14->boolean.value = VAR_13;
    break;
   }


   if (VAR_17->type != 138) {
    FUNC_4(VAR_16,
        "Illegal lvalue for string comparison");
    return VAR_3;
   }


   switch (VAR_19) {
   case 133:
    VAR_19 = VAR_11;
    break;
   case 132:
    VAR_19 = VAR_12;
    break;

   case 130:
   case 131:
    VAR_20 = FUNC_3(&VAR_14->str.reg, VAR_18, VAR_0|VAR_1);
    if (VAR_20) {
     FUNC_4(VAR_16,
         "RegEx '%s' did not compute",
         VAR_18);
     return VAR_6;
    }
    break;
   default:
    FUNC_4(VAR_16,
        "Illegal comparison for string");
    return VAR_5;
   }

   VAR_14->type = VAR_10;
   VAR_14->str.type = VAR_19;
   VAR_14->str.field = VAR_17->field.field;
   VAR_14->str.val = FUNC_5(VAR_18);
   if (!VAR_14->str.val) {
    FUNC_4(VAR_16, "Failed to allocate string filter");
    return VAR_7;
   }



   VAR_14->str.buffer = FUNC_1(VAR_14->str.field->size + 1);
   if (!VAR_14->str.buffer) {
    FUNC_4(VAR_16, "Failed to allocate string filter");
    return VAR_7;
   }

   VAR_14->str.buffer[VAR_14->str.field->size] = 0;


   FUNC_0(VAR_15);
   FUNC_0(VAR_17);

   break;

  case 129:

 do_int:
   switch (VAR_14->num.type) {
   case 130:
   case 131:
    FUNC_4(VAR_16,
        "Op not allowed with integers");
    return VAR_2;

   default:
    break;
   }


   VAR_14->num.right = VAR_15;
   break;
  default:
   goto out_fail;
  }
  break;
 default:
  goto out_fail;
 }

 return 0;

 out_fail:
 FUNC_4(VAR_16, "Syntax error");
 return VAR_8;
}
