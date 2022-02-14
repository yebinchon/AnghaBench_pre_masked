
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct minmax_data {int data; } ;
typedef int strm_value ;
struct TYPE_4__ {struct minmax_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static int
FUNC_1(strm_stream* VAR_1, strm_value VAR_2)
{
  struct minmax_data* VAR_3 = VAR_1->data;

  FUNC_0(VAR_1, VAR_3->data, ((void*)0));
  return VAR_0;
}
