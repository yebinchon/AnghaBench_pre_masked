
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int remote_tlb_flush; } ;
struct kvm {int tlbs_dirty; TYPE_1__ stat; } ;


 int VAR_0 ;
 int FUNC_0 (int *,long,int ) ;
 int FUNC_1 (struct kvm*) ;
 scalar_t__ FUNC_2 (struct kvm*,int ) ;
 long FUNC_3 (int *) ;

void FUNC_4(struct kvm *VAR_1)
{




 long VAR_2 = FUNC_3(&VAR_1->tlbs_dirty);
 if (!FUNC_1(VAR_1)
     || FUNC_2(VAR_1, VAR_0))
  ++VAR_1->stat.remote_tlb_flush;
 FUNC_0(&VAR_1->tlbs_dirty, VAR_2, 0);
}
