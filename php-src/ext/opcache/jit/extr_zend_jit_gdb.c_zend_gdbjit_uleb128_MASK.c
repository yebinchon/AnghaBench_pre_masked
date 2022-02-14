
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** p; } ;
typedef TYPE_1__ zend_gdbjit_ctx ;
typedef void* uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(zend_gdbjit_ctx *VAR_0, uint32_t VAR_1)
{
 uint8_t *VAR_2 = VAR_0->p;
 for (; VAR_1 >= 0x80; VAR_1 >>= 7)
  *VAR_2++ = (uint8_t)((VAR_1 & 0x7f) | 0x80);
 *VAR_2++ = (uint8_t)VAR_1;
 VAR_0->p = VAR_2;
}
