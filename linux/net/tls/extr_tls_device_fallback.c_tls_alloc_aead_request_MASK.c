
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct crypto_aead*) ;
 struct aead_request* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct aead_request*,struct crypto_aead*) ;

__attribute__((used)) static struct aead_request *FUNC_3(struct crypto_aead *VAR_0,
         gfp_t VAR_1)
{
 unsigned int VAR_2 = sizeof(struct aead_request) +
  FUNC_0(VAR_0);
 struct aead_request *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3)
  FUNC_2(VAR_3, VAR_0);
 return VAR_3;
}
