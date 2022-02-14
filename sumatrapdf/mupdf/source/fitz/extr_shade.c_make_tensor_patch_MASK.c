
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void*** pole; } ;
typedef TYPE_1__ tensor_patch ;
typedef void* fz_point ;


 void* FUNC_0 (void*,void*,void*,void*,void*,void*,void*,void*) ;

__attribute__((used)) static void
FUNC_1(tensor_patch *VAR_0, int VAR_1, fz_point *VAR_2)
{
 if (VAR_1 == 6)
 {


  VAR_0->pole[0][0] = VAR_2[0];
  VAR_0->pole[0][1] = VAR_2[1];
  VAR_0->pole[0][2] = VAR_2[2];
  VAR_0->pole[0][3] = VAR_2[3];
  VAR_0->pole[1][3] = VAR_2[4];
  VAR_0->pole[2][3] = VAR_2[5];
  VAR_0->pole[3][3] = VAR_2[6];
  VAR_0->pole[3][2] = VAR_2[7];
  VAR_0->pole[3][1] = VAR_2[8];
  VAR_0->pole[3][0] = VAR_2[9];
  VAR_0->pole[2][0] = VAR_2[10];
  VAR_0->pole[1][0] = VAR_2[11];



  VAR_0->pole[1][1] = FUNC_0(
   VAR_0->pole[0][0], VAR_0->pole[0][1], VAR_0->pole[1][0], VAR_0->pole[0][3],
   VAR_0->pole[3][0], VAR_0->pole[3][1], VAR_0->pole[1][3], VAR_0->pole[3][3]);

  VAR_0->pole[1][2] = FUNC_0(
   VAR_0->pole[0][3], VAR_0->pole[0][2], VAR_0->pole[1][3], VAR_0->pole[0][0],
   VAR_0->pole[3][3], VAR_0->pole[3][2], VAR_0->pole[1][0], VAR_0->pole[3][0]);

  VAR_0->pole[2][1] = FUNC_0(
   VAR_0->pole[3][0], VAR_0->pole[3][1], VAR_0->pole[2][0], VAR_0->pole[3][3],
   VAR_0->pole[0][0], VAR_0->pole[0][1], VAR_0->pole[2][3], VAR_0->pole[0][3]);

  VAR_0->pole[2][2] = FUNC_0(
   VAR_0->pole[3][3], VAR_0->pole[3][2], VAR_0->pole[2][3], VAR_0->pole[3][0],
   VAR_0->pole[0][3], VAR_0->pole[0][2], VAR_0->pole[2][0], VAR_0->pole[0][0]);
 }
 else if (VAR_1 == 7)
 {


  VAR_0->pole[0][0] = VAR_2[0];
  VAR_0->pole[0][1] = VAR_2[1];
  VAR_0->pole[0][2] = VAR_2[2];
  VAR_0->pole[0][3] = VAR_2[3];
  VAR_0->pole[1][3] = VAR_2[4];
  VAR_0->pole[2][3] = VAR_2[5];
  VAR_0->pole[3][3] = VAR_2[6];
  VAR_0->pole[3][2] = VAR_2[7];
  VAR_0->pole[3][1] = VAR_2[8];
  VAR_0->pole[3][0] = VAR_2[9];
  VAR_0->pole[2][0] = VAR_2[10];
  VAR_0->pole[1][0] = VAR_2[11];
  VAR_0->pole[1][1] = VAR_2[12];
  VAR_0->pole[1][2] = VAR_2[13];
  VAR_0->pole[2][2] = VAR_2[14];
  VAR_0->pole[2][1] = VAR_2[15];
 }
}
