
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct range_trans {void* target_class; void* target_type; void* source_type; } ;
struct policydb {scalar_t__ policyvers; int range_tr; void* process_class; } ;
struct mls_range {void* target_class; void* target_type; void* source_type; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct range_trans*,struct range_trans*) ;
 int FUNC_2 (struct range_trans*) ;
 struct range_trans* FUNC_3 (int,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct policydb*,struct range_trans*) ;
 int FUNC_6 (struct range_trans*,void*) ;
 int FUNC_7 (int *,void*,int) ;
 int FUNC_8 (struct policydb*,void*) ;
 int FUNC_9 (struct policydb*,void*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct policydb *VAR_5, void *VAR_6)
{
 struct range_trans *VAR_7 = ((void*)0);
 struct mls_range *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;
 __le32 VAR_11[2];
 u32 VAR_12;

 if (VAR_5->policyvers < VAR_3)
  return 0;

 VAR_10 = FUNC_7(VAR_11, VAR_6, sizeof(u32));
 if (VAR_10)
  return VAR_10;

 VAR_12 = FUNC_4(VAR_11[0]);
 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
  VAR_10 = -VAR_1;
  VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
  if (!VAR_7)
   goto out;

  VAR_10 = FUNC_7(VAR_11, VAR_6, (sizeof(u32) * 2));
  if (VAR_10)
   goto out;

  VAR_7->source_type = FUNC_4(VAR_11[0]);
  VAR_7->target_type = FUNC_4(VAR_11[1]);
  if (VAR_5->policyvers >= VAR_4) {
   VAR_10 = FUNC_7(VAR_11, VAR_6, sizeof(u32));
   if (VAR_10)
    goto out;
   VAR_7->target_class = FUNC_4(VAR_11[0]);
  } else
   VAR_7->target_class = VAR_5->process_class;

  VAR_10 = -VAR_0;
  if (!FUNC_9(VAR_5, VAR_7->source_type) ||
      !FUNC_9(VAR_5, VAR_7->target_type) ||
      !FUNC_8(VAR_5, VAR_7->target_class))
   goto out;

  VAR_10 = -VAR_1;
  VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
  if (!VAR_8)
   goto out;

  VAR_10 = FUNC_6(VAR_8, VAR_6);
  if (VAR_10)
   goto out;

  VAR_10 = -VAR_0;
  if (!FUNC_5(VAR_5, VAR_8)) {
   FUNC_10("SELinux:  rangetrans:  invalid range\n");
   goto out;
  }

  VAR_10 = FUNC_1(VAR_5->range_tr, VAR_7, VAR_8);
  if (VAR_10)
   goto out;

  VAR_7 = ((void*)0);
  VAR_8 = ((void*)0);
 }
 FUNC_0(VAR_5->range_tr, "rangetr");
 VAR_10 = 0;
out:
 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 return VAR_10;
}
