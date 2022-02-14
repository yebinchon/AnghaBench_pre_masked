
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ used; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;
 unsigned long FUNC_0 (TYPE_1__ const*,int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;

unsigned long FUNC_2(const mp_int * VAR_2)
{
  int VAR_3;
  unsigned long VAR_4;

  if (VAR_2->used == 0) {
     return 0;
  }


  VAR_3 = FUNC_1(VAR_2->used,(int)((sizeof(unsigned long)*VAR_0+VAR_1-1)/VAR_1))-1;


  VAR_4 = FUNC_0(VAR_2,VAR_3);

  while (--VAR_3 >= 0) {
    VAR_4 = (VAR_4 << VAR_1) | FUNC_0(VAR_2,VAR_3);
  }


  return VAR_4 & 0xFFFFFFFFUL;
}
