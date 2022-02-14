
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sortby_value {int dummy; } ;
struct sortby_data {size_t len; struct sortby_data* buf; int o; } ;
typedef int strm_value ;
struct TYPE_4__ {struct sortby_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef size_t strm_int ;


 int VAR_0 ;
 int FUNC_0 (struct sortby_data*) ;
 int FUNC_1 (struct sortby_data*,size_t,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_2, strm_value VAR_3)
{
  struct sortby_data* VAR_4 = VAR_2->data;
  strm_int VAR_5, VAR_6;

  FUNC_1(VAR_4->buf, VAR_4->len, sizeof(struct sortby_value), VAR_1);
  for (VAR_5=0,VAR_6=VAR_4->len; VAR_5<VAR_6; VAR_5++) {
    FUNC_2(VAR_2, VAR_4->buf[VAR_5].o, ((void*)0));
  }
  FUNC_0(VAR_4->buf);
  FUNC_0(VAR_4);
  return VAR_0;
}
