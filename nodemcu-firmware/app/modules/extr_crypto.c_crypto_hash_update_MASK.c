
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int ctx; TYPE_2__* mech_info; } ;
typedef TYPE_1__ digest_user_datum_t ;
struct TYPE_4__ {int (* update ) (int ,char const*,size_t) ;} ;
typedef TYPE_2__ digest_mech_info_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int,size_t*) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int ,char const*,size_t) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_0)
{
  FUNC_0("enter crypto_hash_update.\n");
  digest_user_datum_t *VAR_1;
  size_t VAR_2;

  VAR_1 = (digest_user_datum_t *)FUNC_2(VAR_0, 1, "crypto.hash");

  const digest_mech_info_t *VAR_3 = VAR_1->mech_info;

  size_t VAR_4 = 0;
  const char *VAR_5 = FUNC_1 (VAR_0, 2, &VAR_4);

  VAR_3->update (VAR_1->ctx, VAR_5, VAR_4);

  return 0;
}
