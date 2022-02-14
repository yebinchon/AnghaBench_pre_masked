
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct policydb {int dummy; } ;
struct policy_file {int dummy; } ;
struct cond_av_list {int node; struct cond_av_list* next; } ;
typedef int __le32 ;


 int FUNC_0 (struct policydb*,int ,struct policy_file*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int,int,struct policy_file*) ;

__attribute__((used)) static int FUNC_3(struct policydb *VAR_0,
         struct cond_av_list *VAR_1, struct policy_file *VAR_2)
{
 __le32 VAR_3[1];
 struct cond_av_list *VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_5 = 0;
 for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
  VAR_5++;

 VAR_3[0] = FUNC_1(VAR_5);
 VAR_6 = FUNC_2(VAR_3, sizeof(u32), 1, VAR_2);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 == 0)
  return 0;

 for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  VAR_6 = FUNC_0(VAR_0, VAR_4->node, VAR_2);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
