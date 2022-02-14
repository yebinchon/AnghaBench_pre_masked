
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int const u8 ;
struct crypto_shash {int dummy; } ;
struct TYPE_5__ {struct crypto_shash* tfm; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,struct crypto_shash*) ;
 int FUNC_2 (char*,size_t,...) ;
 int FUNC_3 (TYPE_1__*,int const*,size_t,int const*) ;
 int FUNC_4 (struct crypto_shash*,int const*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_7(struct crypto_shash *VAR_4, const u8 VAR_5[16], const u8 *VAR_6,
      size_t VAR_7, u8 VAR_8[16])
{
 uint8_t VAR_9[16], VAR_10[16], VAR_11[VAR_0];
 FUNC_1(VAR_3, VAR_4);
 int VAR_12;

 if (VAR_7 > VAR_0)
  return -VAR_1;

 if (!VAR_4) {
  FUNC_0("tfm %p", VAR_4);
  return -VAR_2;
 }

 VAR_3->tfm = VAR_4;


 FUNC_6(VAR_5, VAR_9, 16);
 FUNC_6(VAR_6, VAR_11, VAR_7);

 FUNC_2("msg (len %zu) %*phN", VAR_7, (int) VAR_7, VAR_6);
 FUNC_2("key %16phN", VAR_5);

 VAR_12 = FUNC_4(VAR_4, VAR_9, 16);
 if (VAR_12) {
  FUNC_0("cipher setkey failed: %d", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_3(VAR_3, VAR_11, VAR_7, VAR_10);
 FUNC_5(VAR_3);
 if (VAR_12) {
  FUNC_0("Hash computation error %d", VAR_12);
  return VAR_12;
 }

 FUNC_6(VAR_10, VAR_8, 16);

 FUNC_2("mac %16phN", VAR_8);

 return 0;
}
