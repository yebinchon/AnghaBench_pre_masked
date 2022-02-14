
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_6__ {int klen; int iv; int key; } ;
struct TYPE_5__ {TYPE_2__* ptr; } ;
typedef TYPE_1__ PX_Cipher ;
typedef TYPE_2__ OSSLCipher ;


 int VAR_0 ;
 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_3(PX_Cipher *VAR_1, const uint8 *VAR_2, unsigned VAR_3, const uint8 *VAR_4)
{
 OSSLCipher *VAR_5 = VAR_1->ptr;
 unsigned VAR_6 = FUNC_0(VAR_1);

 if (VAR_3 <= 128 / 8)
  VAR_5->klen = 128 / 8;
 else if (VAR_3 <= 192 / 8)
  VAR_5->klen = 192 / 8;
 else if (VAR_3 <= 256 / 8)
  VAR_5->klen = 256 / 8;
 else
  return VAR_0;

 FUNC_1(VAR_5->key, VAR_2, VAR_3);

 if (VAR_4)
  FUNC_1(VAR_5->iv, VAR_4, VAR_6);
 else
  FUNC_2(VAR_5->iv, 0, VAR_6);

 return 0;
}
