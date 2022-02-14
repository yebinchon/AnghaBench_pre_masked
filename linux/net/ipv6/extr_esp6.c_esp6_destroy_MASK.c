
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {struct crypto_aead* data; } ;
struct crypto_aead {int dummy; } ;


 int FUNC_0 (struct crypto_aead*) ;

__attribute__((used)) static void FUNC_1(struct xfrm_state *VAR_0)
{
 struct crypto_aead *VAR_1 = VAR_0->data;

 if (!VAR_1)
  return;

 FUNC_0(VAR_1);
}
