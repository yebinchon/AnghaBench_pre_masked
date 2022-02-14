
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct enc_encoder {TYPE_1__* context; } ;
struct TYPE_2__ {size_t extradata_size; int * extradata; } ;



__attribute__((used)) static bool FUNC_0(void *VAR_0, uint8_t **VAR_1, size_t *VAR_2)
{
 struct enc_encoder *VAR_3 = VAR_0;

 *VAR_1 = VAR_3->context->extradata;
 *VAR_2 = VAR_3->context->extradata_size;
 return 1;
}
