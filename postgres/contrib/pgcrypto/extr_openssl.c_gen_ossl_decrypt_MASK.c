
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_5__ {int init; int evp_ctx; int * iv; int * key; int klen; int * evp_ciph; } ;
struct TYPE_4__ {TYPE_2__* ptr; } ;
typedef TYPE_1__ PX_Cipher ;
typedef TYPE_2__ OSSLCipher ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *) ;
 int FUNC_2 (int ,int *,int*,int const*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(PX_Cipher *VAR_2, const uint8 *VAR_3, unsigned VAR_4,
     uint8 *VAR_5)
{
 OSSLCipher *VAR_6 = VAR_2->ptr;
 int VAR_7;

 if (!VAR_6->init)
 {
  if (!FUNC_1(VAR_6->evp_ctx, VAR_6->evp_ciph, ((void*)0), ((void*)0), ((void*)0)))
   return VAR_0;
  if (!FUNC_0(VAR_6->evp_ctx, VAR_6->klen))
   return VAR_0;
  if (!FUNC_1(VAR_6->evp_ctx, ((void*)0), ((void*)0), VAR_6->key, VAR_6->iv))
   return VAR_0;
  VAR_6->init = 1;
 }

 if (!FUNC_2(VAR_6->evp_ctx, VAR_5, &VAR_7, VAR_3, VAR_4))
  return VAR_1;

 return 0;
}
