
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct policydb_compat_info {size_t sym_num; size_t ocon_num; } ;
struct TYPE_5__ {unsigned int nprim; } ;
struct ebitmap {int dummy; } ;
struct policydb {size_t policyvers; struct ebitmap* type_attr_map_array; TYPE_2__ p_types; int role_allow; int cond_list; int te_avtab; TYPE_1__* symtab; struct ebitmap permissive_map; struct ebitmap policycaps; scalar_t__ allow_unknown; scalar_t__ reject_unknown; scalar_t__ mls_enabled; } ;
struct policy_data {struct policydb* p; void* fp; } ;
typedef int __le32 ;
struct TYPE_6__ {size_t nel; } ;
struct TYPE_4__ {size_t nprim; TYPE_3__* table; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct policydb*,int *,void*) ;
 int FUNC_1 (struct policydb*,int ,void*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (struct ebitmap*,void*) ;
 int FUNC_4 (struct policydb*,void*) ;
 int FUNC_5 (struct policydb*,void*) ;
 int FUNC_6 (TYPE_3__*,int ,struct policy_data*) ;
 int FUNC_7 (struct policydb*,struct policydb_compat_info*,void*) ;
 struct policydb_compat_info* FUNC_8 (size_t) ;
 int FUNC_9 (char*,size_t,...) ;
 int FUNC_10 (int *,int,int,void*) ;
 int FUNC_11 (struct policydb*,void*) ;
 int FUNC_12 (int ,void*) ;
 int FUNC_13 (struct policydb*,void*) ;
 size_t FUNC_14 (int *) ;
 int * VAR_9 ;

int FUNC_15(struct policydb *VAR_10, void *VAR_11)
{
 unsigned int VAR_12, VAR_13;
 int VAR_14;
 __le32 VAR_15[4];
 u32 VAR_16;
 size_t VAR_17;
 struct policydb_compat_info *VAR_18;







 if (VAR_10->policyvers < VAR_5) {
  FUNC_9("SELinux: refusing to write policy version %d."
         "  Because it is less than version %d\n", VAR_10->policyvers,
         VAR_5);
  return -VAR_1;
 }

 VAR_16 = 0;
 if (VAR_10->mls_enabled)
  VAR_16 |= VAR_2;

 if (VAR_10->reject_unknown)
  VAR_16 |= VAR_8;
 if (VAR_10->allow_unknown)
  VAR_16 |= VAR_0;


 VAR_15[0] = FUNC_2(VAR_3);
 VAR_17 = FUNC_14(VAR_4);
 VAR_15[1] = FUNC_2(VAR_17);
 VAR_14 = FUNC_10(VAR_15, sizeof(u32), 2, VAR_11);
 if (VAR_14)
  return VAR_14;
 VAR_14 = FUNC_10(VAR_4, 1, VAR_17, VAR_11);
 if (VAR_14)
  return VAR_14;


 VAR_18 = FUNC_8(VAR_10->policyvers);
 if (!VAR_18) {
  FUNC_9("SELinux: compatibility lookup failed for policy "
      "version %d", VAR_10->policyvers);
  return -VAR_1;
 }

 VAR_15[0] = FUNC_2(VAR_10->policyvers);
 VAR_15[1] = FUNC_2(VAR_16);
 VAR_15[2] = FUNC_2(VAR_18->sym_num);
 VAR_15[3] = FUNC_2(VAR_18->ocon_num);

 VAR_14 = FUNC_10(VAR_15, sizeof(u32), 4, VAR_11);
 if (VAR_14)
  return VAR_14;

 if (VAR_10->policyvers >= VAR_7) {
  VAR_14 = FUNC_3(&VAR_10->policycaps, VAR_11);
  if (VAR_14)
   return VAR_14;
 }

 if (VAR_10->policyvers >= VAR_6) {
  VAR_14 = FUNC_3(&VAR_10->permissive_map, VAR_11);
  if (VAR_14)
   return VAR_14;
 }

 VAR_13 = VAR_18->sym_num;
 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  struct policy_data VAR_19;

  VAR_19.fp = VAR_11;
  VAR_19.p = VAR_10;

  VAR_15[0] = FUNC_2(VAR_10->symtab[VAR_12].nprim);
  VAR_15[1] = FUNC_2(VAR_10->symtab[VAR_12].table->nel);

  VAR_14 = FUNC_10(VAR_15, sizeof(u32), 2, VAR_11);
  if (VAR_14)
   return VAR_14;
  VAR_14 = FUNC_6(VAR_10->symtab[VAR_12].table, VAR_9[VAR_12], &VAR_19);
  if (VAR_14)
   return VAR_14;
 }

 VAR_14 = FUNC_0(VAR_10, &VAR_10->te_avtab, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_1(VAR_10, VAR_10->cond_list, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_13(VAR_10, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_12(VAR_10->role_allow, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_4(VAR_10, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_7(VAR_10, VAR_18, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_10, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_11(VAR_10, VAR_11);
 if (VAR_14)
  return VAR_14;

 for (VAR_12 = 0; VAR_12 < VAR_10->p_types.nprim; VAR_12++) {
  struct ebitmap *VAR_20 = &VAR_10->type_attr_map_array[VAR_12];

  VAR_14 = FUNC_3(VAR_20, VAR_11);
  if (VAR_14)
   return VAR_14;
 }

 return 0;
}
