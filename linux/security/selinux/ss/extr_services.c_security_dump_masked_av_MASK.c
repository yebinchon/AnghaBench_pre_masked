
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct policydb {struct class_datum** class_val_to_struct; } ;
struct context {int dummy; } ;
struct TYPE_3__ {int table; } ;
struct common_datum {TYPE_1__ permissions; } ;
struct TYPE_4__ {int table; } ;
struct class_datum {TYPE_2__ permissions; struct common_datum* comdatum; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,char const*,char*,...) ;
 struct audit_buffer* FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct policydb*,struct context*,char**,int*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ,char**) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (struct policydb*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct policydb *VAR_4,
        struct context *VAR_5,
        struct context *VAR_6,
        u16 VAR_7,
        u32 VAR_8,
        const char *VAR_9)
{
 struct common_datum *VAR_10;
 struct class_datum *VAR_11;
 struct audit_buffer *VAR_12;
 char *VAR_13;
 char *VAR_14 = ((void*)0);
 char *VAR_15 = ((void*)0);
 char *VAR_16[32];
 int VAR_17;
 u32 VAR_18;
 bool VAR_19 = 0;

 if (!VAR_8)
  return;

 VAR_13 = FUNC_7(VAR_4, VAR_2, VAR_7 - 1);
 VAR_11 = VAR_4->class_val_to_struct[VAR_7 - 1];
 VAR_10 = VAR_11->comdatum;


 if (VAR_10 &&
     FUNC_5(VAR_10->permissions.table,
   VAR_3, VAR_16) < 0)
  goto out;

 if (FUNC_5(VAR_11->permissions.table,
   VAR_3, VAR_16) < 0)
  goto out;


 if (FUNC_4(VAR_4, VAR_5,
         &VAR_14, &VAR_18) < 0)
  goto out;

 if (FUNC_4(VAR_4, VAR_6,
         &VAR_15, &VAR_18) < 0)
  goto out;


 VAR_12 = FUNC_3(FUNC_0(),
        VAR_1, VAR_0);
 if (!VAR_12)
  goto out;

 FUNC_2(VAR_12, "op=security_compute_av reason=%s "
    "scontext=%s tcontext=%s tclass=%s perms=",
    VAR_9, VAR_14, VAR_15, VAR_13);

 for (VAR_17 = 0; VAR_17 < 32; VAR_17++) {
  u32 VAR_20 = (1 << VAR_17);

  if ((VAR_20 & VAR_8) == 0)
   continue;

  FUNC_2(VAR_12, "%s%s",
     VAR_19 ? "," : "",
     VAR_16[VAR_17]
     ? VAR_16[VAR_17] : "????");
  VAR_19 = 1;
 }
 FUNC_1(VAR_12);
out:

 FUNC_6(VAR_15);
 FUNC_6(VAR_14);

 return;
}
