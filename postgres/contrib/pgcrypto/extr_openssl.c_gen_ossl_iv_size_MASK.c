
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ciph; } ;
struct TYPE_6__ {scalar_t__ ptr; } ;
struct TYPE_5__ {unsigned int block_size; } ;
typedef TYPE_2__ PX_Cipher ;
typedef TYPE_3__ OSSLCipher ;



__attribute__((used)) static unsigned
FUNC_0(PX_Cipher *VAR_0)
{
 unsigned VAR_1;
 OSSLCipher *VAR_2 = (OSSLCipher *) VAR_0->ptr;

 VAR_1 = VAR_2->ciph->block_size;
 return VAR_1;
}
