
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_bits; unsigned int code_buffer; } ;
typedef TYPE_1__ stbi__zbuf ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(stbi__zbuf *VAR_0)
{
   do {
      FUNC_0(VAR_0->code_buffer < (1U << VAR_0->num_bits));
      VAR_0->code_buffer |= (unsigned int) FUNC_1(VAR_0) << VAR_0->num_bits;
      VAR_0->num_bits += 8;
   } while (VAR_0->num_bits <= 24);
}
