
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct map_data {int func; } ;
typedef int strm_value ;
struct TYPE_5__ {struct map_data* data; } ;
typedef TYPE_1__ strm_stream ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int,int *,int *) ;

__attribute__((used)) static int
FUNC_2(strm_stream* VAR_2, strm_value VAR_3)
{
  struct map_data* VAR_4 = VAR_2->data;
  strm_value VAR_5;

  if (FUNC_1(VAR_2, VAR_4->func, 1, &VAR_3, &VAR_5) == VAR_0) {
    return VAR_0;
  }
  FUNC_0(VAR_2, VAR_5, ((void*)0));
  return VAR_1;
}
