
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int sizearray; scalar_t__ node; int * array; } ;
typedef TYPE_1__ Table ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;

int FUNC_2 (Table *VAR_1) {
  unsigned int VAR_2 = VAR_1->sizearray;
  if (VAR_2 > 0 && FUNC_0(&VAR_1->array[VAR_2 - 1])) {

    unsigned int VAR_3 = 0;
    while (VAR_2 - VAR_3 > 1) {
      unsigned int VAR_4 = (VAR_3+VAR_2)/2;
      if (FUNC_0(&VAR_1->array[VAR_4 - 1])) VAR_2 = VAR_4;
      else VAR_3 = VAR_4;
    }
    return VAR_3;
  }

  else if (VAR_1->node == VAR_0)
    return VAR_2;
  else return FUNC_1(VAR_1, VAR_2);
}
