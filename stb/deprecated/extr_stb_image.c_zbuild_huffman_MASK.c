
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* fast; int* firstcode; int* firstsymbol; int* maxcode; size_t* size; void** value; } ;
typedef TYPE_1__ zhuffman ;
typedef size_t stbi__uint8 ;
typedef void* stbi__uint16 ;
typedef int sizes ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int*,int,int) ;

__attribute__((used)) static int FUNC_4(zhuffman *VAR_1, stbi__uint8 *VAR_2, int VAR_3)
{
   int VAR_4,VAR_5=0;
   int VAR_6, VAR_7[16], VAR_8[17];


   FUNC_3(VAR_8, 0, sizeof(VAR_8));
   FUNC_3(VAR_1->fast, 255, sizeof(VAR_1->fast));
   for (VAR_4=0; VAR_4 < VAR_3; ++VAR_4)
      ++VAR_8[VAR_2[VAR_4]];
   VAR_8[0] = 0;
   for (VAR_4=1; VAR_4 < 16; ++VAR_4)
      FUNC_0(VAR_8[VAR_4] <= (1 << VAR_4));
   VAR_6 = 0;
   for (VAR_4=1; VAR_4 < 16; ++VAR_4) {
      VAR_7[VAR_4] = VAR_6;
      VAR_1->firstcode[VAR_4] = (stbi__uint16) VAR_6;
      VAR_1->firstsymbol[VAR_4] = (stbi__uint16) VAR_5;
      VAR_6 = (VAR_6 + VAR_8[VAR_4]);
      if (VAR_8[VAR_4])
         if (VAR_6-1 >= (1 << VAR_4)) return FUNC_2("bad codelengths","Corrupt JPEG");
      VAR_1->maxcode[VAR_4] = VAR_6 << (16-VAR_4);
      VAR_6 <<= 1;
      VAR_5 += VAR_8[VAR_4];
   }
   VAR_1->maxcode[16] = 0x10000;
   for (VAR_4=0; VAR_4 < VAR_3; ++VAR_4) {
      int VAR_9 = VAR_2[VAR_4];
      if (VAR_9) {
         int VAR_10 = VAR_7[VAR_9] - VAR_1->firstcode[VAR_9] + VAR_1->firstsymbol[VAR_9];
         VAR_1->size[VAR_10] = (stbi__uint8)VAR_9;
         VAR_1->value[VAR_10] = (stbi__uint16)VAR_4;
         if (VAR_9 <= VAR_0) {
            int VAR_11 = FUNC_1(VAR_7[VAR_9],VAR_9);
            while (VAR_11 < (1 << VAR_0)) {
               VAR_1->fast[VAR_11] = (stbi__uint16) VAR_10;
               VAR_11 += (1 << VAR_9);
            }
         }
         ++VAR_7[VAR_9];
      }
   }
   return 1;
}
