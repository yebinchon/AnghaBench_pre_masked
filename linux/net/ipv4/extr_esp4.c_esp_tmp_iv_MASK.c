
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
struct crypto_aead {int dummy; } ;


 void* FUNC_0 (void*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct crypto_aead*) ;
 scalar_t__ FUNC_2 (struct crypto_aead*) ;

__attribute__((used)) static inline u8 *FUNC_3(struct crypto_aead *VAR_0, void *VAR_1, int VAR_2)
{
 return FUNC_2(VAR_0) ?
        FUNC_0((u8 *)VAR_1 + VAR_2,
    FUNC_1(VAR_0) + 1) : VAR_1 + VAR_2;
}
