
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct root_domain {int rto_cpu; int span; int online; int dlo_mask; int rto_mask; int cpudl; int cpupri; int dl_bw; int rto_push_work; int rto_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct root_domain *VAR_3)
{
 if (!FUNC_7(&VAR_3->span, VAR_1))
  goto out;
 if (!FUNC_7(&VAR_3->online, VAR_1))
  goto free_span;
 if (!FUNC_7(&VAR_3->dlo_mask, VAR_1))
  goto free_online;
 if (!FUNC_7(&VAR_3->rto_mask, VAR_1))
  goto free_dlo_mask;







 FUNC_4(&VAR_3->dl_bw);
 if (FUNC_1(&VAR_3->cpudl) != 0)
  goto free_rto_mask;

 if (FUNC_2(&VAR_3->cpupri) != 0)
  goto free_cpudl;
 return 0;

free_cpudl:
 FUNC_0(&VAR_3->cpudl);
free_rto_mask:
 FUNC_3(VAR_3->rto_mask);
free_dlo_mask:
 FUNC_3(VAR_3->dlo_mask);
free_online:
 FUNC_3(VAR_3->online);
free_span:
 FUNC_3(VAR_3->span);
out:
 return -VAR_0;
}
