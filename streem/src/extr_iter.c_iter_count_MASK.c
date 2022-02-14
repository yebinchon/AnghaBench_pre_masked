
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct count_data {int count; } ;
typedef int strm_value ;
struct TYPE_3__ {struct count_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(strm_stream* VAR_1, strm_value VAR_2)
{
  struct count_data* VAR_3 = VAR_1->data;

  VAR_3->count++;
  return VAR_0;
}
