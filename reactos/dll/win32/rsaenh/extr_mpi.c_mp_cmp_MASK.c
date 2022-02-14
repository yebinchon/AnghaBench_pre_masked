
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sign; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*) ;

int
FUNC_1 (const mp_int * VAR_3, const mp_int * VAR_4)
{

  if (VAR_3->sign != VAR_4->sign) {
     if (VAR_3->sign == VAR_2) {
        return VAR_1;
     } else {
        return VAR_0;
     }
  }


  if (VAR_3->sign == VAR_2) {

     return FUNC_0(VAR_4, VAR_3);
  } else {
     return FUNC_0(VAR_3, VAR_4);
  }
}
