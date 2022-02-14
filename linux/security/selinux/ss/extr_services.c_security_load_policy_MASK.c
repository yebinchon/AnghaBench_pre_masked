
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sidtab_convert_params {struct sidtab* target; struct convert_context_args* args; int func; } ;
struct sidtab {size_t len; scalar_t__ mls_enabled; } ;
struct selinux_state {int initialized; int avc; TYPE_1__* ss; } ;
struct selinux_mapping {size_t len; scalar_t__ mls_enabled; } ;
struct selinux_map {struct sidtab* mapping; int size; } ;
struct policydb {size_t len; scalar_t__ mls_enabled; } ;
struct policy_file {void* member_0; size_t member_1; } ;
struct convert_context_args {struct sidtab* newp; struct sidtab* oldp; struct selinux_state* state; } ;
struct TYPE_2__ {int policy_rwlock; scalar_t__ latest_granting; struct selinux_map map; struct sidtab* sidtab; struct sidtab policydb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_2 ;
 struct sidtab* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct sidtab*) ;
 struct sidtab* FUNC_3 (int,int ) ;
 int FUNC_4 (struct sidtab*,struct sidtab*,int) ;
 int FUNC_5 (struct sidtab*) ;
 int FUNC_6 (struct sidtab*,struct sidtab*) ;
 int FUNC_7 (struct sidtab*,struct policy_file*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int VAR_3 ;
 int FUNC_10 (struct selinux_state*) ;
 int FUNC_11 (struct selinux_state*,struct sidtab*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct sidtab*,int ,struct selinux_map*) ;
 int FUNC_15 (struct selinux_state*,scalar_t__) ;
 int FUNC_16 () ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct sidtab*,struct sidtab_convert_params*) ;
 int FUNC_19 (struct sidtab*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct selinux_state *VAR_4, void *VAR_5, size_t VAR_6)
{
 struct policydb *VAR_7;
 struct sidtab *VAR_8, *VAR_9;
 struct policydb *VAR_10, *VAR_11;
 struct selinux_mapping *VAR_12;
 struct selinux_map VAR_13;
 struct sidtab_convert_params VAR_14;
 struct convert_context_args VAR_15;
 u32 VAR_16;
 int VAR_17 = 0;
 struct policy_file VAR_18 = { VAR_5, VAR_6 }, *VAR_19 = &VAR_18;

 VAR_10 = FUNC_1(2, sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  VAR_17 = -VAR_0;
  goto out;
 }
 VAR_11 = VAR_10 + 1;

 VAR_7 = &VAR_4->ss->policydb;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
 if (!VAR_9) {
  VAR_17 = -VAR_0;
  goto out;
 }

 if (!VAR_4->initialized) {
  VAR_17 = FUNC_7(VAR_7, VAR_19);
  if (VAR_17) {
   FUNC_2(VAR_9);
   goto out;
  }

  VAR_7->len = VAR_6;
  VAR_17 = FUNC_14(VAR_7, VAR_3,
      &VAR_4->ss->map);
  if (VAR_17) {
   FUNC_2(VAR_9);
   FUNC_5(VAR_7);
   goto out;
  }

  VAR_17 = FUNC_6(VAR_7, VAR_9);
  if (VAR_17) {
   FUNC_2(VAR_9);
   FUNC_5(VAR_7);
   goto out;
  }

  VAR_4->ss->sidtab = VAR_9;
  FUNC_10(VAR_4);
  VAR_4->initialized = 1;
  VAR_16 = ++VAR_4->ss->latest_granting;
  FUNC_12();
  FUNC_0(VAR_4->avc, VAR_16);
  FUNC_17(VAR_16);
  FUNC_15(VAR_4, VAR_16);
  FUNC_13();
  FUNC_16();
  goto out;
 }

 VAR_17 = FUNC_7(VAR_11, VAR_19);
 if (VAR_17) {
  FUNC_2(VAR_9);
  goto out;
 }

 VAR_11->len = VAR_6;

 if (VAR_7->mls_enabled && !VAR_11->mls_enabled)
  FUNC_9("SELinux: Disabling MLS support...\n");
 else if (!VAR_7->mls_enabled && VAR_11->mls_enabled)
  FUNC_9("SELinux: Enabling MLS support...\n");

 VAR_17 = FUNC_6(VAR_11, VAR_9);
 if (VAR_17) {
  FUNC_8("SELinux:  unable to load the initial SIDs\n");
  FUNC_5(VAR_11);
  FUNC_2(VAR_9);
  goto out;
 }

 VAR_17 = FUNC_14(VAR_11, VAR_3, &VAR_13);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_11(VAR_4, VAR_11);
 if (VAR_17) {
  FUNC_8("SELinux:  unable to preserve booleans\n");
  goto err;
 }

 VAR_8 = VAR_4->ss->sidtab;





 VAR_15.state = VAR_4;
 VAR_15.oldp = VAR_7;
 VAR_15.newp = VAR_11;

 VAR_14.func = VAR_2;
 VAR_14.args = &VAR_15;
 VAR_14.target = VAR_9;

 VAR_17 = FUNC_18(VAR_8, &VAR_14);
 if (VAR_17) {
  FUNC_8("SELinux:  unable to convert the internal"
   " representation of contexts in the new SID"
   " table\n");
  goto err;
 }


 FUNC_4(VAR_10, VAR_7, sizeof(*VAR_7));


 FUNC_20(&VAR_4->ss->policy_rwlock);
 FUNC_4(VAR_7, VAR_11, sizeof(*VAR_7));
 VAR_4->ss->sidtab = VAR_9;
 FUNC_10(VAR_4);
 VAR_12 = VAR_4->ss->map.mapping;
 VAR_4->ss->map.mapping = VAR_13.mapping;
 VAR_4->ss->map.size = VAR_13.size;
 VAR_16 = ++VAR_4->ss->latest_granting;
 FUNC_21(&VAR_4->ss->policy_rwlock);


 FUNC_5(VAR_10);
 FUNC_19(VAR_8);
 FUNC_2(VAR_8);
 FUNC_2(VAR_12);

 FUNC_0(VAR_4->avc, VAR_16);
 FUNC_17(VAR_16);
 FUNC_15(VAR_4, VAR_16);
 FUNC_13();
 FUNC_16();

 VAR_17 = 0;
 goto out;

err:
 FUNC_2(VAR_13.mapping);
 FUNC_19(VAR_9);
 FUNC_2(VAR_9);
 FUNC_5(VAR_11);

out:
 FUNC_2(VAR_10);
 return VAR_17;
}
