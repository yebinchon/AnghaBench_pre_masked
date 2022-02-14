
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* xkey; } ;
typedef TYPE_1__ rc2_key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* VAR_3 ;

int FUNC_0(const unsigned char *VAR_4, int VAR_5, int VAR_6, int VAR_7, rc2_key *VAR_8)
{
   unsigned *VAR_9 = VAR_8->xkey;
   unsigned char VAR_10[128];
   unsigned VAR_11, VAR_12;
   int VAR_13;

   if (VAR_5 < 5 || VAR_5 > 128) {
      return VAR_0;
   }

   if (VAR_7 != 0 && VAR_7 != 16) {
      return VAR_1;
   }
   if (VAR_6 <= 0) VAR_6 = VAR_5 << 3;
   if (VAR_6 > 1024) VAR_6 = 1024;

   for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
       VAR_10[VAR_13] = VAR_4[VAR_13] & 255;
   }


    if (VAR_5 < 128) {
        for (VAR_13 = VAR_5; VAR_13 < 128; VAR_13++) {
            VAR_10[VAR_13] = VAR_3[(VAR_10[VAR_13 - 1] + VAR_10[VAR_13 - VAR_5]) & 255];
        }
    }



    VAR_11 = (unsigned)(VAR_6+7)>>3;
    VAR_12 = (255 >> (unsigned)(7 & -VAR_6));
    VAR_10[128 - VAR_11] = VAR_3[VAR_10[128 - VAR_11] & VAR_12];
    for (VAR_13 = 127 - VAR_11; VAR_13 >= 0; VAR_13--) {
        VAR_10[VAR_13] = VAR_3[VAR_10[VAR_13 + 1] ^ VAR_10[VAR_13 + VAR_11]];
    }


    for (VAR_13 = 0; VAR_13 < 64; VAR_13++) {
        VAR_9[VAR_13] = (unsigned)VAR_10[2*VAR_13] + ((unsigned)VAR_10[2*VAR_13+1] << 8);
    }

    return VAR_2;
}
