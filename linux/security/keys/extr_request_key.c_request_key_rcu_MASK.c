
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* raw_data; int lookup_type; int cmp; } ;
struct TYPE_4__ {char const* description; int desc_len; struct key_tag* domain_tag; struct key_type* type; } ;
struct keyring_search_context {int flags; TYPE_1__ match_data; int cred; TYPE_2__ index_key; } ;
struct key_type {int name; } ;
struct key_tag {int dummy; } ;
struct key {int dummy; } ;
typedef int key_ref_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct key* FUNC_0 (int ) ;
 struct key* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct key*) ;
 struct key* FUNC_5 (struct keyring_search_context*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ,char const*) ;
 int VAR_5 ;
 struct key* FUNC_8 (int ) ;
 int FUNC_9 (char*,struct key*) ;
 int FUNC_10 (struct keyring_search_context*) ;
 int FUNC_11 (char const*) ;

struct key *FUNC_12(struct key_type *VAR_6,
       const char *VAR_7,
       struct key_tag *VAR_8)
{
 struct keyring_search_context VAR_9 = {
  .index_key.type = VAR_6,
  .index_key.domain_tag = VAR_8,
  .index_key.description = VAR_7,
  .index_key.desc_len = FUNC_11(VAR_7),
  .cred = FUNC_6(),
  .match_data.cmp = VAR_5,
  .match_data.raw_data = VAR_7,
  .match_data.lookup_type = VAR_3,
  .flags = (VAR_2 |
        VAR_4),
 };
 struct key *VAR_10;
 key_ref_t VAR_11;

 FUNC_7("%s,%s", VAR_6->name, VAR_7);

 VAR_10 = FUNC_5(&VAR_9);
 if (VAR_10)
  return VAR_10;


 VAR_11 = FUNC_10(&VAR_9);
 if (FUNC_2(VAR_11)) {
  VAR_10 = FUNC_0(VAR_11);
  if (FUNC_3(VAR_11) == -VAR_0)
   VAR_10 = FUNC_1(-VAR_1);
 } else {
  VAR_10 = FUNC_8(VAR_11);
  FUNC_4(VAR_10);
 }

 FUNC_9(" = %p", VAR_10);
 return VAR_10;
}
