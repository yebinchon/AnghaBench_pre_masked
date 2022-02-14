
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct policydb {struct genfs* genfs; } ;
struct TYPE_4__ {size_t sclass; } ;
struct TYPE_3__ {int * name; } ;
struct ocontext {int * context; TYPE_2__ v; TYPE_1__ u; struct ocontext* next; } ;
struct genfs {struct ocontext* head; int * fstype; struct genfs* next; } ;
typedef int __le32 ;


 int FUNC_0 (struct policydb*,int *,void*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *,int,int,void*) ;
 size_t FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct policydb *VAR_0, void *VAR_1)
{
 struct genfs *VAR_2;
 struct ocontext *VAR_3;
 size_t VAR_4;
 __le32 VAR_5[1];
 int VAR_6;

 VAR_4 = 0;
 for (VAR_2 = VAR_0->genfs; VAR_2; VAR_2 = VAR_2->next)
  VAR_4++;
 VAR_5[0] = FUNC_1(VAR_4);
 VAR_6 = FUNC_2(VAR_5, sizeof(u32), 1, VAR_1);
 if (VAR_6)
  return VAR_6;
 for (VAR_2 = VAR_0->genfs; VAR_2; VAR_2 = VAR_2->next) {
  VAR_4 = FUNC_3(VAR_2->fstype);
  VAR_5[0] = FUNC_1(VAR_4);
  VAR_6 = FUNC_2(VAR_5, sizeof(u32), 1, VAR_1);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_2(VAR_2->fstype, 1, VAR_4, VAR_1);
  if (VAR_6)
   return VAR_6;
  VAR_4 = 0;
  for (VAR_3 = VAR_2->head; VAR_3; VAR_3 = VAR_3->next)
   VAR_4++;
  VAR_5[0] = FUNC_1(VAR_4);
  VAR_6 = FUNC_2(VAR_5, sizeof(u32), 1, VAR_1);
  if (VAR_6)
   return VAR_6;
  for (VAR_3 = VAR_2->head; VAR_3; VAR_3 = VAR_3->next) {
   VAR_4 = FUNC_3(VAR_3->u.name);
   VAR_5[0] = FUNC_1(VAR_4);
   VAR_6 = FUNC_2(VAR_5, sizeof(u32), 1, VAR_1);
   if (VAR_6)
    return VAR_6;
   VAR_6 = FUNC_2(VAR_3->u.name, 1, VAR_4, VAR_1);
   if (VAR_6)
    return VAR_6;
   VAR_5[0] = FUNC_1(VAR_3->v.sclass);
   VAR_6 = FUNC_2(VAR_5, sizeof(u32), 1, VAR_1);
   if (VAR_6)
    return VAR_6;
   VAR_6 = FUNC_0(VAR_0, &VAR_3->context[0], VAR_1);
   if (VAR_6)
    return VAR_6;
  }
 }
 return 0;
}
