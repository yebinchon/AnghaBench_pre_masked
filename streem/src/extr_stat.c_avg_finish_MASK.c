
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sum_data {int sum; int c; int num; } ;
typedef int strm_value ;
struct TYPE_4__ {struct sum_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(strm_stream* VAR_1, strm_value VAR_2)
{
  struct sum_data* VAR_3 = VAR_1->data;

  FUNC_0(VAR_1, FUNC_1((VAR_3->sum+VAR_3->c)/VAR_3->num), ((void*)0));
  return VAR_0;
}
