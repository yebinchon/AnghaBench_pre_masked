
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct range_trans {int target_class; int target_type; int source_type; } ;
struct policydb {scalar_t__ policyvers; } ;
struct policy_data {struct policydb* p; void* fp; } ;
struct mls_range {int dummy; } ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mls_range*,void*) ;
 int FUNC_2 (int *,int,int,void*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, void *VAR_2, void *VAR_3)
{
 __le32 VAR_4[2];
 struct range_trans *VAR_5 = VAR_1;
 struct mls_range *VAR_6 = VAR_2;
 struct policy_data *VAR_7 = VAR_3;
 void *VAR_8 = VAR_7->fp;
 struct policydb *VAR_9 = VAR_7->p;
 int VAR_10;

 VAR_4[0] = FUNC_0(VAR_5->source_type);
 VAR_4[1] = FUNC_0(VAR_5->target_type);
 VAR_10 = FUNC_2(VAR_4, sizeof(u32), 2, VAR_8);
 if (VAR_10)
  return VAR_10;
 if (VAR_9->policyvers >= VAR_0) {
  VAR_4[0] = FUNC_0(VAR_5->target_class);
  VAR_10 = FUNC_2(VAR_4, sizeof(u32), 1, VAR_8);
  if (VAR_10)
   return VAR_10;
 }
 VAR_10 = FUNC_1(VAR_6, VAR_8);
 if (VAR_10)
  return VAR_10;

 return 0;
}
