
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int table; } ;
struct policydb {scalar_t__ policyvers; TYPE_1__ p_commons; } ;
struct hashtab {int dummy; } ;
struct TYPE_4__ {int table; void* nprim; } ;
struct class_datum {char* comkey; void* default_type; void* default_range; void* default_role; void* default_user; int validatetrans; int constraints; TYPE_2__ permissions; int comdatum; void* value; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,struct class_datum*,int *) ;
 int FUNC_1 (struct hashtab*,char*,struct class_datum*) ;
 int FUNC_2 (int ,char*) ;
 struct class_datum* FUNC_3 (int,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *,void*,int) ;
 int FUNC_6 (struct policydb*,int ,void*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (struct policydb*,int *,int,int,void*) ;
 int FUNC_9 (char**,int ,void*,int) ;
 int FUNC_10 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_11(struct policydb *VAR_7, struct hashtab *VAR_8, void *VAR_9)
{
 char *VAR_10 = ((void*)0);
 struct class_datum *VAR_11;
 __le32 VAR_12[6];
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_18 = FUNC_5(VAR_12, VAR_9, sizeof(u32)*6);
 if (VAR_18)
  goto bad;

 VAR_13 = FUNC_4(VAR_12[0]);
 VAR_14 = FUNC_4(VAR_12[1]);
 VAR_11->value = FUNC_4(VAR_12[2]);

 VAR_18 = FUNC_10(&VAR_11->permissions, VAR_3);
 if (VAR_18)
  goto bad;
 VAR_11->permissions.nprim = FUNC_4(VAR_12[3]);
 VAR_16 = FUNC_4(VAR_12[4]);

 VAR_15 = FUNC_4(VAR_12[5]);

 VAR_18 = FUNC_9(&VAR_10, VAR_2, VAR_9, VAR_13);
 if (VAR_18)
  goto bad;

 if (VAR_14) {
  VAR_18 = FUNC_9(&VAR_11->comkey, VAR_2, VAR_9, VAR_14);
  if (VAR_18)
   goto bad;

  VAR_18 = -VAR_0;
  VAR_11->comdatum = FUNC_2(VAR_7->p_commons.table, VAR_11->comkey);
  if (!VAR_11->comdatum) {
   FUNC_7("SELinux:  unknown common %s\n",
          VAR_11->comkey);
   goto bad;
  }
 }
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_18 = FUNC_6(VAR_7, VAR_11->permissions.table, VAR_9);
  if (VAR_18)
   goto bad;
 }

 VAR_18 = FUNC_8(VAR_7, &VAR_11->constraints, VAR_15, 0, VAR_9);
 if (VAR_18)
  goto bad;

 if (VAR_7->policyvers >= VAR_6) {

  VAR_18 = FUNC_5(VAR_12, VAR_9, sizeof(u32));
  if (VAR_18)
   goto bad;
  VAR_15 = FUNC_4(VAR_12[0]);
  VAR_18 = FUNC_8(VAR_7, &VAR_11->validatetrans,
    VAR_15, 1, VAR_9);
  if (VAR_18)
   goto bad;
 }

 if (VAR_7->policyvers >= VAR_5) {
  VAR_18 = FUNC_5(VAR_12, VAR_9, sizeof(u32) * 3);
  if (VAR_18)
   goto bad;

  VAR_11->default_user = FUNC_4(VAR_12[0]);
  VAR_11->default_role = FUNC_4(VAR_12[1]);
  VAR_11->default_range = FUNC_4(VAR_12[2]);
 }

 if (VAR_7->policyvers >= VAR_4) {
  VAR_18 = FUNC_5(VAR_12, VAR_9, sizeof(u32) * 1);
  if (VAR_18)
   goto bad;
  VAR_11->default_type = FUNC_4(VAR_12[0]);
 }

 VAR_18 = FUNC_1(VAR_8, VAR_10, VAR_11);
 if (VAR_18)
  goto bad;

 return 0;
bad:
 FUNC_0(VAR_10, VAR_11, ((void*)0));
 return VAR_18;
}
