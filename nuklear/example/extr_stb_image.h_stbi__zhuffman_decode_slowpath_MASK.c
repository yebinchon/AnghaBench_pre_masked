
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* maxcode; int* firstcode; int* firstsymbol; int* size; int* value; } ;
typedef TYPE_1__ stbi__zhuffman ;
struct TYPE_6__ {int code_buffer; int num_bits; } ;
typedef TYPE_2__ stbi__zbuf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(stbi__zbuf *VAR_1, stbi__zhuffman *VAR_2)
{
   int VAR_3,VAR_4,VAR_5;


   VAR_5 = FUNC_1(VAR_1->code_buffer, 16);
   for (VAR_4=VAR_0+1; ; ++VAR_4)
      if (VAR_5 < VAR_2->maxcode[VAR_4])
         break;
   if (VAR_4 == 16) return -1;

   VAR_3 = (VAR_5 >> (16-VAR_4)) - VAR_2->firstcode[VAR_4] + VAR_2->firstsymbol[VAR_4];
   FUNC_0(VAR_2->size[VAR_3] == VAR_4);
   VAR_1->code_buffer >>= VAR_4;
   VAR_1->num_bits -= VAR_4;
   return VAR_2->value[VAR_3];
}
