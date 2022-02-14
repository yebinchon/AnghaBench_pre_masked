
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float x; } ;
typedef scalar_t__ GLdouble ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__**,scalar_t__**,scalar_t__**) ;

__attribute__((used)) static void FUNC_2(void)
{
   int VAR_3;
   GLdouble VAR_4[4][4],VAR_5[4][4], VAR_6[4][4];
   FUNC_0(VAR_0 , VAR_4[0]);
   FUNC_0(VAR_1, VAR_5[0]);
   FUNC_1(VAR_6, VAR_5, VAR_4);
   for (VAR_3=0; VAR_3 < 4; ++VAR_3) {
      (&VAR_2[0].x)[VAR_3] = (float) (VAR_6[3][VAR_3] + VAR_6[0][VAR_3]);
      (&VAR_2[1].x)[VAR_3] = (float) (VAR_6[3][VAR_3] - VAR_6[0][VAR_3]);
      (&VAR_2[2].x)[VAR_3] = (float) (VAR_6[3][VAR_3] + VAR_6[1][VAR_3]);
      (&VAR_2[3].x)[VAR_3] = (float) (VAR_6[3][VAR_3] - VAR_6[1][VAR_3]);
      (&VAR_2[4].x)[VAR_3] = (float) (VAR_6[3][VAR_3] + VAR_6[2][VAR_3]);
      (&VAR_2[5].x)[VAR_3] = (float) (VAR_6[3][VAR_3] - VAR_6[2][VAR_3]);
   }
}
