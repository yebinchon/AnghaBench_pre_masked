
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {size_t sv_nrpools; struct svc_pool* sv_pools; } ;
struct svc_pool {int dummy; } ;



__attribute__((used)) static inline struct svc_pool *
FUNC_0(struct svc_serv *VAR_0, struct svc_pool *VAR_1, unsigned int *VAR_2)
{
 if (VAR_1 != ((void*)0))
  return VAR_1;

 return &VAR_0->sv_pools[(*VAR_2)++ % VAR_0->sv_nrpools];
}
