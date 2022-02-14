
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


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_3(PX_Cipher *VAR_0, const uint8 *VAR_1, unsigned VAR_2, const uint8 *VAR_3)
{
 OSSLCipher *VAR_4 = VAR_0->ptr;
 unsigned VAR_5 = FUNC_0(VAR_0);

 VAR_4->klen = 8;
 FUNC_2(VAR_4->key, 0, 8);
 FUNC_1(VAR_4->key, VAR_1, VAR_2 > 8 ? 8 : VAR_2);

 if (VAR_3)
  FUNC_1(VAR_4->iv, VAR_3, VAR_5);
 else
  FUNC_2(VAR_4->iv, 0, VAR_5);
 return 0;
}
