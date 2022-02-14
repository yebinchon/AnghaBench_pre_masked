
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int rc4_key_len; } ;
struct TYPE_5__ {TYPE_1__ secure; } ;
typedef int SHA_CTX ;
typedef TYPE_2__ RDPCLIENT ;
typedef int RC4_KEY ;
typedef int MD5_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int,int *,int *) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(RDPCLIENT * VAR_2, uint8 * VAR_3, uint8 * VAR_4)
{
 uint8 VAR_5[20];
 SHA_CTX VAR_6;
 MD5_CTX VAR_7;
 RC4_KEY VAR_8;

 FUNC_6(&VAR_6);
 FUNC_7(&VAR_6, VAR_4, VAR_2->secure.rc4_key_len);
 FUNC_7(&VAR_6, VAR_0, 40);
 FUNC_7(&VAR_6, VAR_3, VAR_2->secure.rc4_key_len);
 FUNC_5(VAR_5, &VAR_6);

 FUNC_1(&VAR_7);
 FUNC_2(&VAR_7, VAR_4, VAR_2->secure.rc4_key_len);
 FUNC_2(&VAR_7, VAR_1, 48);
 FUNC_2(&VAR_7, VAR_5, 20);
 FUNC_0(VAR_3, &VAR_7);

 FUNC_4(&VAR_8, VAR_2->secure.rc4_key_len, VAR_3);
 FUNC_3(&VAR_8, VAR_2->secure.rc4_key_len, VAR_3, VAR_3);

 if (VAR_2->secure.rc4_key_len == 8)
  FUNC_8(VAR_3);
}
