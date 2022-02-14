
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct role_trans {size_t role; size_t type; size_t new_role; size_t tclass; struct role_trans* next; } ;
struct policydb {scalar_t__ policyvers; struct role_trans* role_tr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int *,int,int,void*) ;

__attribute__((used)) static int FUNC_2(struct policydb *VAR_1, void *VAR_2)
{
 struct role_trans *VAR_3 = VAR_1->role_tr;
 struct role_trans *VAR_4;
 u32 VAR_5[3];
 size_t VAR_6;
 int VAR_7;

 VAR_6 = 0;
 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next)
  VAR_6++;
 VAR_5[0] = FUNC_0(VAR_6);
 VAR_7 = FUNC_1(VAR_5, sizeof(u32), 1, VAR_2);
 if (VAR_7)
  return VAR_7;
 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next) {
  VAR_5[0] = FUNC_0(VAR_4->role);
  VAR_5[1] = FUNC_0(VAR_4->type);
  VAR_5[2] = FUNC_0(VAR_4->new_role);
  VAR_7 = FUNC_1(VAR_5, sizeof(u32), 3, VAR_2);
  if (VAR_7)
   return VAR_7;
  if (VAR_1->policyvers >= VAR_0) {
   VAR_5[0] = FUNC_0(VAR_4->tclass);
   VAR_7 = FUNC_1(VAR_5, sizeof(u32), 1, VAR_2);
   if (VAR_7)
    return VAR_7;
  }
 }

 return 0;
}
