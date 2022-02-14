
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct policydb {int te_cond_avtab; int te_avtab; } ;
struct cond_insertf_data {struct cond_av_list* head; struct cond_av_list* tail; struct cond_av_list* other; struct policydb* p; } ;
struct cond_av_list {struct cond_av_list* next; struct avtab_node* node; } ;
struct avtab_node {int dummy; } ;
struct avtab_key {int specified; } ;
struct avtab_datum {int dummy; } ;
struct avtab {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct avtab_node* FUNC_0 (int *,struct avtab_key*,struct avtab_datum*) ;
 scalar_t__ FUNC_1 (int *,struct avtab_key*) ;
 struct avtab_node* FUNC_2 (int *,struct avtab_key*) ;
 scalar_t__ FUNC_3 (struct avtab_node*,int) ;
 int FUNC_4 (struct cond_av_list*) ;
 struct cond_av_list* FUNC_5 (int,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct avtab *VAR_4, struct avtab_key *VAR_5, struct avtab_datum *VAR_6, void *VAR_7)
{
 struct cond_insertf_data *VAR_8 = VAR_7;
 struct policydb *VAR_9 = VAR_8->p;
 struct cond_av_list *VAR_10 = VAR_8->other, *VAR_11, *VAR_12;
 struct avtab_node *VAR_13;
 u8 VAR_14;
 int VAR_15 = -VAR_1;






 if (VAR_5->specified & VAR_0) {
  if (FUNC_1(&VAR_9->te_avtab, VAR_5)) {
   FUNC_6("SELinux: type rule already exists outside of a conditional.\n");
   goto err;
  }
  if (VAR_10) {
   VAR_13 = FUNC_2(&VAR_9->te_cond_avtab, VAR_5);
   if (VAR_13) {
    if (FUNC_3(VAR_13, VAR_5->specified)) {
     FUNC_6("SELinux: too many conflicting type rules.\n");
     goto err;
    }
    VAR_14 = 0;
    for (VAR_12 = VAR_10; VAR_12; VAR_12 = VAR_12->next) {
     if (VAR_12->node == VAR_13) {
      VAR_14 = 1;
      break;
     }
    }
    if (!VAR_14) {
     FUNC_6("SELinux: conflicting type rules.\n");
     goto err;
    }
   }
  } else {
   if (FUNC_1(&VAR_9->te_cond_avtab, VAR_5)) {
    FUNC_6("SELinux: conflicting type rules when adding type rule for true.\n");
    goto err;
   }
  }
 }

 VAR_13 = FUNC_0(&VAR_9->te_cond_avtab, VAR_5, VAR_6);
 if (!VAR_13) {
  FUNC_6("SELinux: could not insert rule.\n");
  VAR_15 = -VAR_2;
  goto err;
 }

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  VAR_15 = -VAR_2;
  goto err;
 }

 VAR_11->node = VAR_13;
 if (!VAR_8->head)
  VAR_8->head = VAR_11;
 else
  VAR_8->tail->next = VAR_11;
 VAR_8->tail = VAR_11;
 return 0;

err:
 FUNC_4(VAR_8->head);
 VAR_8->head = ((void*)0);
 return VAR_15;
}
