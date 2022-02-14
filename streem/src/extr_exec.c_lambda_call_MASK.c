
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct strm_lambda {TYPE_1__* body; int state; } ;
typedef int strm_value ;
struct TYPE_16__ {TYPE_6__* exc; } ;
typedef TYPE_2__ strm_stream ;
struct TYPE_17__ {int * env; int prev; int member_0; } ;
typedef TYPE_3__ strm_state ;
struct TYPE_18__ {scalar_t__ next; scalar_t__ body; scalar_t__ cond; int pat; } ;
typedef TYPE_4__ node_plambda ;
struct TYPE_19__ {scalar_t__ body; scalar_t__ args; } ;
typedef TYPE_5__ node_lambda ;
struct TYPE_20__ {scalar_t__ type; int lineno; int fname; int arg; } ;
typedef TYPE_6__ node_error ;
struct TYPE_21__ {int len; int * data; } ;
typedef TYPE_7__ node_args ;
struct TYPE_15__ {scalar_t__ type; int lineno; int fname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,scalar_t__,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int ,int,int *) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 struct strm_lambda* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(strm_stream* VAR_5, strm_value VAR_6, int VAR_7, strm_value* VAR_8, strm_value* VAR_9)
{
  struct strm_lambda* VAR_10 = FUNC_5(VAR_6);
  strm_state VAR_11 = {0};
  int VAR_12, VAR_13;
  node_error* VAR_14;

  VAR_11.prev = VAR_10->state;
  if (VAR_10->body->type == VAR_1) {
    node_lambda* VAR_15 = (node_lambda*)VAR_10->body;
    node_args* VAR_16 = (node_args*)VAR_15->args;

    if (VAR_16 == ((void*)0)) {
      if (VAR_7 > 0) goto argerr;
    }
    else if (VAR_16->len != VAR_7) {
    argerr:
      FUNC_3(VAR_5, "wrong number of arguments");
      goto err;
    }
    for (VAR_12=0; VAR_12<VAR_7; VAR_12++) {
      VAR_13 = FUNC_6(&VAR_11, FUNC_1(VAR_16->data[VAR_12]), VAR_8[VAR_12]);
      if (VAR_13) return VAR_13;
    }
    VAR_13 = FUNC_0(VAR_5, &VAR_11, VAR_15->body, VAR_9);
  }
  else if (VAR_10->body->type == VAR_2) {
    node_plambda* VAR_17 = (node_plambda*)VAR_10->body;
    int VAR_18 = 0;

    while (VAR_17) {
      if (FUNC_2(VAR_5, &VAR_11, VAR_17->pat, VAR_7, VAR_8) == VAR_4) {
        strm_value VAR_19;

        if (VAR_17->cond) {
          VAR_13 = FUNC_0(VAR_5, &VAR_11, VAR_17->cond, &VAR_19);
          if (VAR_13 == VAR_4 && FUNC_4(VAR_19)) {
            VAR_18++;
            VAR_13 = FUNC_0(VAR_5, &VAR_11, VAR_17->body, VAR_9);
            break;
          }
        }
        else {
          VAR_18++;
          VAR_13 = FUNC_0(VAR_5, &VAR_11, VAR_17->body, VAR_9);
          break;
        }
      }
      VAR_11.env = ((void*)0);
      VAR_17 = (node_plambda*)VAR_17->next;
    }
    if (VAR_18 == 0) {
      FUNC_3(VAR_5, "match failure");
      goto err;
    }
  }
  else {
    return VAR_3;
  }
  if (VAR_13 == VAR_3 && VAR_5) {
    VAR_14 = VAR_5->exc;
    if (VAR_14 && VAR_14->type == VAR_0) {
      *VAR_9 = VAR_14->arg;
      return VAR_4;
    }
  }
  return VAR_13;
 err:
  if (VAR_5 && VAR_5->exc) {
    VAR_5->exc->fname = VAR_10->body->fname;
    VAR_5->exc->lineno = VAR_10->body->lineno;
  }
  return VAR_3;
}
