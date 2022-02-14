
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct map_data {int func; } ;
typedef int strm_value ;
struct TYPE_6__ {struct map_data* data; } ;
typedef TYPE_1__ strm_stream ;
typedef size_t strm_int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int,int *,int *) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static int
FUNC_6(strm_stream* VAR_2, strm_value VAR_3)
{
  struct map_data* VAR_4 = VAR_2->data;
  strm_value VAR_5;
  strm_int VAR_6, VAR_7;
  strm_value* VAR_8;

  if (FUNC_4(VAR_2, VAR_4->func, 1, &VAR_3, &VAR_5) == VAR_0) {
    return VAR_0;
  }
  if (!FUNC_0(VAR_5)) {
    FUNC_5(VAR_2, "no array given for flatmap");
    return VAR_0;
  }
  VAR_7 = FUNC_1(VAR_5);
  VAR_8 = FUNC_2(VAR_5);
  for (VAR_6=0; VAR_6<VAR_7; VAR_6++){
    FUNC_3(VAR_2, VAR_8[VAR_6], ((void*)0));
  }
  return VAR_1;
}
