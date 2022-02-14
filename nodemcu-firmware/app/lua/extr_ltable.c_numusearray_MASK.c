
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizearray; int * array; } ;
typedef TYPE_1__ Table ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1 (const Table *VAR_1, int *VAR_2) {
  int VAR_3;
  int VAR_4;
  int VAR_5 = 0;
  int VAR_6 = 1;
  for (VAR_3=0, VAR_4=1; VAR_3<=VAR_0; VAR_3++, VAR_4*=2) {
    int VAR_7 = 0;
    int VAR_8 = VAR_4;
    if (VAR_8 > VAR_1->sizearray) {
      VAR_8 = VAR_1->sizearray;
      if (VAR_6 > VAR_8)
        break;
    }

    for (; VAR_6 <= VAR_8; VAR_6++) {
      if (!FUNC_0(&VAR_1->array[VAR_6-1]))
        VAR_7++;
    }
    VAR_2[VAR_3] += VAR_7;
    VAR_5 += VAR_7;
  }
  return VAR_5;
}
