
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lua_State ;
struct TYPE_4__ {int ctx; scalar_t__ k_opad; TYPE_2__* mech_info; } ;
typedef TYPE_1__ digest_user_datum_t ;
struct TYPE_5__ {int digest_size; int (* finalize ) (int *,int ) ;} ;
typedef TYPE_2__ digest_mech_info_t ;
typedef int digest ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__ const*,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_0)
{
  FUNC_0("enter crypto_hash_update.\n");
  digest_user_datum_t *VAR_1;
  size_t VAR_2;

  VAR_1 = (digest_user_datum_t *)FUNC_2(VAR_0, 1, "crypto.hash");

  const digest_mech_info_t *VAR_3 = VAR_1->mech_info;

  uint8_t VAR_4[VAR_3->digest_size];
  if (VAR_1->k_opad)
    FUNC_1 (VAR_1->ctx, VAR_3, VAR_1->k_opad, VAR_4);
  else
    VAR_3->finalize (VAR_4, VAR_1->ctx);

  FUNC_3 (VAR_0, VAR_4, sizeof (VAR_4));
  return 1;
}
