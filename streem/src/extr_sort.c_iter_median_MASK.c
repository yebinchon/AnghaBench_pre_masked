
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sort_data {int len; int capa; int * buf; int func; } ;
typedef int strm_value ;
struct TYPE_4__ {struct sort_data* data; } ;
typedef TYPE_1__ strm_stream ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_2, strm_value VAR_3)
{
  struct sort_data* VAR_4 = VAR_2->data;

  if (VAR_4->len >= VAR_4->capa) {
    VAR_4->capa *= 2;
    VAR_4->buf = FUNC_0(VAR_4->buf, sizeof(strm_value)*VAR_4->capa);
  }
  if (FUNC_2(VAR_4->func)) {
    VAR_4->buf[VAR_4->len++] = VAR_3;
  }
  else if (FUNC_1(VAR_2, VAR_4->func, 1, &VAR_3, &VAR_4->buf[VAR_4->len++]) == VAR_0) {
    return VAR_0;
  }
  return VAR_1;
}
