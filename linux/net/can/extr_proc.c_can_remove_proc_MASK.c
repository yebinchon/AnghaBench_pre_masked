
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ proc_dir; scalar_t__ pde_rcvlist_sff; scalar_t__ pde_rcvlist_eff; scalar_t__ pde_rcvlist_inv; scalar_t__ pde_rcvlist_fil; scalar_t__ pde_rcvlist_all; scalar_t__ pde_rcvlist_err; scalar_t__ pde_reset_stats; scalar_t__ pde_stats; scalar_t__ pde_version; } ;
struct net {scalar_t__ proc_net; TYPE_1__ can; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 (char*,scalar_t__) ;

void FUNC_1(struct net *VAR_9)
{
 if (VAR_9->can.pde_version)
  FUNC_0(VAR_8, VAR_9->can.proc_dir);

 if (VAR_9->can.pde_stats)
  FUNC_0(VAR_7, VAR_9->can.proc_dir);

 if (VAR_9->can.pde_reset_stats)
  FUNC_0(VAR_6, VAR_9->can.proc_dir);

 if (VAR_9->can.pde_rcvlist_err)
  FUNC_0(VAR_2, VAR_9->can.proc_dir);

 if (VAR_9->can.pde_rcvlist_all)
  FUNC_0(VAR_0, VAR_9->can.proc_dir);

 if (VAR_9->can.pde_rcvlist_fil)
  FUNC_0(VAR_3, VAR_9->can.proc_dir);

 if (VAR_9->can.pde_rcvlist_inv)
  FUNC_0(VAR_4, VAR_9->can.proc_dir);

 if (VAR_9->can.pde_rcvlist_eff)
  FUNC_0(VAR_1, VAR_9->can.proc_dir);

 if (VAR_9->can.pde_rcvlist_sff)
  FUNC_0(VAR_5, VAR_9->can.proc_dir);

 if (VAR_9->can.proc_dir)
  FUNC_0("can", VAR_9->proc_net);
}
