
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int code_bits; unsigned int code_buffer; } ;
typedef TYPE_1__ stbi__jpeg ;


 unsigned int* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (unsigned int,int) ;

__attribute__((used)) static int FUNC_2(stbi__jpeg *VAR_1, int VAR_2)
{
   unsigned int VAR_3;
   if (VAR_1->code_bits < VAR_2) FUNC_0(VAR_1);
   VAR_3 = FUNC_1(VAR_1->code_buffer, VAR_2);
   VAR_1->code_buffer = VAR_3 & ~VAR_0[VAR_2];
   VAR_3 &= VAR_0[VAR_2];
   VAR_1->code_bits -= VAR_2;
   return VAR_3;
}
