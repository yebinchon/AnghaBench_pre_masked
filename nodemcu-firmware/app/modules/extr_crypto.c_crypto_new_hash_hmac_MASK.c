
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
typedef int lua_State ;
struct TYPE_5__ {char* k_opad; void* ctx; TYPE_2__ const* mech_info; } ;
typedef TYPE_1__ digest_user_datum_t ;
struct TYPE_6__ {size_t block_size; int ctx_size; int (* create ) (void*) ;} ;
typedef TYPE_2__ digest_mech_info_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (void*,TYPE_2__ const*,char const*,size_t,char*) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static int FUNC_9 (lua_State *VAR_1, int VAR_2)
{


  const digest_mech_info_t *VAR_3 = FUNC_1 (FUNC_4 (VAR_1, 1));
  if (!VAR_3)
    return FUNC_0 (VAR_1);

  size_t VAR_4 = 0, VAR_5 = 0, VAR_6;
  const char *VAR_7 = ((void*)0);
  uint8_t *VAR_8 = ((void*)0);

  if (VAR_2 == VAR_0)
  {
    VAR_7 = FUNC_3 (VAR_1, 2, &VAR_4);
    VAR_5 = VAR_3->block_size;
  }




  VAR_6 = sizeof(digest_user_datum_t) + VAR_3->ctx_size + VAR_5;
  digest_user_datum_t *VAR_9 = (digest_user_datum_t *)FUNC_6(VAR_1, VAR_6);
  FUNC_5(VAR_1, "crypto.hash");
  FUNC_7(VAR_1, -2);

  void *VAR_10 = VAR_9 + 1;
  VAR_3->create (VAR_10);

  if (VAR_2 == VAR_0) {

    VAR_8 = (char *)VAR_10 + VAR_3->ctx_size;
    FUNC_2 (VAR_10, VAR_3, VAR_7, VAR_4, VAR_8);
  }


  VAR_9->mech_info = VAR_3;
  VAR_9->ctx = VAR_10;
  VAR_9->k_opad = VAR_8;

  return 1;
}
