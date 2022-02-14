
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_6__ {int klen; int evp_ciph; } ;
struct TYPE_5__ {TYPE_2__* ptr; } ;
typedef TYPE_1__ PX_Cipher ;
typedef TYPE_2__ OSSLCipher ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int const*,unsigned int,int const*) ;

__attribute__((used)) static int
FUNC_4(PX_Cipher *VAR_1, const uint8 *VAR_2, unsigned VAR_3, const uint8 *VAR_4)
{
 OSSLCipher *VAR_5 = VAR_1->ptr;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 switch (VAR_5->klen)
 {
  case 128 / 8:
   VAR_5->evp_ciph = FUNC_0();
   break;
  case 192 / 8:
   VAR_5->evp_ciph = FUNC_1();
   break;
  case 256 / 8:
   VAR_5->evp_ciph = FUNC_2();
   break;
  default:

   VAR_6 = VAR_0;
   break;
 }

 return VAR_6;
}
