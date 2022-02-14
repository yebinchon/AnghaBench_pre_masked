
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int code_bits; unsigned int code_buffer; } ;
typedef TYPE_1__ stbi__jpeg ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(stbi__jpeg *VAR_0)
{
   unsigned int VAR_1;
   if (VAR_0->code_bits < 1) FUNC_0(VAR_0);
   VAR_1 = VAR_0->code_buffer;
   VAR_0->code_buffer <<= 1;
   --VAR_0->code_bits;
   return VAR_1 & 0x80000000;
}
