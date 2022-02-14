
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct slice_data {scalar_t__ n; scalar_t__ i; void** buf; } ;
typedef void* strm_value ;
struct TYPE_4__ {struct slice_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef scalar_t__ strm_int ;
typedef int strm_array ;


 int VAR_0 ;
 int FUNC_0 (void**,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_1, strm_value VAR_2)
{
  struct slice_data* VAR_3 = VAR_1->data;
  strm_int VAR_4 = VAR_3->n;

  if (VAR_3->i < VAR_4) {
    VAR_3->buf[VAR_3->i++] = VAR_2;
    if (VAR_3->i == VAR_4) {
      strm_array VAR_5 = FUNC_0(VAR_3->buf, VAR_4);
      FUNC_2(VAR_1, FUNC_1(VAR_5), ((void*)0));
    }
    return VAR_0;
  }
  else {
    strm_array VAR_6;
    strm_int VAR_7;
    strm_int VAR_8 = VAR_4-1;

    for (VAR_7=0; VAR_7<VAR_8; VAR_7++) {
      VAR_3->buf[VAR_7] = VAR_3->buf[VAR_7+1];
    }
    VAR_3->buf[VAR_8] = VAR_2;
    VAR_6 = FUNC_0(VAR_3->buf, VAR_4);
    FUNC_2(VAR_1, FUNC_1(VAR_6), ((void*)0));
  }
  return VAR_0;
}
