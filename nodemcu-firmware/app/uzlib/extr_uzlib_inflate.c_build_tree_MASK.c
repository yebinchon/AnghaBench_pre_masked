
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
typedef int uint ;
typedef size_t uchar ;
struct TYPE_3__ {int* table; int* trans; } ;
typedef TYPE_1__ UZLIB_TREE ;



__attribute__((used)) static void FUNC_0 (UZLIB_TREE *VAR_0, const uchar *VAR_1, uint VAR_2) {
  ushort VAR_3[16];
  uint VAR_4, VAR_5;


  for (VAR_4 = 0; VAR_4 < 16; ++VAR_4)
    VAR_0->table[VAR_4] = 0;


  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
    VAR_0->table[VAR_1[VAR_4]]++;
  VAR_0->table[0] = 0;


  for (VAR_5 = 0, VAR_4 = 0; VAR_4 < 16; ++VAR_4) {
    VAR_3[VAR_4] = VAR_5;
    VAR_5 += VAR_0->table[VAR_4];
  }


  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
    if (VAR_1[VAR_4])
      VAR_0->trans[VAR_3[VAR_1[VAR_4]]++] = VAR_4;
  }
}
