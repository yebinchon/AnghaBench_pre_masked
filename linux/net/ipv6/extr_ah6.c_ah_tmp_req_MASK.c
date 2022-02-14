
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ahash_request*,struct crypto_ahash*) ;
 int FUNC_2 (struct crypto_ahash*) ;
 int FUNC_3 () ;

__attribute__((used)) static inline struct ahash_request *FUNC_4(struct crypto_ahash *VAR_0,
            u8 *VAR_1)
{
 struct ahash_request *VAR_2;

 VAR_2 = (void *)FUNC_0(VAR_1 + FUNC_2(VAR_0),
    FUNC_3());

 FUNC_1(VAR_2, VAR_0);

 return VAR_2;
}
