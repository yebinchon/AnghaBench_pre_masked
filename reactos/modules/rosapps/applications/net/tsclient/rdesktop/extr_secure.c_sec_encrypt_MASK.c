
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_5__ {int encrypt_use_count; int rc4_encrypt_key; int encrypt_key; int rc4_key_len; int encrypt_update_key; } ;
struct TYPE_6__ {TYPE_1__ secure; } ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (int *,int,int *,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(RDPCLIENT * VAR_0, uint8 * VAR_1, int VAR_2)
{
 if (VAR_0->secure.encrypt_use_count == 4096)
 {
  FUNC_2(VAR_0, VAR_0->secure.encrypt_key, VAR_0->secure.encrypt_update_key);
  FUNC_1(&VAR_0->secure.rc4_encrypt_key, VAR_0->secure.rc4_key_len, VAR_0->secure.encrypt_key);
  VAR_0->secure.encrypt_use_count = 0;
 }

 FUNC_0(&VAR_0->secure.rc4_encrypt_key, VAR_2, VAR_1, VAR_1);
 VAR_0->secure.encrypt_use_count++;
}
