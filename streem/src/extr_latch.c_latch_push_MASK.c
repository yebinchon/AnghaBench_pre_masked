
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct recv_data {int strm; int (* func ) (int ,int ) ;} ;
struct latch_data {int dq; int rq; } ;
typedef int strm_value ;
struct TYPE_3__ {scalar_t__ mode; struct latch_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct recv_data*) ;
 int * FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int *) ;
 struct recv_data* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_3, strm_value VAR_4)
{
  struct latch_data* VAR_5 = VAR_3->data;
  struct recv_data* VAR_6 = FUNC_3(VAR_5->rq);

  if (VAR_3->mode != VAR_2) {
    return VAR_0;
  }
  if (VAR_6) {
    (*VAR_6->func)(VAR_6->strm, VAR_4);
    FUNC_0(VAR_6);
  }
  else {
    strm_value* VAR_7 = FUNC_1(sizeof(strm_value));
    *VAR_7 = VAR_4;
    FUNC_2(VAR_5->dq, VAR_7);
  }
  return VAR_1;
}
