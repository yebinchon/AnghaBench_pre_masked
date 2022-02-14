
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct repeat_data {scalar_t__ count; int v; } ;
typedef int strm_value ;
struct TYPE_5__ {struct repeat_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,...) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(strm_stream* VAR_1, strm_value VAR_2)
{
  struct repeat_data *VAR_3 = VAR_1->data;

  VAR_3->count--;
  if (VAR_3->count == 0) {
    FUNC_0(VAR_1, VAR_3->v, ((void*)0));
    FUNC_1(VAR_1);
  }
  else {
    FUNC_0(VAR_1, VAR_3->v, FUNC_2);
  }
  return VAR_0;
}
