
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (struct crypto_aead*,int *,int *,int ,int *,size_t,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int
FUNC_2(struct crypto_aead *VAR_0,
     u8 *VAR_1, u8 *VAR_2, u8 *VAR_3,
     size_t VAR_4, u8 *VAR_5)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2 + 2,
       FUNC_1((__be16 *)VAR_2),
       VAR_3, VAR_4, VAR_5);
}
