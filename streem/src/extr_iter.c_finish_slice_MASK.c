
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct slice_data {scalar_t__ i; struct slice_data* buf; } ;
typedef int strm_value ;
struct TYPE_4__ {struct slice_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef int strm_array ;


 int VAR_0 ;
 int FUNC_0 (struct slice_data*) ;
 int FUNC_1 (struct slice_data*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_1, strm_value VAR_2)
{
  struct slice_data* VAR_3 = VAR_1->data;

  if (VAR_3->i > 0) {
    strm_array VAR_4 = FUNC_1(VAR_3->buf, VAR_3->i);
    FUNC_3(VAR_1, FUNC_2(VAR_4), ((void*)0));
  }
  FUNC_0(VAR_3->buf);
  FUNC_0(VAR_3);
  return VAR_0;
}
