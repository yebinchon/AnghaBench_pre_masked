
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ server_nonce; scalar_t__ client_final_nonce; scalar_t__ client_nonce; } ;
typedef TYPE_1__ scram_state ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_2(scram_state *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->client_nonce);
 int VAR_2 = FUNC_1(VAR_0->server_nonce);
 int VAR_3 = FUNC_1(VAR_0->client_final_nonce);

 if (VAR_3 != VAR_1 + VAR_2)
  return 0;
 if (FUNC_0(VAR_0->client_final_nonce, VAR_0->client_nonce, VAR_1) != 0)
  return 0;
 if (FUNC_0(VAR_0->client_final_nonce + VAR_1, VAR_0->server_nonce, VAR_2) != 0)
  return 0;

 return 1;
}
