
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stdev_data {int mode; int s2; int s1; int num; } ;
typedef int strm_value ;
struct TYPE_4__ {struct stdev_data* data; } ;
typedef TYPE_1__ strm_stream ;


 int VAR_0 ;
 int FUNC_0 (int ,double) ;




 double FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 int FUNC_3 (double) ;

__attribute__((used)) static int
FUNC_4(strm_stream* VAR_1, strm_value VAR_2)
{
  struct stdev_data* VAR_3 = VAR_1->data;
  double VAR_4;

  switch (VAR_3->mode) {
  case 129:
    VAR_4 = FUNC_1(VAR_3->s2 / (VAR_3->num-1));
    FUNC_2(VAR_1, FUNC_3(VAR_4), ((void*)0));
    break;
  case 128:
    VAR_4 = VAR_3->s2 / (VAR_3->num-1);
    FUNC_2(VAR_1, FUNC_3(VAR_4), ((void*)0));
    break;
  case 131:
    VAR_4 = FUNC_1(VAR_3->s2 / (VAR_3->num-1));
    FUNC_2(VAR_1, FUNC_0(VAR_3->s1, VAR_4), ((void*)0));
    break;
  case 130:
    VAR_4 = VAR_3->s2 / (VAR_3->num-1);
    FUNC_2(VAR_1, FUNC_0(VAR_3->s1, VAR_4), ((void*)0));
    break;
  }
  return VAR_0;
}
