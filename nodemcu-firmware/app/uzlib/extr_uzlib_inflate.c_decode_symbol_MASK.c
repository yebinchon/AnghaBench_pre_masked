
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* table; int* trans; } ;
typedef TYPE_1__ UZLIB_TREE ;
typedef int UZLIB_DATA ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2 (UZLIB_DATA *VAR_1, UZLIB_TREE *VAR_2) {
  int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;


  do {
    VAR_4 = 2*VAR_4 + FUNC_1(VAR_1);

    if (++VAR_5 == FUNC_0(VAR_2->table))
      return VAR_0;

    VAR_3 += VAR_2->table[VAR_5];
    VAR_4 -= VAR_2->table[VAR_5];

  } while (VAR_4 >= 0);

  VAR_3 += VAR_4;
  if (VAR_3 < 0 || VAR_3 >= FUNC_0(VAR_2->trans))
    return VAR_0;

  return VAR_2->trans[VAR_3];
}
