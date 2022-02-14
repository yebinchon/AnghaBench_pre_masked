
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct latch_data {int dq; } ;
struct TYPE_3__ {scalar_t__ mode; struct latch_data* data; } ;
typedef TYPE_1__ strm_stream ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(strm_stream* VAR_1)
{
  struct latch_data* VAR_2;

  if (VAR_1->mode == VAR_0) return 0;
  VAR_2 = VAR_1->data;
  return FUNC_0(VAR_2->dq);
}
