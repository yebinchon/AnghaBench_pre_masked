
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct recv_data {int strm; int (* func ) (int ,int ) ;} ;
struct latch_data {int rq; } ;
typedef int strm_value ;
struct TYPE_3__ {struct latch_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (struct recv_data*) ;
 struct recv_data* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_1, strm_value VAR_2)
{
  struct latch_data* VAR_3 = VAR_1->data;

  for (;;) {
    struct recv_data* VAR_4 = FUNC_1(VAR_3->rq);
    if (!VAR_4) break;
    (*VAR_4->func)(VAR_4->strm, VAR_2);
    FUNC_0(VAR_4);
  }
  return VAR_0;
}
