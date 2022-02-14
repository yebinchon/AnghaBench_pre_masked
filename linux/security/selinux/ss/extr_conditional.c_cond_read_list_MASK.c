
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int nel; } ;
struct policydb {struct cond_node* cond_list; TYPE_1__ te_avtab; int te_cond_avtab; } ;
struct cond_node {struct cond_node* next; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cond_node*) ;
 int FUNC_2 (struct policydb*,struct cond_node*,void*) ;
 struct cond_node* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,void*,int) ;

int FUNC_6(struct policydb *VAR_2, void *VAR_3)
{
 struct cond_node *VAR_4, *VAR_5 = ((void*)0);
 __le32 VAR_6[1];
 u32 VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(VAR_6, VAR_3, sizeof VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_4(VAR_6[0]);

 VAR_9 = FUNC_0(&(VAR_2->te_cond_avtab), VAR_2->te_avtab.nel);
 if (VAR_9)
  goto err;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_9 = -VAR_0;
  VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
  if (!VAR_4)
   goto err;

  VAR_9 = FUNC_2(VAR_2, VAR_4, VAR_3);
  if (VAR_9)
   goto err;

  if (VAR_7 == 0)
   VAR_2->cond_list = VAR_4;
  else
   VAR_5->next = VAR_4;
  VAR_5 = VAR_4;
 }
 return 0;
err:
 FUNC_1(VAR_2->cond_list);
 VAR_2->cond_list = ((void*)0);
 return VAR_9;
}
