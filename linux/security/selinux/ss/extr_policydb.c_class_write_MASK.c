
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t u32 ;
struct policydb {scalar_t__ policyvers; } ;
struct policy_data {struct policydb* p; void* fp; } ;
struct constraint_node {struct constraint_node* next; } ;
struct TYPE_3__ {size_t nprim; TYPE_2__* table; } ;
struct class_datum {char* comkey; size_t value; size_t default_user; size_t default_role; size_t default_range; size_t default_type; struct constraint_node* validatetrans; struct constraint_node* constraints; TYPE_1__ permissions; } ;
typedef char __le32 ;
struct TYPE_4__ {size_t nel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_2__*,int ,void*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int,void*) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (struct policydb*,struct constraint_node*,void*) ;

__attribute__((used)) static int FUNC_5(void *VAR_3, void *VAR_4, void *VAR_5)
{
 char *VAR_6 = VAR_3;
 struct class_datum *VAR_7 = VAR_4;
 struct policy_data *VAR_8 = VAR_5;
 void *VAR_9 = VAR_8->fp;
 struct policydb *VAR_10 = VAR_8->p;
 struct constraint_node *VAR_11;
 __le32 VAR_12[6];
 u32 VAR_13;
 size_t VAR_14, VAR_15;
 int VAR_16;

 VAR_14 = FUNC_3(VAR_6);
 if (VAR_7->comkey)
  VAR_15 = FUNC_3(VAR_7->comkey);
 else
  VAR_15 = 0;

 VAR_13 = 0;
 for (VAR_11 = VAR_7->constraints; VAR_11; VAR_11 = VAR_11->next)
  VAR_13++;

 VAR_12[0] = FUNC_0(VAR_14);
 VAR_12[1] = FUNC_0(VAR_15);
 VAR_12[2] = FUNC_0(VAR_7->value);
 VAR_12[3] = FUNC_0(VAR_7->permissions.nprim);
 if (VAR_7->permissions.table)
  VAR_12[4] = FUNC_0(VAR_7->permissions.table->nel);
 else
  VAR_12[4] = 0;
 VAR_12[5] = FUNC_0(VAR_13);
 VAR_16 = FUNC_2(VAR_12, sizeof(u32), 6, VAR_9);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_6, 1, VAR_14, VAR_9);
 if (VAR_16)
  return VAR_16;

 if (VAR_7->comkey) {
  VAR_16 = FUNC_2(VAR_7->comkey, 1, VAR_15, VAR_9);
  if (VAR_16)
   return VAR_16;
 }

 VAR_16 = FUNC_1(VAR_7->permissions.table, VAR_2, VAR_9);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_4(VAR_10, VAR_7->constraints, VAR_9);
 if (VAR_16)
  return VAR_16;


 VAR_13 = 0;
 for (VAR_11 = VAR_7->validatetrans; VAR_11; VAR_11 = VAR_11->next)
  VAR_13++;

 VAR_12[0] = FUNC_0(VAR_13);
 VAR_16 = FUNC_2(VAR_12, sizeof(u32), 1, VAR_9);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_4(VAR_10, VAR_7->validatetrans, VAR_9);
 if (VAR_16)
  return VAR_16;

 if (VAR_10->policyvers >= VAR_1) {
  VAR_12[0] = FUNC_0(VAR_7->default_user);
  VAR_12[1] = FUNC_0(VAR_7->default_role);
  VAR_12[2] = FUNC_0(VAR_7->default_range);

  VAR_16 = FUNC_2(VAR_12, sizeof(uint32_t), 3, VAR_9);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_10->policyvers >= VAR_0) {
  VAR_12[0] = FUNC_0(VAR_7->default_type);
  VAR_16 = FUNC_2(VAR_12, sizeof(uint32_t), 1, VAR_9);
  if (VAR_16)
   return VAR_16;
 }

 return 0;
}
