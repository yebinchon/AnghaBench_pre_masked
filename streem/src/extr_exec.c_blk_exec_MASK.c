
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct strm_lambda {TYPE_1__* body; int state; } ;
typedef int strm_value ;
struct TYPE_14__ {TYPE_4__* exc; struct strm_lambda* data; } ;
typedef TYPE_2__ strm_stream ;
struct TYPE_15__ {int prev; int member_0; } ;
typedef TYPE_3__ strm_state ;
struct TYPE_16__ {scalar_t__ type; int arg; } ;
typedef TYPE_4__ node_error ;
struct TYPE_17__ {int len; int * data; } ;
typedef TYPE_5__ node_args ;
struct TYPE_13__ {int body; scalar_t__ args; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int
FUNC_8(strm_stream* VAR_4, strm_value VAR_5)
{
  struct strm_lambda* VAR_6 = VAR_4->data;
  strm_value VAR_7 = FUNC_6();
  node_args* VAR_8 = (node_args*)VAR_6->body->args;
  node_error* VAR_9;
  int VAR_10;
  strm_state VAR_11 = {0};

  VAR_11.prev = VAR_6->state;
  if (VAR_8) {
    FUNC_0(VAR_8->len == 1);
    FUNC_7(&VAR_11, FUNC_2(VAR_8->data[0]), VAR_5);
  }

  VAR_10 = FUNC_1(VAR_4, &VAR_11, VAR_6->body->body, &VAR_7);
  VAR_9 = VAR_4->exc;
  if (VAR_9) {
    if (VAR_9->type == VAR_0) {
      VAR_7 = VAR_9->arg;
      FUNC_3(VAR_4);
    }
    else {
      if (VAR_3) {
        FUNC_5(VAR_4);
      }
      return VAR_1;
    }
  }
  if (VAR_10) return VAR_1;
  FUNC_4(VAR_4, VAR_7, ((void*)0));
  return VAR_2;
}
