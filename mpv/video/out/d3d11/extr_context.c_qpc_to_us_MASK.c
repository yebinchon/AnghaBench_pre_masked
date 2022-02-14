
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_swapchain {struct priv* priv; } ;
struct priv {int perf_freq; } ;
typedef int int64_t ;



__attribute__((used)) static int64_t FUNC_0(struct ra_swapchain *VAR_0, int64_t VAR_1)
{
    struct priv *VAR_2 = VAR_0->priv;




    return VAR_1 / VAR_2->perf_freq * 1000000 +
        VAR_1 % VAR_2->perf_freq * 1000000 / VAR_2->perf_freq;
}
