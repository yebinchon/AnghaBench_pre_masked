
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct policydb {struct genfs* genfs; } ;
struct TYPE_4__ {struct genfs* name; } ;
struct TYPE_3__ {scalar_t__ sclass; } ;
struct ocontext {struct ocontext* next; TYPE_2__ u; TYPE_1__ v; int * context; } ;
struct genfs {struct genfs* fstype; struct ocontext* head; struct genfs* next; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct policydb*,void*) ;
 int FUNC_1 (struct genfs*) ;
 void* FUNC_2 (int,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *,void*,int) ;
 int FUNC_5 (struct ocontext*,int ) ;
 int FUNC_6 (char*,struct genfs*,...) ;
 int FUNC_7 (struct genfs**,int ,void*,int) ;
 scalar_t__ FUNC_8 (struct genfs*,struct genfs*) ;
 int FUNC_9 (struct genfs*) ;

__attribute__((used)) static int FUNC_10(struct policydb *VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 __le32 VAR_13[1];
 struct ocontext *VAR_14, *VAR_15;
 struct ocontext *VAR_16 = ((void*)0);
 struct genfs *VAR_17, *VAR_18;
 struct genfs *VAR_19 = ((void*)0);

 VAR_8 = FUNC_4(VAR_13, VAR_5, sizeof(u32));
 if (VAR_8)
  return VAR_8;
 VAR_9 = FUNC_3(VAR_13[0]);

 for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
  VAR_8 = FUNC_4(VAR_13, VAR_5, sizeof(u32));
  if (VAR_8)
   goto out;
  VAR_11 = FUNC_3(VAR_13[0]);

  VAR_8 = -VAR_1;
  VAR_19 = FUNC_2(sizeof(*VAR_19), VAR_2);
  if (!VAR_19)
   goto out;

  VAR_8 = FUNC_7(&VAR_19->fstype, VAR_2, VAR_5, VAR_11);
  if (VAR_8)
   goto out;

  for (VAR_17 = ((void*)0), VAR_18 = VAR_4->genfs; VAR_18;
       VAR_17 = VAR_18, VAR_18 = VAR_18->next) {
   VAR_8 = -VAR_0;
   if (FUNC_8(VAR_19->fstype, VAR_18->fstype) == 0) {
    FUNC_6("SELinux:  dup genfs fstype %s\n",
           VAR_19->fstype);
    goto out;
   }
   if (FUNC_8(VAR_19->fstype, VAR_18->fstype) < 0)
    break;
  }
  VAR_19->next = VAR_18;
  if (VAR_17)
   VAR_17->next = VAR_19;
  else
   VAR_4->genfs = VAR_19;
  VAR_18 = VAR_19;
  VAR_19 = ((void*)0);

  VAR_8 = FUNC_4(VAR_13, VAR_5, sizeof(u32));
  if (VAR_8)
   goto out;

  VAR_10 = FUNC_3(VAR_13[0]);
  for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
   VAR_8 = FUNC_4(VAR_13, VAR_5, sizeof(u32));
   if (VAR_8)
    goto out;
   VAR_11 = FUNC_3(VAR_13[0]);

   VAR_8 = -VAR_1;
   VAR_16 = FUNC_2(sizeof(*VAR_16), VAR_2);
   if (!VAR_16)
    goto out;

   VAR_8 = FUNC_7(&VAR_16->u.name, VAR_2, VAR_5, VAR_11);
   if (VAR_8)
    goto out;

   VAR_8 = FUNC_4(VAR_13, VAR_5, sizeof(u32));
   if (VAR_8)
    goto out;

   VAR_16->v.sclass = FUNC_3(VAR_13[0]);
   VAR_8 = FUNC_0(&VAR_16->context[0], VAR_4, VAR_5);
   if (VAR_8)
    goto out;

   for (VAR_14 = ((void*)0), VAR_15 = VAR_18->head; VAR_15;
        VAR_14 = VAR_15, VAR_15 = VAR_15->next) {
    VAR_8 = -VAR_0;
    if (!FUNC_8(VAR_16->u.name, VAR_15->u.name) &&
        (!VAR_15->v.sclass || !VAR_16->v.sclass ||
         VAR_16->v.sclass == VAR_15->v.sclass)) {
     FUNC_6("SELinux:  dup genfs entry (%s,%s)\n",
            VAR_18->fstype, VAR_15->u.name);
     goto out;
    }
    VAR_11 = FUNC_9(VAR_16->u.name);
    VAR_12 = FUNC_9(VAR_15->u.name);
    if (VAR_11 > VAR_12)
     break;
   }

   VAR_16->next = VAR_15;
   if (VAR_14)
    VAR_14->next = VAR_16;
   else
    VAR_18->head = VAR_16;
   VAR_16 = ((void*)0);
  }
 }
 VAR_8 = 0;
out:
 if (VAR_19) {
  FUNC_1(VAR_19->fstype);
  FUNC_1(VAR_19);
 }
 FUNC_5(VAR_16, VAR_3);

 return VAR_8;
}
