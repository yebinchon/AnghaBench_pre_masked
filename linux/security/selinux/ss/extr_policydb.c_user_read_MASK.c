
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct user_datum {int dfltlevel; int range; int roles; void* bounds; void* value; } ;
struct policydb {scalar_t__ policyvers; } ;
struct hashtab {int dummy; } ;
typedef int buf ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,void*) ;
 int FUNC_1 (struct hashtab*,char*,struct user_datum*) ;
 struct user_datum* FUNC_2 (int,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (int *,void*,int) ;
 int FUNC_7 (char**,int ,void*,void*) ;
 int FUNC_8 (char*,struct user_datum*,int *) ;

__attribute__((used)) static int FUNC_9(struct policydb *VAR_4, struct hashtab *VAR_5, void *VAR_6)
{
 char *VAR_7 = ((void*)0);
 struct user_datum *VAR_8;
 int VAR_9, VAR_10 = 2;
 __le32 VAR_11[3];
 u32 VAR_12;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 if (VAR_4->policyvers >= VAR_2)
  VAR_10 = 3;

 VAR_9 = FUNC_6(VAR_11, VAR_6, sizeof(VAR_11[0]) * VAR_10);
 if (VAR_9)
  goto bad;

 VAR_12 = FUNC_3(VAR_11[0]);
 VAR_8->value = FUNC_3(VAR_11[1]);
 if (VAR_4->policyvers >= VAR_2)
  VAR_8->bounds = FUNC_3(VAR_11[2]);

 VAR_9 = FUNC_7(&VAR_7, VAR_1, VAR_6, VAR_12);
 if (VAR_9)
  goto bad;

 VAR_9 = FUNC_0(&VAR_8->roles, VAR_6);
 if (VAR_9)
  goto bad;

 if (VAR_4->policyvers >= VAR_3) {
  VAR_9 = FUNC_5(&VAR_8->range, VAR_6);
  if (VAR_9)
   goto bad;
  VAR_9 = FUNC_4(&VAR_8->dfltlevel, VAR_6);
  if (VAR_9)
   goto bad;
 }

 VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_8);
 if (VAR_9)
  goto bad;
 return 0;
bad:
 FUNC_8(VAR_7, VAR_8, ((void*)0));
 return VAR_9;
}
