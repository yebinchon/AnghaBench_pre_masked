
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smc_link_group {int rmbs_lock; int * lnk; int is_smcd; } ;
struct smc_connection {TYPE_2__* rmb_desc; TYPE_1__* sndbuf_desc; } ;
struct TYPE_5__ {int list; scalar_t__ used; int regerr; } ;
struct TYPE_4__ {scalar_t__ used; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct smc_link_group*,int,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct smc_connection *VAR_1,
     struct smc_link_group *VAR_2)
{
 if (VAR_1->sndbuf_desc)
  VAR_1->sndbuf_desc->used = 0;
 if (VAR_1->rmb_desc) {
  if (!VAR_1->rmb_desc->regerr) {
   if (!VAR_2->is_smcd) {

    FUNC_2(
      &VAR_2->lnk[VAR_0],
      VAR_1->rmb_desc);
   }
   VAR_1->rmb_desc->used = 0;
  } else {

   FUNC_3(&VAR_2->rmbs_lock);
   FUNC_0(&VAR_1->rmb_desc->list);
   FUNC_4(&VAR_2->rmbs_lock);

   FUNC_1(VAR_2, 1, VAR_1->rmb_desc);
  }
 }
}
