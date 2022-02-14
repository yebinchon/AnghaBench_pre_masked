
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {void* base; } ;
struct nfit_blk_mmio {TYPE_1__ addr; } ;
struct nfit_blk {struct nfit_blk_mmio* mmio; } ;
struct nd_region {int dummy; } ;
struct nd_blk_region {struct nd_region nd_region; struct nfit_blk* blk_provider_data; } ;
typedef int resource_size_t ;


 size_t VAR_0 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,void*,int ) ;
 unsigned int FUNC_2 (struct nd_region*) ;
 int FUNC_3 (struct nd_region*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct nd_blk_region *VAR_1, resource_size_t VAR_2,
  void *VAR_3, u64 VAR_4, int VAR_5)
{
 struct nfit_blk *VAR_6 = VAR_1->blk_provider_data;
 struct nfit_blk_mmio *VAR_7 = &VAR_6->mmio[VAR_0];
 struct nd_region *VAR_8 = &VAR_1->nd_region;
 unsigned int VAR_9;

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_5)
  FUNC_1(VAR_7->addr.base + VAR_2, VAR_3, VAR_4);
 else {
  FUNC_1(VAR_3, VAR_7->addr.base + VAR_2, VAR_4);


  FUNC_0(VAR_7->addr.base + VAR_2, VAR_4);
 }
 FUNC_3(VAR_8, VAR_9);

 return 0;
}
