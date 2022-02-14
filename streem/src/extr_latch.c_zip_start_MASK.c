
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct zip_data {int * latch; int len; int a; scalar_t__ i; } ;
typedef int strm_value ;
struct TYPE_4__ {struct zip_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(strm_stream* VAR_2, strm_value VAR_3)
{
  struct zip_data* VAR_4 = VAR_2->data;

  if (VAR_4) {
    VAR_4->i = 0;
    VAR_4->a = FUNC_0(((void*)0), VAR_4->len);
    FUNC_1(VAR_4->latch[0], VAR_2, VAR_1);
  }
  return VAR_0;
}
