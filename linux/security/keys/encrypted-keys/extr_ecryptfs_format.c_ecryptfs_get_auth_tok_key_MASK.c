
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * session_key_encryption_key; } ;
struct TYPE_4__ {TYPE_1__ password; } ;
struct ecryptfs_auth_tok {TYPE_2__ token; } ;



u8 *FUNC_0(struct ecryptfs_auth_tok *VAR_0)
{
 return VAR_0->token.password.session_key_encryption_key;
}
