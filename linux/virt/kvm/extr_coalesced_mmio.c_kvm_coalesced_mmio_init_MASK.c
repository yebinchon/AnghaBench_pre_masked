
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm {int coalesced_zones; int ring_lock; int coalesced_mmio_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct kvm *VAR_3)
{
 struct page *VAR_4;
 int VAR_5;

 VAR_5 = -VAR_0;
 VAR_4 = FUNC_1(VAR_1 | VAR_2);
 if (!VAR_4)
  goto out_err;

 VAR_5 = 0;
 VAR_3->coalesced_mmio_ring = FUNC_2(VAR_4);






 FUNC_3(&VAR_3->ring_lock);
 FUNC_0(&VAR_3->coalesced_zones);

out_err:
 return VAR_5;
}
