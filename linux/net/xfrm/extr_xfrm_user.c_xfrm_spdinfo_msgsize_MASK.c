
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrmu_spdinfo {int dummy; } ;
struct xfrmu_spdhthresh {int dummy; } ;
struct xfrmu_spdhinfo {int dummy; } ;


 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;

__attribute__((used)) static inline unsigned int FUNC_2(void)
{
 return FUNC_0(4)
        + FUNC_1(sizeof(struct xfrmu_spdinfo))
        + FUNC_1(sizeof(struct xfrmu_spdhinfo))
        + FUNC_1(sizeof(struct xfrmu_spdhthresh))
        + FUNC_1(sizeof(struct xfrmu_spdhthresh));
}
