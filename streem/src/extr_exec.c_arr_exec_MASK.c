
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct array_data {scalar_t__ n; int arr; } ;
typedef int strm_value ;
struct TYPE_6__ {struct array_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int (*) (TYPE_1__*,int )) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_1, strm_value VAR_2)
{
  struct array_data *VAR_3 = VAR_1->data;

  if (VAR_3->n == FUNC_0(VAR_3->arr)) {
    FUNC_3(VAR_1);
    return VAR_0;
  }
  FUNC_2(VAR_1, FUNC_1(VAR_3->arr)[VAR_3->n++], FUNC_4);
  return VAR_0;
}
