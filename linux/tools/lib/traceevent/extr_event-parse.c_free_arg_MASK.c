
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {struct tep_print_arg* args; } ;
struct TYPE_14__ {struct tep_print_arg* right; struct tep_print_arg* left; struct tep_print_arg* op; } ;
struct TYPE_13__ {struct tep_print_arg* index; } ;
struct TYPE_24__ {struct tep_print_arg* bitmask; } ;
struct TYPE_23__ {struct tep_print_arg* string; } ;
struct TYPE_22__ {struct tep_print_arg* item; struct tep_print_arg* type; } ;
struct TYPE_21__ {struct tep_print_arg* el_size; struct tep_print_arg* count; struct tep_print_arg* field; } ;
struct TYPE_20__ {struct tep_print_arg* size; struct tep_print_arg* field; } ;
struct TYPE_19__ {int symbols; struct tep_print_arg* field; } ;
struct TYPE_18__ {int flags; struct tep_print_arg* delim; struct tep_print_arg* field; } ;
struct TYPE_17__ {struct tep_print_arg* name; } ;
struct TYPE_16__ {struct tep_print_arg* atom; } ;
struct tep_print_arg {int type; struct tep_print_arg* next; TYPE_12__ func; TYPE_11__ op; TYPE_10__ dynarray; TYPE_9__ bitmask; TYPE_8__ string; TYPE_7__ typecast; TYPE_6__ int_array; TYPE_5__ hex; TYPE_4__ symbol; TYPE_3__ flags; TYPE_2__ field; TYPE_1__ atom; } ;
 int FUNC_0 (struct tep_print_arg*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tep_print_arg *VAR_0)
{
 struct tep_print_arg *VAR_1;

 if (!VAR_0)
  return;

 switch (VAR_0->type) {
 case 143:
  FUNC_0(VAR_0->atom.atom);
  break;
 case 138:
  FUNC_0(VAR_0->field.name);
  break;
 case 137:
  FUNC_2(VAR_0->flags.field);
  FUNC_0(VAR_0->flags.delim);
  FUNC_1(VAR_0->flags.flags);
  break;
 case 129:
  FUNC_2(VAR_0->symbol.field);
  FUNC_1(VAR_0->symbol.symbols);
  break;
 case 135:
 case 134:
  FUNC_2(VAR_0->hex.field);
  FUNC_2(VAR_0->hex.size);
  break;
 case 133:
  FUNC_2(VAR_0->int_array.field);
  FUNC_2(VAR_0->int_array.count);
  FUNC_2(VAR_0->int_array.el_size);
  break;
 case 128:
  FUNC_0(VAR_0->typecast.type);
  FUNC_2(VAR_0->typecast.item);
  break;
 case 130:
 case 141:
  FUNC_0(VAR_0->string.string);
  break;
 case 142:
  FUNC_0(VAR_0->bitmask.bitmask);
  break;
 case 140:
 case 139:
  FUNC_0(VAR_0->dynarray.index);
  break;
 case 131:
  FUNC_0(VAR_0->op.op);
  FUNC_2(VAR_0->op.left);
  FUNC_2(VAR_0->op.right);
  break;
 case 136:
  while (VAR_0->func.args) {
   VAR_1 = VAR_0->func.args;
   VAR_0->func.args = VAR_1->next;
   FUNC_2(VAR_1);
  }
  break;

 case 132:
 default:
  break;
 }

 FUNC_0(VAR_0);
}
