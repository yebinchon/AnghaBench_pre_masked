
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct type_datum {int primary; int attribute; void* bounds; void* value; } ;
struct policydb {scalar_t__ policyvers; } ;
struct hashtab {int dummy; } ;
typedef int buf ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hashtab*,char*,struct type_datum*) ;
 struct type_datum* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (char**,int ,void*,int) ;
 int FUNC_5 (char*,struct type_datum*,int *) ;

__attribute__((used)) static int FUNC_6(struct policydb *VAR_5, struct hashtab *VAR_6, void *VAR_7)
{
 char *VAR_8 = ((void*)0);
 struct type_datum *VAR_9;
 int VAR_10, VAR_11 = 3;
 __le32 VAR_12[4];
 u32 VAR_13;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_5->policyvers >= VAR_2)
  VAR_11 = 4;

 VAR_10 = FUNC_3(VAR_12, VAR_7, sizeof(VAR_12[0]) * VAR_11);
 if (VAR_10)
  goto bad;

 VAR_13 = FUNC_2(VAR_12[0]);
 VAR_9->value = FUNC_2(VAR_12[1]);
 if (VAR_5->policyvers >= VAR_2) {
  u32 VAR_14 = FUNC_2(VAR_12[2]);

  if (VAR_14 & VAR_4)
   VAR_9->primary = 1;
  if (VAR_14 & VAR_3)
   VAR_9->attribute = 1;

  VAR_9->bounds = FUNC_2(VAR_12[3]);
 } else {
  VAR_9->primary = FUNC_2(VAR_12[2]);
 }

 VAR_10 = FUNC_4(&VAR_8, VAR_1, VAR_7, VAR_13);
 if (VAR_10)
  goto bad;

 VAR_10 = FUNC_0(VAR_6, VAR_8, VAR_9);
 if (VAR_10)
  goto bad;
 return 0;
bad:
 FUNC_5(VAR_8, VAR_9, ((void*)0));
 return VAR_10;
}
