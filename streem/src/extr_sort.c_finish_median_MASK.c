
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sort_data {struct sort_data* buf; int len; } ;
typedef int strm_value ;
struct TYPE_4__ {struct sort_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (struct sort_data*) ;
 int FUNC_1 (struct sort_data*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_1, strm_value VAR_2)
{
  struct sort_data* VAR_3 = VAR_1->data;
  strm_value VAR_4;

  VAR_4 = FUNC_1(VAR_3->buf, VAR_3->len);
  FUNC_0(VAR_3->buf);
  FUNC_2(VAR_1, VAR_4, ((void*)0));
  FUNC_0(VAR_3);
  return VAR_0;
}
