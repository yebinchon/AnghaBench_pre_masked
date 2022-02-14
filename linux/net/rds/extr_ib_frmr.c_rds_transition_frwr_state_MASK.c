
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fr_state; } ;
struct TYPE_5__ {TYPE_1__ frmr; } ;
struct rds_ib_mr {TYPE_3__* ic; TYPE_2__ u; } ;
typedef enum rds_ib_fr_state { ____Placeholder_rds_ib_fr_state } rds_ib_fr_state ;
struct TYPE_6__ {int i_fastreg_inuse_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void
FUNC_5(struct rds_ib_mr *VAR_2,
     enum rds_ib_fr_state VAR_3,
     enum rds_ib_fr_state VAR_4)
{
 if (FUNC_1(&VAR_2->u.frmr.fr_state,
      VAR_3, VAR_4) == VAR_3 &&
     VAR_3 == VAR_0) {



  FUNC_2();
  FUNC_0(&VAR_2->ic->i_fastreg_inuse_count);
  if (FUNC_3(&VAR_1))
   FUNC_4(&VAR_1);
 }
}
