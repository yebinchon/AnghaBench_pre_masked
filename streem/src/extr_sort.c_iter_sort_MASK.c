
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sort_data {int len; int capa; int * buf; } ;
typedef int strm_value ;
struct TYPE_3__ {struct sort_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int * FUNC_0 (int *,int) ;

__attribute__((used)) static int
FUNC_1(strm_stream* VAR_1, strm_value VAR_2)
{
  struct sort_data* VAR_3 = VAR_1->data;

  if (VAR_3->len >= VAR_3->capa) {
    VAR_3->capa *= 2;
    VAR_3->buf = FUNC_0(VAR_3->buf, sizeof(strm_value)*VAR_3->capa);
  }
  VAR_3->buf[VAR_3->len++] = VAR_2;
  return VAR_0;
}
