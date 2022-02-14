
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct concat_data {size_t i; size_t len; TYPE_1__** latch; } ;
typedef int strm_value ;
struct TYPE_9__ {struct concat_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int (*) (TYPE_1__*,int )) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_1, strm_value VAR_2)
{
  struct concat_data* VAR_3 = VAR_1->data;

  FUNC_0(VAR_1, VAR_2, ((void*)0));
  if (FUNC_1(VAR_3->latch[VAR_3->i])) {
    FUNC_3(VAR_3->latch[VAR_3->i]);
    VAR_3->i++;
  }
  if (VAR_3->i < VAR_3->len) {
    FUNC_2(VAR_3->latch[VAR_3->i], VAR_1, FUNC_4);
  }
  else {
    FUNC_3(VAR_1);
  }
  return VAR_0;
}
