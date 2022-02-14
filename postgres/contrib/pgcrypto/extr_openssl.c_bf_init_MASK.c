
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_6__ {unsigned int klen; int iv; int key; } ;
struct TYPE_5__ {TYPE_2__* ptr; } ;
typedef TYPE_1__ PX_Cipher ;
typedef TYPE_2__ OSSLCipher ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (int ,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_4(PX_Cipher *VAR_1, const uint8 *VAR_2, unsigned VAR_3, const uint8 *VAR_4)
{
 OSSLCipher *VAR_5 = VAR_1->ptr;
 unsigned VAR_6 = FUNC_1(VAR_1);
 static int VAR_7 = -1;







 if (VAR_7 == -1)
  VAR_7 = FUNC_0();

 if (!VAR_7 && VAR_3 > 16)
  return VAR_0;


 VAR_5->klen = VAR_3;
 FUNC_2(VAR_5->key, VAR_2, VAR_3);

 if (VAR_4)
  FUNC_2(VAR_5->iv, VAR_4, VAR_6);
 else
  FUNC_3(VAR_5->iv, 0, VAR_6);
 return 0;
}
