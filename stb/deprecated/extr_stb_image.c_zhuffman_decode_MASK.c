
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* fast; int* size; int* value; int* maxcode; int* firstcode; int* firstsymbol; } ;
typedef TYPE_1__ zhuffman ;
struct TYPE_7__ {int num_bits; size_t code_buffer; } ;
typedef TYPE_2__ zbuf ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(zbuf *VAR_2, zhuffman *VAR_3)
{
   int VAR_4,VAR_5,VAR_6;
   if (VAR_2->num_bits < 16) FUNC_2(VAR_2);
   VAR_4 = VAR_3->fast[VAR_2->code_buffer & VAR_1];
   if (VAR_4 < 0xffff) {
      VAR_5 = VAR_3->size[VAR_4];
      VAR_2->code_buffer >>= VAR_5;
      VAR_2->num_bits -= VAR_5;
      return VAR_3->value[VAR_4];
   }



   VAR_6 = FUNC_1(VAR_2->code_buffer, 16);
   for (VAR_5=VAR_0+1; ; ++VAR_5)
      if (VAR_6 < VAR_3->maxcode[VAR_5])
         break;
   if (VAR_5 == 16) return -1;

   VAR_4 = (VAR_6 >> (16-VAR_5)) - VAR_3->firstcode[VAR_5] + VAR_3->firstsymbol[VAR_5];
   FUNC_0(VAR_3->size[VAR_4] == VAR_5);
   VAR_2->code_buffer >>= VAR_5;
   VAR_2->num_bits -= VAR_5;
   return VAR_3->value[VAR_4];
}
