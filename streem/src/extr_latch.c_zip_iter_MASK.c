
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct zip_data {size_t i; size_t len; int a; TYPE_1__** latch; } ;
typedef int strm_value ;
struct TYPE_9__ {struct zip_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef size_t strm_int ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int (*) (TYPE_1__*,int )) ;
 int FUNC_4 (TYPE_1__*) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_5(strm_stream* VAR_2, strm_value VAR_3)
{
  struct zip_data* VAR_4 = VAR_2->data;

  FUNC_0(VAR_4->a)[VAR_4->i++] = VAR_3;
  if (VAR_4->i < VAR_4->len) {
    FUNC_3(VAR_4->latch[VAR_4->i], VAR_2, FUNC_5);
  }
  else {
    strm_int VAR_5;
    strm_int VAR_6 = 0;

    for (VAR_5=0; VAR_5<VAR_4->len; VAR_5++){
      if (FUNC_2(VAR_4->latch[VAR_5])) {
        VAR_6 = 1;
        break;
      }
    }
    if (VAR_6) {
      FUNC_1(VAR_2, VAR_4->a, ((void*)0));
      for (VAR_5=0; VAR_5<VAR_4->len; VAR_5++){
        FUNC_4(VAR_4->latch[VAR_5]);
      }
      FUNC_4(VAR_2);
    }
    else {
      FUNC_1(VAR_2, VAR_4->a, VAR_1);
    }
  }
  return VAR_0;
}
