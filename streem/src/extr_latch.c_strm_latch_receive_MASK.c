
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct recv_data {int (* func ) (TYPE_1__*,int ) ;TYPE_1__* strm; } ;
struct latch_data {int rq; int dq; } ;
typedef int strm_value ;
struct TYPE_7__ {scalar_t__ start_func; struct latch_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef int (* strm_callback ) (TYPE_1__*,int ) ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 struct recv_data* FUNC_2 (int) ;
 int FUNC_3 (int ,struct recv_data*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

void
FUNC_6(strm_stream* VAR_1, strm_stream* VAR_2, strm_callback VAR_3)
{
  struct latch_data* VAR_4;
  strm_value* VAR_5;

  FUNC_0(VAR_1->start_func == VAR_0);
  VAR_4 = VAR_1->data;
  VAR_5 = FUNC_4(VAR_4->dq);
  if (VAR_5) {
    (*VAR_3)(VAR_2, *VAR_5);
    FUNC_1(VAR_5);
  }
  else {
    struct recv_data* VAR_6 = FUNC_2(sizeof(struct recv_data));
    VAR_6->strm = VAR_2;
    VAR_6->func = VAR_3;
    FUNC_3(VAR_4->rq, VAR_6);
  }
}
