
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct trace_seq {int dummy; } ;
struct TYPE_11__ {char* op; struct tep_print_arg* right; struct tep_print_arg* left; } ;
struct TYPE_20__ {char* type; struct tep_print_arg* item; } ;
struct TYPE_19__ {char* bitmask; } ;
struct TYPE_18__ {char* string; } ;
struct TYPE_17__ {struct tep_print_arg* el_size; struct tep_print_arg* count; struct tep_print_arg* field; } ;
struct TYPE_16__ {struct tep_print_arg* size; struct tep_print_arg* field; } ;
struct TYPE_15__ {int symbols; struct tep_print_arg* field; } ;
struct TYPE_14__ {char* delim; int flags; struct tep_print_arg* field; } ;
struct TYPE_13__ {char* name; } ;
struct TYPE_12__ {char* atom; } ;
struct tep_print_arg {int type; struct tep_print_arg* next; TYPE_10__ op; TYPE_9__ typecast; TYPE_8__ bitmask; TYPE_7__ string; TYPE_6__ int_array; TYPE_5__ hex; TYPE_4__ symbol; TYPE_3__ flags; TYPE_2__ field; TYPE_1__ atom; } ;
 int FUNC_0 (struct trace_seq*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct trace_seq*) ;
 int FUNC_4 (struct trace_seq*) ;
 int FUNC_5 (struct trace_seq*) ;

__attribute__((used)) static void FUNC_6(struct tep_print_arg *VAR_0)
{
 int VAR_1 = 1;
 struct trace_seq VAR_2;

 switch (VAR_0->type) {
 case 132:
  FUNC_1("null");
  break;
 case 140:
  FUNC_1("%s", VAR_0->atom.atom);
  break;
 case 137:
  FUNC_1("REC->%s", VAR_0->field.name);
  break;
 case 136:
  FUNC_1("__print_flags(");
  FUNC_6(VAR_0->flags.field);
  FUNC_1(", %s, ", VAR_0->flags.delim);
  FUNC_5(&VAR_2);
  FUNC_0(&VAR_2, VAR_0->flags.flags);
  FUNC_4(&VAR_2);
  FUNC_3(&VAR_2);
  FUNC_1(")");
  break;
 case 129:
  FUNC_1("__print_symbolic(");
  FUNC_6(VAR_0->symbol.field);
  FUNC_1(", ");
  FUNC_5(&VAR_2);
  FUNC_0(&VAR_2, VAR_0->symbol.symbols);
  FUNC_4(&VAR_2);
  FUNC_3(&VAR_2);
  FUNC_1(")");
  break;
 case 135:
  FUNC_1("__print_hex(");
  FUNC_6(VAR_0->hex.field);
  FUNC_1(", ");
  FUNC_6(VAR_0->hex.size);
  FUNC_1(")");
  break;
 case 134:
  FUNC_1("__print_hex_str(");
  FUNC_6(VAR_0->hex.field);
  FUNC_1(", ");
  FUNC_6(VAR_0->hex.size);
  FUNC_1(")");
  break;
 case 133:
  FUNC_1("__print_array(");
  FUNC_6(VAR_0->int_array.field);
  FUNC_1(", ");
  FUNC_6(VAR_0->int_array.count);
  FUNC_1(", ");
  FUNC_6(VAR_0->int_array.el_size);
  FUNC_1(")");
  break;
 case 130:
 case 138:
  FUNC_1("__get_str(%s)", VAR_0->string.string);
  break;
 case 139:
  FUNC_1("__get_bitmask(%s)", VAR_0->bitmask.bitmask);
  break;
 case 128:
  FUNC_1("(%s)", VAR_0->typecast.type);
  FUNC_6(VAR_0->typecast.item);
  break;
 case 131:
  if (FUNC_2(VAR_0->op.op, ":") == 0)
   VAR_1 = 0;
  if (VAR_1)
   FUNC_1("(");
  FUNC_6(VAR_0->op.left);
  FUNC_1(" %s ", VAR_0->op.op);
  FUNC_6(VAR_0->op.right);
  if (VAR_1)
   FUNC_1(")");
  break;
 default:

  return;
 }
 if (VAR_0->next) {
  FUNC_1("\n");
  FUNC_6(VAR_0->next);
 }
}
