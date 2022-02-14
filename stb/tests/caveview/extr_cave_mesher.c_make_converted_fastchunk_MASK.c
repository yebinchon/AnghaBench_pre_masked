
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int refcount; unsigned char** blockdata; unsigned char** data; } ;
typedef TYPE_1__ fast_chunk ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(fast_chunk *VAR_1, int VAR_2, int VAR_3, int VAR_4, uint8 *VAR_5, uint8 *VAR_6)
{
   int VAR_7;
   FUNC_0(VAR_1 == ((void*)0) || (VAR_1->refcount > 0 && VAR_1->refcount < 64));
   if (VAR_1 == ((void*)0) || VAR_1->blockdata[VAR_4] == ((void*)0)) {
      for (VAR_7=0; VAR_7 < 16; ++VAR_7) {
         VAR_5[VAR_7] = VAR_0;
         VAR_6[VAR_7] = 255;
      }
   } else {
      unsigned char *VAR_8 = VAR_1->blockdata[VAR_4];
      unsigned char *VAR_9 = VAR_1->data[VAR_4];
      VAR_3 = 15-VAR_3;
      for (VAR_7=0; VAR_7 < 16; ++VAR_7) {
         VAR_5[VAR_7] = VAR_8[VAR_7*256 + VAR_3*16 + VAR_2];
         VAR_6 [VAR_7] = VAR_9 [VAR_7*256 + VAR_3*16 + VAR_2];
      }
   }
}
