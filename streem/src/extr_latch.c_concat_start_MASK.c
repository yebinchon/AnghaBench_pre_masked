
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct concat_data {size_t i; int * latch; } ;
typedef int strm_value ;
struct TYPE_4__ {struct concat_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_1(strm_stream* VAR_2, strm_value VAR_3)
{
  struct concat_data* VAR_4 = VAR_2->data;

  if (VAR_4) {
    FUNC_0(VAR_4->latch[VAR_4->i], VAR_2, VAR_1);
  }
  return VAR_0;
}
