
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sortby_value {int dummy; } ;
struct sortby_data {int len; int capa; TYPE_2__* buf; int func; int strm; } ;
typedef int strm_value ;
struct TYPE_5__ {struct sortby_data* data; } ;
typedef TYPE_1__ strm_stream ;
struct TYPE_6__ {int v; int o; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int,int *,int *) ;

__attribute__((used)) static int
FUNC_2(strm_stream* VAR_2, strm_value VAR_3)
{
  struct sortby_data* VAR_4 = VAR_2->data;

  if (VAR_4->len >= VAR_4->capa) {
    VAR_4->capa *= 2;
    VAR_4->buf = FUNC_0(VAR_4->buf, sizeof(struct sortby_value)*VAR_4->capa);
  }
  VAR_4->buf[VAR_4->len].o = VAR_3;
  if (FUNC_1(VAR_4->strm, VAR_4->func, 1, &VAR_3, &VAR_4->buf[VAR_4->len].v) == VAR_0) {
    return VAR_0;;
  }
  VAR_4->len++;
  return VAR_1;
}
