
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct crypto_skcipher** data; } ;
struct key_preparsed_payload {int datalen; TYPE_1__ payload; int data; } ;
struct crypto_skcipher {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 struct crypto_skcipher* FUNC_5 (char*,int ,int ) ;
 scalar_t__ FUNC_6 (struct crypto_skcipher*,int ,int) ;
 int FUNC_7 (struct crypto_skcipher**,int ,int) ;

__attribute__((used)) static int FUNC_8(struct key_preparsed_payload *VAR_2)
{
 struct crypto_skcipher *VAR_3;

 FUNC_3("%zu", VAR_2->datalen);

 if (VAR_2->datalen != 8)
  return -VAR_1;

 FUNC_7(&VAR_2->payload.data[2], VAR_2->data, 8);

 VAR_3 = FUNC_5("pcbc(des)", 0, VAR_0);
 if (FUNC_1(VAR_3)) {
  FUNC_4(" = %ld", FUNC_2(VAR_3));
  return FUNC_2(VAR_3);
 }

 if (FUNC_6(VAR_3, VAR_2->data, 8) < 0)
  FUNC_0();

 VAR_2->payload.data[0] = VAR_3;
 FUNC_4(" = 0");
 return 0;
}
