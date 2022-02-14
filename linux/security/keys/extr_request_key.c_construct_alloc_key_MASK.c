
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int description; TYPE_1__* type; } ;
struct keyring_search_context {TYPE_4__ index_key; TYPE_3__* cred; } ;
struct key_user {int cons_lock; } ;
struct key {int flags; } ;
struct assoc_array_edit {int dummy; } ;
typedef struct key* key_ref_t ;
typedef int key_perm_t ;
struct TYPE_8__ {int fsgid; int fsuid; } ;
struct TYPE_7__ {scalar_t__ update; scalar_t__ read; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*,struct assoc_array_edit**) ;
 int FUNC_3 (struct key*,TYPE_4__*,struct assoc_array_edit**) ;
 int FUNC_4 (struct key*,struct key*) ;
 int FUNC_5 (struct key*,TYPE_4__*,struct assoc_array_edit*) ;
 int FUNC_6 (struct key*,TYPE_4__*) ;
 int FUNC_7 (char*,int ,int ) ;
 struct key* FUNC_8 (TYPE_1__*,int ,int ,int ,TYPE_3__*,int,unsigned long,int *) ;
 int VAR_9 ;
 int FUNC_9 (struct key*) ;
 struct key* FUNC_10 (struct key*) ;
 int FUNC_11 (struct key*) ;
 TYPE_1__ VAR_10 ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 struct key* FUNC_17 (struct keyring_search_context*) ;
 int FUNC_18 (int ,int *) ;

__attribute__((used)) static int FUNC_19(struct keyring_search_context *VAR_11,
          struct key *VAR_12,
          unsigned long VAR_13,
          struct key_user *VAR_14,
          struct key **VAR_15)
{
 struct assoc_array_edit *VAR_16 = ((void*)0);
 struct key *VAR_17;
 key_perm_t VAR_18;
 key_ref_t VAR_19;
 int VAR_20;

 FUNC_7("%s,%s,,,",
        VAR_11->index_key.type->name, VAR_11->index_key.description);

 *VAR_15 = ((void*)0);
 FUNC_13(&VAR_14->cons_lock);

 VAR_18 = VAR_6 | VAR_4 | VAR_2 | VAR_5;
 VAR_18 |= VAR_8;
 if (VAR_11->index_key.type->read)
  VAR_18 |= VAR_3;
 if (VAR_11->index_key.type == &VAR_10 ||
     VAR_11->index_key.type->update)
  VAR_18 |= VAR_7;

 VAR_17 = FUNC_8(VAR_11->index_key.type, VAR_11->index_key.description,
   VAR_11->cred->fsuid, VAR_11->cred->fsgid, VAR_11->cred,
   VAR_18, VAR_13, ((void*)0));
 if (FUNC_0(VAR_17))
  goto alloc_failed;

 FUNC_18(VAR_1, &VAR_17->flags);

 if (VAR_12) {
  VAR_20 = FUNC_6(VAR_12, &VAR_11->index_key);
  if (VAR_20 < 0)
   goto link_lock_failed;
  VAR_20 = FUNC_3(VAR_12, &VAR_11->index_key, &VAR_16);
  if (VAR_20 < 0)
   goto link_prealloc_failed;
 }




 FUNC_13(&VAR_9);

 FUNC_15();
 VAR_19 = FUNC_17(VAR_11);
 FUNC_16();
 if (!FUNC_0(VAR_19))
  goto key_already_present;

 if (VAR_12)
  FUNC_2(VAR_17, &VAR_16);

 FUNC_14(&VAR_9);
 if (VAR_12)
  FUNC_5(VAR_12, &VAR_11->index_key, VAR_16);
 FUNC_14(&VAR_14->cons_lock);
 *VAR_15 = VAR_17;
 FUNC_12(" = 0 [%d]", FUNC_11(VAR_17));
 return 0;



key_already_present:
 FUNC_9(VAR_17);
 FUNC_14(&VAR_9);
 VAR_17 = FUNC_10(VAR_19);
 if (VAR_12) {
  VAR_20 = FUNC_4(VAR_12, VAR_17);
  if (VAR_20 == 0)
   FUNC_2(VAR_17, &VAR_16);
  FUNC_5(VAR_12, &VAR_11->index_key, VAR_16);
  if (VAR_20 < 0)
   goto link_check_failed;
 }
 FUNC_14(&VAR_14->cons_lock);
 *VAR_15 = VAR_17;
 FUNC_12(" = -EINPROGRESS [%d]", FUNC_11(VAR_17));
 return -VAR_0;

link_check_failed:
 FUNC_14(&VAR_14->cons_lock);
 FUNC_9(VAR_17);
 FUNC_12(" = %d [linkcheck]", VAR_20);
 return VAR_20;

link_prealloc_failed:
 FUNC_5(VAR_12, &VAR_11->index_key, VAR_16);
link_lock_failed:
 FUNC_14(&VAR_14->cons_lock);
 FUNC_9(VAR_17);
 FUNC_12(" = %d [prelink]", VAR_20);
 return VAR_20;

alloc_failed:
 FUNC_14(&VAR_14->cons_lock);
 FUNC_12(" = %ld", FUNC_1(VAR_17));
 return FUNC_1(VAR_17);
}
