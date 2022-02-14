
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 struct crypto_aead* FUNC_0 (char*,int const*,size_t,int ) ;

__attribute__((used)) static inline struct crypto_aead *
FUNC_1(const u8 VAR_1[], size_t VAR_2)
{
 return FUNC_0("gcm(aes)", VAR_1,
          VAR_2, VAR_0);
}
