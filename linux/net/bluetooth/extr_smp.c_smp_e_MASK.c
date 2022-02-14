
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int const u8 ;
struct crypto_aes_ctx {int dummy; } ;
typedef int ctx ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int const*,...) ;
 int FUNC_2 (struct crypto_aes_ctx*,int const*,int const*) ;
 int FUNC_3 (struct crypto_aes_ctx*,int const*,int) ;
 int FUNC_4 (struct crypto_aes_ctx*,int) ;
 int FUNC_5 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_6(const u8 *VAR_0, u8 *VAR_1)
{
 struct crypto_aes_ctx VAR_2;
 uint8_t VAR_3[16], VAR_4[16];
 int VAR_5;

 FUNC_1("k %16phN r %16phN", VAR_0, VAR_1);


 FUNC_5(VAR_0, VAR_3, 16);

 VAR_5 = FUNC_3(&VAR_2, VAR_3, 16);
 if (VAR_5) {
  FUNC_0("cipher setkey failed: %d", VAR_5);
  return VAR_5;
 }


 FUNC_5(VAR_1, VAR_4, 16);

 FUNC_2(&VAR_2, VAR_4, VAR_4);


 FUNC_5(VAR_4, VAR_1, 16);

 FUNC_1("r %16phN", VAR_1);

 FUNC_4(&VAR_2, sizeof (VAR_2));
 return VAR_5;
}
