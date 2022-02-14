
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sort_data {size_t len; struct sort_data* buf; int func; } ;
struct sort_arg {int func; TYPE_1__* strm; } ;
typedef int strm_value ;
struct TYPE_4__ {struct sort_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef size_t strm_int ;


 int VAR_0 ;
 int FUNC_0 (struct sort_data*) ;
 int FUNC_1 (struct sort_data*,size_t,struct sort_arg*) ;
 int FUNC_2 (TYPE_1__*,struct sort_data,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_1, strm_value VAR_2)
{
  struct sort_data* VAR_3 = VAR_1->data;
  strm_int VAR_4, VAR_5;

  if (FUNC_3(VAR_3->func)) {
    FUNC_1(VAR_3->buf, VAR_3->len, ((void*)0));
  }
  else {
    struct sort_arg VAR_6;

    VAR_6.strm = VAR_1;
    VAR_6.func = VAR_3->func;
    FUNC_1(VAR_3->buf, VAR_3->len, &VAR_6);
  }

  for (VAR_4=0,VAR_5=VAR_3->len; VAR_4<VAR_5; VAR_4++) {
    FUNC_2(VAR_1, VAR_3->buf[VAR_4], ((void*)0));
  }
  FUNC_0(VAR_3->buf);
  FUNC_0(VAR_3);
  return VAR_0;
}
