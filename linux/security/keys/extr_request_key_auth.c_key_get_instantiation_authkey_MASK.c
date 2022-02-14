
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* description; int desc_len; int * type; } ;
struct TYPE_4__ {char* raw_data; int lookup_type; int cmp; } ;
struct keyring_search_context {int flags; TYPE_1__ index_key; TYPE_2__ match_data; int cred; } ;
struct key {int flags; } ;
typedef int key_serial_t ;
typedef int key_ref_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct key* FUNC_0 (int ) ;
 struct key* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int VAR_7 ;
 int FUNC_4 (struct key*) ;
 struct key* FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct keyring_search_context*) ;
 int FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (int ,int *) ;

struct key *FUNC_11(key_serial_t VAR_9)
{
 char VAR_10[16];
 struct keyring_search_context VAR_11 = {
  .index_key.type = &VAR_8,
  .index_key.description = VAR_10,
  .cred = FUNC_3(),
  .match_data.cmp = VAR_7,
  .match_data.raw_data = VAR_10,
  .match_data.lookup_type = VAR_4,
  .flags = (VAR_3 |
        VAR_5),
 };
 struct key *VAR_12;
 key_ref_t VAR_13;

 VAR_11.index_key.desc_len = FUNC_9(VAR_10, "%x", VAR_9);

 FUNC_6();
 VAR_13 = FUNC_8(&VAR_11);
 FUNC_7();

 if (FUNC_2(VAR_13)) {
  VAR_12 = FUNC_0(VAR_13);
  if (VAR_12 == FUNC_1(-VAR_0))
   VAR_12 = FUNC_1(-VAR_2);
  goto error;
 }

 VAR_12 = FUNC_5(VAR_13);
 if (FUNC_10(VAR_6, &VAR_12->flags)) {
  FUNC_4(VAR_12);
  VAR_12 = FUNC_1(-VAR_1);
 }

error:
 return VAR_12;
}
