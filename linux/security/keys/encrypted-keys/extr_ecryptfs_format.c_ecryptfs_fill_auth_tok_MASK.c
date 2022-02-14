
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int flags; int hash_algo; int session_key_encryption_key_bytes; scalar_t__ signature; } ;
struct TYPE_6__ {TYPE_2__ password; } ;
struct TYPE_4__ {scalar_t__ encrypted_key_size; scalar_t__* encrypted_key; } ;
struct ecryptfs_auth_tok {int version; TYPE_3__ token; TYPE_1__ session_key; int token_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int*,int *) ;
 int FUNC_1 (char*,char const*,int ) ;

int FUNC_2(struct ecryptfs_auth_tok *VAR_6,
      const char *VAR_7)
{
 int VAR_8, VAR_9;

 FUNC_0(&VAR_8, &VAR_9, ((void*)0));
 VAR_6->version = (((uint16_t)(VAR_8 << 8) & 0xFF00)
        | ((uint16_t)VAR_9 & 0x00FF));
 VAR_6->token_type = VAR_1;
 FUNC_1((char *)VAR_6->token.password.signature, VAR_7,
  VAR_2);
 VAR_6->token.password.session_key_encryption_key_bytes =
  VAR_0;






 VAR_6->token.password.flags |=
  VAR_4;

 VAR_6->session_key.encrypted_key[0] = 0;
 VAR_6->session_key.encrypted_key_size = 0;

 VAR_6->token.password.hash_algo = VAR_5;
 VAR_6->token.password.flags &= ~(VAR_3);
 return 0;
}
