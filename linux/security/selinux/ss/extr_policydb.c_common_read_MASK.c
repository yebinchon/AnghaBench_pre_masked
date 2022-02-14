
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct policydb {int dummy; } ;
struct hashtab {int dummy; } ;
struct TYPE_2__ {int table; void* nprim; } ;
struct common_datum {TYPE_1__ permissions; void* value; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct common_datum*,int *) ;
 int FUNC_1 (struct hashtab*,char*,struct common_datum*) ;
 struct common_datum* FUNC_2 (int,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *,void*,int) ;
 int FUNC_5 (struct policydb*,int ,void*) ;
 int FUNC_6 (char**,int ,void*,int) ;
 int FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_8(struct policydb *VAR_3, struct hashtab *VAR_4, void *VAR_5)
{
 char *VAR_6 = ((void*)0);
 struct common_datum *VAR_7;
 __le32 VAR_8[4];
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_8, VAR_5, sizeof VAR_8);
 if (VAR_12)
  goto bad;

 VAR_9 = FUNC_3(VAR_8[0]);
 VAR_7->value = FUNC_3(VAR_8[1]);

 VAR_12 = FUNC_7(&VAR_7->permissions, VAR_2);
 if (VAR_12)
  goto bad;
 VAR_7->permissions.nprim = FUNC_3(VAR_8[2]);
 VAR_10 = FUNC_3(VAR_8[3]);

 VAR_12 = FUNC_6(&VAR_6, VAR_1, VAR_5, VAR_9);
 if (VAR_12)
  goto bad;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_12 = FUNC_5(VAR_3, VAR_7->permissions.table, VAR_5);
  if (VAR_12)
   goto bad;
 }

 VAR_12 = FUNC_1(VAR_4, VAR_6, VAR_7);
 if (VAR_12)
  goto bad;
 return 0;
bad:
 FUNC_0(VAR_6, VAR_7, ((void*)0));
 return VAR_12;
}
