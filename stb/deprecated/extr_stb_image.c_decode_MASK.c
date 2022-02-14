
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int code_bits; int code_buffer; } ;
typedef TYPE_1__ jpeg ;
struct TYPE_7__ {int* fast; int* size; int* values; unsigned int* maxcode; int* delta; int* code; } ;
typedef TYPE_2__ huffman ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int* VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(jpeg *VAR_2, huffman *VAR_3)
{
   unsigned int VAR_4;
   int VAR_5,VAR_6;

   if (VAR_2->code_bits < 16) FUNC_1(VAR_2);



   VAR_5 = (VAR_2->code_buffer >> (32 - VAR_0)) & ((1 << VAR_0)-1);
   VAR_6 = VAR_3->fast[VAR_5];
   if (VAR_6 < 255) {
      int VAR_7 = VAR_3->size[VAR_6];
      if (VAR_7 > VAR_2->code_bits)
         return -1;
      VAR_2->code_buffer <<= VAR_7;
      VAR_2->code_bits -= VAR_7;
      return VAR_3->values[VAR_6];
   }







   VAR_4 = VAR_2->code_buffer >> 16;
   for (VAR_6=VAR_0+1 ; ; ++VAR_6)
      if (VAR_4 < VAR_3->maxcode[VAR_6])
         break;
   if (VAR_6 == 17) {

      VAR_2->code_bits -= 16;
      return -1;
   }

   if (VAR_6 > VAR_2->code_bits)
      return -1;


   VAR_5 = ((VAR_2->code_buffer >> (32 - VAR_6)) & VAR_1[VAR_6]) + VAR_3->delta[VAR_6];
   FUNC_0((((VAR_2->code_buffer) >> (32 - VAR_3->size[VAR_5])) & VAR_1[VAR_3->size[VAR_5]]) == VAR_3->code[VAR_5]);


   VAR_2->code_bits -= VAR_6;
   VAR_2->code_buffer <<= VAR_6;
   return VAR_3->values[VAR_5];
}
