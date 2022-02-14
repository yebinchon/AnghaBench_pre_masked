
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rrdeng_page_info {int * scratch; } ;



__attribute__((used)) static inline uint32_t *FUNC_0(struct rrdeng_page_info *VAR_0)
{
    return (uint32_t *)&VAR_0->scratch[sizeof(uint32_t)];
}
