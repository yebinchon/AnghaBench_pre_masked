
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfctrl_rsp {int reject_rsp; int linksetup_rsp; void* radioset_rsp; void* restart_rsp; void* wake_rsp; void* sleep_rsp; int linkdestroy_rsp; void* linkerror_ind; int enum_rsp; } ;
struct cfcnfg {struct cfcnfg* ctrl; struct cfcnfg* mux; int lock; int phys; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cfcnfg* FUNC_1 () ;
 int VAR_4 ;
 struct cfctrl_rsp* FUNC_2 (struct cfcnfg*) ;
 void* VAR_5 ;
 struct cfcnfg* FUNC_3 () ;
 int FUNC_4 (struct cfcnfg*,struct cfcnfg*,int ) ;
 int FUNC_5 (struct cfcnfg*) ;
 struct cfcnfg* FUNC_6 (int,int ) ;
 int FUNC_7 (struct cfcnfg*,struct cfcnfg*) ;
 int FUNC_8 (struct cfcnfg*,struct cfcnfg*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;

struct cfcnfg *FUNC_12(void)
{
 struct cfcnfg *VAR_6;
 struct cfctrl_rsp *VAR_7;

 FUNC_9();


 VAR_6 = FUNC_6(sizeof(struct cfcnfg), VAR_0);
 if (!VAR_6)
  return ((void*)0);
 VAR_6->mux = FUNC_3();
 if (!VAR_6->mux)
  goto out_of_mem;
 VAR_6->ctrl = FUNC_1();
 if (!VAR_6->ctrl)
  goto out_of_mem;

 VAR_7 = FUNC_2(VAR_6->ctrl);
 VAR_7->enum_rsp = VAR_4;
 VAR_7->linkerror_ind = VAR_5;
 VAR_7->linkdestroy_rsp = VAR_1;
 VAR_7->sleep_rsp = VAR_5;
 VAR_7->wake_rsp = VAR_5;
 VAR_7->restart_rsp = VAR_5;
 VAR_7->radioset_rsp = VAR_5;
 VAR_7->linksetup_rsp = VAR_2;
 VAR_7->reject_rsp = VAR_3;
 FUNC_0(&VAR_6->phys);

 FUNC_4(VAR_6->mux, VAR_6->ctrl, 0);
 FUNC_7(VAR_6->ctrl, VAR_6->mux);
 FUNC_8(VAR_6->ctrl, VAR_6);
 FUNC_10(&VAR_6->lock);

 return VAR_6;
out_of_mem:
 FUNC_11();

 FUNC_5(VAR_6->mux);
 FUNC_5(VAR_6->ctrl);
 FUNC_5(VAR_6);
 return ((void*)0);
}
