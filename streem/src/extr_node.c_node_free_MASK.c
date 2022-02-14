
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_8__* value; } ;
typedef TYPE_1__ node_str ;
struct TYPE_13__ {TYPE_8__* rhs; TYPE_8__* lhs; } ;
typedef TYPE_2__ node_op ;
struct TYPE_14__ {TYPE_8__* body; TYPE_8__* args; } ;
typedef TYPE_3__ node_lambda ;
struct TYPE_15__ {TYPE_8__* opt_else; TYPE_8__* then; TYPE_8__* cond; } ;
typedef TYPE_4__ node_if ;
struct TYPE_16__ {TYPE_8__* name; } ;
typedef TYPE_5__ node_ident ;
struct TYPE_17__ {TYPE_8__* emit; } ;
typedef TYPE_6__ node_emit ;
struct TYPE_18__ {TYPE_8__* args; } ;
typedef TYPE_7__ node_call ;
typedef int node_array ;
struct TYPE_19__ {int type; } ;
typedef TYPE_8__ node ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(node* VAR_0) {
  if (!VAR_0) {
    return;
  }

  switch (VAR_0->type) {
  case 140:
    FUNC_1(VAR_0);
    break;
  case 133:
    FUNC_3(((node_if*)VAR_0)->cond);
    FUNC_3(((node_if*)VAR_0)->then);
    FUNC_3(((node_if*)VAR_0)->opt_else);
    FUNC_0(VAR_0);
    break;
  case 136:
    FUNC_3(((node_emit*)VAR_0)->emit);
    FUNC_0(VAR_0);
    break;
  case 130:
    FUNC_3(((node_op*)VAR_0)->lhs);
    FUNC_3(((node_op*)VAR_0)->rhs);
    FUNC_0(VAR_0);
    break;
  case 131:
    FUNC_1(((node_lambda*)VAR_0)->args);
    FUNC_3(((node_lambda*)VAR_0)->body);
    FUNC_0(VAR_0);
    break;
  case 137:
    FUNC_3(((node_call*)VAR_0)->args);
    FUNC_0(VAR_0);
    break;
  case 129:
    FUNC_3((node*)VAR_0);
    FUNC_0(VAR_0);
    break;
  case 134:
    FUNC_0(((node_ident*)VAR_0)->name);
    FUNC_0(VAR_0);
    break;
  case 139:
    FUNC_2((node_array*)VAR_0);
    break;
  case 132:
  case 135:
    FUNC_0(VAR_0);
    break;
  case 138:
    return;
  case 128:
    FUNC_0(((node_str*)VAR_0)->value);
    FUNC_0(VAR_0);
    break;
  default:
    break;
  }
}
