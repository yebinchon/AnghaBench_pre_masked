
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct policydb {int dummy; } ;
struct perm_datum {void* value; } ;
struct hashtab {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hashtab*,char*,struct perm_datum*) ;
 struct perm_datum* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (char*,struct perm_datum*,int *) ;
 int FUNC_5 (char**,int ,void*,void*) ;

__attribute__((used)) static int FUNC_6(struct policydb *VAR_2, struct hashtab *VAR_3, void *VAR_4)
{
 char *VAR_5 = ((void*)0);
 struct perm_datum *VAR_6;
 int VAR_7;
 __le32 VAR_8[2];
 u32 VAR_9;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_8, VAR_4, sizeof VAR_8);
 if (VAR_7)
  goto bad;

 VAR_9 = FUNC_2(VAR_8[0]);
 VAR_6->value = FUNC_2(VAR_8[1]);

 VAR_7 = FUNC_5(&VAR_5, VAR_1, VAR_4, VAR_9);
 if (VAR_7)
  goto bad;

 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_6);
 if (VAR_7)
  goto bad;

 return 0;
bad:
 FUNC_4(VAR_5, VAR_6, ((void*)0));
 return VAR_7;
}
