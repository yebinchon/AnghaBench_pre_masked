
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_shash {int dummy; } ;


 int FUNC_0 (char*,int *,...) ;
 int FUNC_1 (struct crypto_shash*,int const*,int const*,int,int *) ;

__attribute__((used)) static int FUNC_2(struct crypto_shash *VAR_0, const u8 VAR_1[16],
    const u8 VAR_2[4], u8 VAR_3[16])
{
 int VAR_4;

 FUNC_0("w %16phN key_id %4phN", VAR_1, VAR_2);

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, 4, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_0("res %16phN", VAR_3);

 return VAR_4;
}
