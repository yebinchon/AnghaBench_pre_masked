
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct slice_data {struct slice_data* buf; } ;
typedef int strm_value ;
struct TYPE_3__ {struct slice_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (struct slice_data*) ;

__attribute__((used)) static int
FUNC_1(strm_stream* VAR_1, strm_value VAR_2)
{
  struct slice_data* VAR_3 = VAR_1->data;

  FUNC_0(VAR_3->buf);
  FUNC_0(VAR_3);
  return VAR_0;
}
