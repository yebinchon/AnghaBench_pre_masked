
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct sample_data {size_t i; size_t len; void** samples; int seed; } ;
typedef void* strm_value ;
struct TYPE_3__ {struct sample_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(strm_stream* VAR_1, strm_value VAR_2)
{
  struct sample_data* VAR_3 = VAR_1->data;
  uint32_t VAR_4;

  if (VAR_3->i < VAR_3->len) {
    VAR_3->samples[VAR_3->i++] = VAR_2;
    return VAR_0;
  }
  VAR_4 = FUNC_0(VAR_3->seed)%(VAR_3->i);
  if (VAR_4 < VAR_3->len) {
    VAR_3->samples[VAR_4] = VAR_2;
  }
  VAR_3->i++;
  return VAR_0;
}
