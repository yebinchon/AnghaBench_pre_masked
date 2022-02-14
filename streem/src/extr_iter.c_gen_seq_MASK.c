
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct seq_data {scalar_t__ end; scalar_t__ n; scalar_t__ inc; } ;
typedef int strm_value ;
struct TYPE_6__ {struct seq_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int (*) (TYPE_1__*,int )) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_1, strm_value VAR_2)
{
  struct seq_data* VAR_3 = VAR_1->data;

  if (VAR_3->end > 0 && VAR_3->n > VAR_3->end) {
    FUNC_2(VAR_1);
    return VAR_0;
  }
  FUNC_0(VAR_1, FUNC_1(VAR_3->n), FUNC_3);
  VAR_3->n += VAR_3->inc;
  return VAR_0;
}
