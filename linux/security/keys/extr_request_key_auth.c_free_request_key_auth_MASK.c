
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_key_auth {struct request_key_auth* callout_info; scalar_t__ cred; int dest_keyring; int target_key; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct request_key_auth*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct request_key_auth *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->target_key);
 FUNC_0(VAR_0->dest_keyring);
 if (VAR_0->cred)
  FUNC_2(VAR_0->cred);
 FUNC_1(VAR_0->callout_info);
 FUNC_1(VAR_0);
}
