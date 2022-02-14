
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* fast; } ;
typedef TYPE_1__ stbi__zhuffman ;
struct TYPE_9__ {int num_bits; size_t code_buffer; } ;
typedef TYPE_2__ stbi__zbuf ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(stbi__zbuf *VAR_1, stbi__zhuffman *VAR_2)
{
   int VAR_3,VAR_4;
   if (VAR_1->num_bits < 16) FUNC_0(VAR_1);
   VAR_3 = VAR_2->fast[VAR_1->code_buffer & VAR_0];
   if (VAR_3) {
      VAR_4 = VAR_3 >> 9;
      VAR_1->code_buffer >>= VAR_4;
      VAR_1->num_bits -= VAR_4;
      return VAR_3 & 511;
   }
   return FUNC_1(VAR_1, VAR_2);
}
