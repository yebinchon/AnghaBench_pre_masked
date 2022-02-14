
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ops; } ;
struct user_namespace {int level; TYPE_1__ ns; int persistent_keyring_register; int keyring_sem; int keyring_name_list; int flags; struct ucounts* ucounts; int * ucount_max; int work; int group; int owner; struct user_namespace* parent; int count; } ;
struct ucounts {int dummy; } ;
struct cred {int egid; int euid; struct user_namespace* user_ns; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct ucounts*) ;
 int VAR_6 ;
 struct ucounts* FUNC_5 (struct user_namespace*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct user_namespace*,int ) ;
 int FUNC_9 (int ,struct user_namespace*) ;
 struct user_namespace* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct user_namespace*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (struct cred*,struct user_namespace*) ;
 int FUNC_17 (struct user_namespace*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_18(struct cred *VAR_10)
{
 struct user_namespace *VAR_11, *VAR_12 = VAR_10->user_ns;
 kuid_t VAR_13 = VAR_10->euid;
 kgid_t VAR_14 = VAR_10->egid;
 struct ucounts *VAR_15;
 int VAR_16, VAR_17;

 VAR_16 = -VAR_1;
 if (VAR_12->level > 32)
  goto fail;

 VAR_15 = FUNC_5(VAR_12, VAR_13);
 if (!VAR_15)
  goto fail;







 VAR_16 = -VAR_2;
 if (FUNC_3())
  goto fail_dec;





 VAR_16 = -VAR_2;
 if (!FUNC_11(VAR_12, VAR_13) ||
     !FUNC_8(VAR_12, VAR_14))
  goto fail_dec;

 VAR_16 = -VAR_0;
 VAR_11 = FUNC_10(VAR_7, VAR_3);
 if (!VAR_11)
  goto fail_dec;

 VAR_16 = FUNC_14(&VAR_11->ns);
 if (VAR_16)
  goto fail_free;
 VAR_11->ns.ops = &VAR_8;

 FUNC_2(&VAR_11->count, 1);

 VAR_11->parent = VAR_12;
 VAR_11->level = VAR_12->level + 1;
 VAR_11->owner = VAR_13;
 VAR_11->group = VAR_14;
 FUNC_1(&VAR_11->work, VAR_6);
 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++) {
  VAR_11->ucount_max[VAR_17] = VAR_4;
 }
 VAR_11->ucounts = VAR_15;


 FUNC_12(&VAR_9);
 VAR_11->flags = VAR_12->flags;
 FUNC_13(&VAR_9);





 VAR_16 = -VAR_0;
 if (!FUNC_17(VAR_11))
  goto fail_keyring;

 FUNC_16(VAR_10, VAR_11);
 return 0;
fail_keyring:



 FUNC_15(&VAR_11->ns);
fail_free:
 FUNC_9(VAR_7, VAR_11);
fail_dec:
 FUNC_4(VAR_15);
fail:
 return VAR_16;
}
