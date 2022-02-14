
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rds_ib_work_ring {scalar_t__ w_alloc_ctr; scalar_t__ w_nr; int w_free_ctr; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline u32 FUNC_2(struct rds_ib_work_ring *VAR_0)
{
 u32 VAR_1;


 VAR_1 = VAR_0->w_alloc_ctr - (u32) FUNC_1(&VAR_0->w_free_ctr);
 FUNC_0(VAR_1 > VAR_0->w_nr);

 return VAR_1;
}
