
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct slice_data {scalar_t__ n; scalar_t__ i; int * buf; } ;
typedef int strm_value ;
struct TYPE_4__ {struct slice_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef scalar_t__ strm_int ;
typedef int strm_array ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_1, strm_value VAR_2)
{
  struct slice_data* VAR_3 = VAR_1->data;
  strm_int VAR_4 = VAR_3->n;

  VAR_3->buf[VAR_3->i++] = VAR_2;
  if (VAR_3->i == VAR_4) {
    strm_array VAR_5 = FUNC_0(VAR_3->buf, VAR_4);

    VAR_3->i = 0;
    FUNC_2(VAR_1, FUNC_1(VAR_5), ((void*)0));
  }
  return VAR_0;
}
