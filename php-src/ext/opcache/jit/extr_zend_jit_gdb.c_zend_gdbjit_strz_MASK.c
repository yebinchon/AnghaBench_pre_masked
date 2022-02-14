
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int startp; scalar_t__* p; } ;
typedef TYPE_1__ zend_gdbjit_ctx ;
typedef scalar_t__ uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(zend_gdbjit_ctx *VAR_0, const char *VAR_1)
{
 uint8_t *VAR_2 = VAR_0->p;
 uint32_t VAR_3 = (uint32_t)(VAR_2 - VAR_0->startp);
 do {
  *VAR_2++ = (uint8_t)*VAR_1;
 } while (*VAR_1++);
 VAR_0->p = VAR_2;
 return VAR_3;
}
