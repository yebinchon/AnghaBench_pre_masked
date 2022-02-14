
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct take_data {scalar_t__ n; } ;
typedef int strm_value ;
struct TYPE_4__ {struct take_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_1(strm_stream* VAR_1, strm_value VAR_2)
{
  struct take_data* VAR_3 = VAR_1->data;

  if (VAR_3->n > 0) {
    VAR_3->n--;
    return VAR_0;
  }
  FUNC_0(VAR_1, VAR_2, ((void*)0));
  return VAR_0;
}
