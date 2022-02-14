
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* table; int* trans; } ;
typedef TYPE_1__ UZLIB_TREE ;



__attribute__((used)) static void FUNC_0 (UZLIB_TREE *VAR_0, UZLIB_TREE *VAR_1) {
  int VAR_2;


  for (VAR_2 = 0; VAR_2 < 7; ++VAR_2) VAR_0->table[VAR_2] = 0;

  VAR_0->table[7] = 24;
  VAR_0->table[8] = 152;
  VAR_0->table[9] = 112;

  for (VAR_2 = 0; VAR_2 < 24; ++VAR_2) VAR_0->trans[VAR_2] = 256 + VAR_2;
  for (VAR_2 = 0; VAR_2 < 144; ++VAR_2) VAR_0->trans[24 + VAR_2] = VAR_2;
  for (VAR_2 = 0; VAR_2 < 8; ++VAR_2) VAR_0->trans[24 + 144 + VAR_2] = 280 + VAR_2;
  for (VAR_2 = 0; VAR_2 < 112; ++VAR_2) VAR_0->trans[24 + 144 + 8 + VAR_2] = 144 + VAR_2;


  for (VAR_2 = 0; VAR_2 < 5; ++VAR_2) VAR_1->table[VAR_2] = 0;
  VAR_1->table[5] = 32;

  for (VAR_2 = 0; VAR_2 < 32; ++VAR_2) VAR_1->trans[VAR_2] = VAR_2;
}
