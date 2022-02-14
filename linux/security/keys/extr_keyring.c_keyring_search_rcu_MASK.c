
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keyring_search_context {int flags; int result; int now; int cred; int possessed; int iterator; } ;
struct key {int * type; } ;
typedef int key_ref_t ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (long) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct key*) ;
 struct key* FUNC_4 (int ) ;
 long FUNC_5 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct key*,struct keyring_search_context*) ;

key_ref_t FUNC_8(key_ref_t VAR_6,
        struct keyring_search_context *VAR_7)
{
 struct key *VAR_8;
 long VAR_9;

 VAR_7->iterator = VAR_5;
 VAR_7->possessed = FUNC_2(VAR_6);
 VAR_7->result = FUNC_0(-VAR_0);

 VAR_8 = FUNC_4(VAR_6);
 FUNC_3(VAR_8);

 if (VAR_8->type != &VAR_4)
  return FUNC_0(-VAR_1);

 if (!(VAR_7->flags & VAR_2)) {
  VAR_9 = FUNC_5(VAR_6, VAR_7->cred, VAR_3);
  if (VAR_9 < 0)
   return FUNC_0(VAR_9);
 }

 VAR_7->now = FUNC_6();
 if (FUNC_7(VAR_8, VAR_7))
  FUNC_1(FUNC_4(VAR_7->result));
 return VAR_7->result;
}
