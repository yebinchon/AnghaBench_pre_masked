
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int id; } ;
struct xdp_rxq_info {scalar_t__ reg_state; TYPE_1__ mem; } ;
struct xdp_mem_allocator {int page_pool; int node; void* allocator; TYPE_1__ mem; } ;
typedef int gfp_t ;
typedef enum xdp_mem_type { ____Placeholder_xdp_mem_type } xdp_mem_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct xdp_mem_allocator*) ;
 struct xdp_mem_allocator* FUNC_9 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (int ,int*,int *) ;
 int FUNC_14 (struct xdp_mem_allocator*,struct xdp_rxq_info*) ;

int FUNC_15(struct xdp_rxq_info *VAR_12,
          enum xdp_mem_type VAR_13, void *VAR_14)
{
 struct xdp_mem_allocator *VAR_15;
 gfp_t VAR_16 = VAR_4;
 int VAR_17, VAR_18, VAR_19;
 void *VAR_20;

 if (VAR_12->reg_state != VAR_7) {
  FUNC_2(1, "Missing register, driver bug");
  return -VAR_0;
 }

 if (!FUNC_4(VAR_13))
  return -VAR_3;

 VAR_12->mem.type = VAR_13;

 if (!VAR_14) {
  if (VAR_13 == VAR_5 || VAR_13 == VAR_6)
   return -VAR_1;
  return 0;
 }


 if (!VAR_9) {
  FUNC_10(&VAR_10);
  VAR_19 = FUNC_6();
  FUNC_11(&VAR_10);
  if (VAR_19 < 0) {
   FUNC_3(1);
   return VAR_19;
  }
 }

 VAR_15 = FUNC_9(sizeof(*VAR_15), VAR_16);
 if (!VAR_15)
  return -VAR_2;

 FUNC_10(&VAR_10);
 VAR_17 = FUNC_5(VAR_16);
 if (VAR_17 < 0) {
  VAR_18 = VAR_17;
  goto err;
 }
 VAR_12->mem.id = VAR_17;
 VAR_15->mem = VAR_12->mem;
 VAR_15->allocator = VAR_14;


 VAR_20 = FUNC_13(VAR_8, &VAR_17, &VAR_15->node);
 if (FUNC_0(VAR_20)) {
  FUNC_7(&VAR_11, VAR_12->mem.id);
  VAR_12->mem.id = 0;
  VAR_18 = FUNC_1(VAR_20);
  goto err;
 }

 if (VAR_13 == VAR_5)
  FUNC_12(VAR_15->page_pool);

 FUNC_11(&VAR_10);

 FUNC_14(VAR_15, VAR_12);
 return 0;
err:
 FUNC_11(&VAR_10);
 FUNC_8(VAR_15);
 return VAR_18;
}
