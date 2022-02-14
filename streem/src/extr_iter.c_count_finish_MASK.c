
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct count_data {int count; } ;
typedef int strm_value ;
struct TYPE_4__ {struct count_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (struct count_data*) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(strm_stream* VAR_1, strm_value VAR_2)
{
  struct count_data* VAR_3 = VAR_1->data;

  FUNC_1(VAR_1, FUNC_2(VAR_3->count), ((void*)0));
  FUNC_0(VAR_3);
  return VAR_0;
}
