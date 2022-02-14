
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sample_data {size_t len; int * samples; } ;
typedef int strm_value ;
struct TYPE_4__ {struct sample_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef size_t strm_int ;


 int VAR_0 ;
 int FUNC_0 (struct sample_data*) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_2(strm_stream* VAR_1, strm_value VAR_2)
{
  struct sample_data* VAR_3 = VAR_1->data;
  strm_int VAR_4, VAR_5=VAR_3->len;

  for (VAR_4=0; VAR_4<VAR_5; VAR_4++) {
    FUNC_1(VAR_1, VAR_3->samples[VAR_4], ((void*)0));
  }
  FUNC_0(VAR_3);
  return VAR_0;
}
