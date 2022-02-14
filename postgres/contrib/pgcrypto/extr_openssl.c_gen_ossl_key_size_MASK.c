
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ciph; } ;
struct TYPE_6__ {scalar_t__ ptr; } ;
struct TYPE_5__ {int max_key_size; } ;
typedef TYPE_2__ PX_Cipher ;
typedef TYPE_3__ OSSLCipher ;



__attribute__((used)) static unsigned
FUNC_0(PX_Cipher *VAR_0)
{
 OSSLCipher *VAR_1 = (OSSLCipher *) VAR_0->ptr;

 return VAR_1->ciph->max_key_size;
}
