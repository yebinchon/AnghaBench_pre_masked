
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vdpctx {scalar_t__ recent_vsync_time; scalar_t__ vsync_interval; } ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static inline uint64_t FUNC_0(struct vdpctx *VAR_0, uint64_t VAR_1)
{
    int64_t VAR_2 = (int64_t)(VAR_1 - VAR_0->recent_vsync_time);
    int64_t VAR_3 = VAR_2 % VAR_0->vsync_interval;
    if (VAR_3 < 0)
        VAR_3 += VAR_0->vsync_interval;
    return VAR_1 - VAR_3;
}
