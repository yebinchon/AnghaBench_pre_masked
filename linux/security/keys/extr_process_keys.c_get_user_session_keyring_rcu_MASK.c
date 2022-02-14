
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* description; int desc_len; int * type; } ;
struct TYPE_5__ {char* raw_data; int lookup_type; int cmp; } ;
struct keyring_search_context {TYPE_2__ index_key; int flags; TYPE_1__ match_data; struct cred const* cred; } ;
struct key {int dummy; } ;
struct cred {TYPE_3__* user; TYPE_4__* user_ns; } ;
typedef int key_ref_t ;
typedef int buf ;
struct TYPE_8__ {int user_keyring_register; } ;
struct TYPE_7__ {int uid; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct key* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int VAR_2 ;
 struct key* FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ,struct keyring_search_context*) ;
 int FUNC_5 (struct key*,int) ;
 int FUNC_6 (char*,int,char*,int) ;

struct key *FUNC_7(const struct cred *VAR_4)
{
 struct key *VAR_5 = FUNC_1(VAR_4->user_ns->user_keyring_register);
 key_ref_t VAR_6;
 char VAR_7[20];

 struct keyring_search_context VAR_8 = {
  .index_key.type = &VAR_3,
  .index_key.description = VAR_7,
  .cred = VAR_4,
  .match_data.cmp = VAR_2,
  .match_data.raw_data = VAR_7,
  .match_data.lookup_type = VAR_1,
  .flags = VAR_0,
 };

 if (!VAR_5)
  return ((void*)0);

 VAR_8.index_key.desc_len = FUNC_6(VAR_7, sizeof(VAR_7), "_uid_ses.%u",
       FUNC_2(VAR_4->user_ns,
          VAR_4->user->uid));

 VAR_6 = FUNC_4(FUNC_5(VAR_5, 1),
            &VAR_8);
 if (FUNC_0(VAR_6))
  return ((void*)0);
 return FUNC_3(VAR_6);
}
