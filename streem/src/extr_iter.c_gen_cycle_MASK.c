
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct cycle_data {scalar_t__ count; int ary; } ;
typedef int strm_value ;
struct TYPE_5__ {struct cycle_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef size_t strm_int ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,...) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_1, strm_value VAR_2)
{
  struct cycle_data *VAR_3 = VAR_1->data;
  strm_value* VAR_4;
  strm_int VAR_5, VAR_6;

  VAR_3->count--;
  VAR_4 = FUNC_1(VAR_3->ary);
  VAR_6 = FUNC_0(VAR_3->ary);
  if (VAR_3->count != 0) {
    VAR_6--;
  }
  for (VAR_5=0; VAR_5<VAR_6; VAR_5++) {
    FUNC_2(VAR_1, VAR_4[VAR_5], ((void*)0));
  }
  if (VAR_3->count == 0) {
    FUNC_3(VAR_1);
  }
  else {
    FUNC_2(VAR_1, VAR_4[VAR_5], FUNC_4);
  }
  return VAR_0;
}
