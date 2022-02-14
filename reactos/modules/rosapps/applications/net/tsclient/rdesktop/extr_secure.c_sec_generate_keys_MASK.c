
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int rc4_key_len; int * encrypt_key; int rc4_encrypt_key; int * decrypt_key; int rc4_decrypt_key; int * encrypt_update_key; int * decrypt_update_key; int * sign_key; } ;
struct TYPE_5__ {TYPE_1__ secure; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *,char) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(RDPCLIENT * VAR_0, uint8 * VAR_1, uint8 * VAR_2, int VAR_3)
{
 uint8 VAR_4[48];
 uint8 VAR_5[48];
 uint8 VAR_6[48];


 FUNC_2(VAR_4, VAR_1, 24);
 FUNC_2(VAR_4 + 24, VAR_2, 24);


 FUNC_4(VAR_5, VAR_4, VAR_1, VAR_2, 'A');
 FUNC_4(VAR_6, VAR_5, VAR_1, VAR_2, 'X');


 FUNC_2(VAR_0->secure.sign_key, VAR_6, 16);


 FUNC_3(VAR_0->secure.decrypt_key, &VAR_6[16], VAR_1, VAR_2);
 FUNC_3(VAR_0->secure.encrypt_key, &VAR_6[32], VAR_1, VAR_2);

 if (VAR_3 == 1)
 {
  FUNC_0(("40-bit encryption enabled\n"));
  FUNC_5(VAR_0->secure.sign_key);
  FUNC_5(VAR_0->secure.decrypt_key);
  FUNC_5(VAR_0->secure.encrypt_key);
  VAR_0->secure.rc4_key_len = 8;
 }
 else
 {
  FUNC_0(("rc_4_key_size == %d, 128-bit encryption enabled\n", VAR_3));
  VAR_0->secure.rc4_key_len = 16;
 }


 FUNC_2(VAR_0->secure.decrypt_update_key, VAR_0->secure.decrypt_key, 16);
 FUNC_2(VAR_0->secure.encrypt_update_key, VAR_0->secure.encrypt_key, 16);


 FUNC_1(&VAR_0->secure.rc4_decrypt_key, VAR_0->secure.rc4_key_len, VAR_0->secure.decrypt_key);
 FUNC_1(&VAR_0->secure.rc4_encrypt_key, VAR_0->secure.rc4_key_len, VAR_0->secure.encrypt_key);
}
