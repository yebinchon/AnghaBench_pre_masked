
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* X; int* buf; } ;
typedef TYPE_1__ md2_state ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(md2_state *VAR_1)
{
   int VAR_2, VAR_3;
   unsigned char VAR_4;


   for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
       VAR_1->X[16+VAR_2] = VAR_1->buf[VAR_2];
       VAR_1->X[32+VAR_2] = VAR_1->X[VAR_2] ^ VAR_1->X[16+VAR_2];
   }

   VAR_4 = 0;


   for (VAR_2 = 0; VAR_2 < 18; VAR_2++) {
       for (VAR_3 = 0; VAR_3 < 48; VAR_3++) {
           VAR_4 = (VAR_1->X[VAR_3] ^= VAR_0[(int)(VAR_4 & 255)]);
       }
       VAR_4 = (VAR_4 + (unsigned char)VAR_2) & 255;
   }
}
