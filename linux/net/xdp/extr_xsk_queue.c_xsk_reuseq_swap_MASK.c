
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xdp_umem_fq_reuse {scalar_t__ nentries; scalar_t__ length; int handles; } ;
struct xdp_umem {struct xdp_umem_fq_reuse* fq_reuse; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int ,int ) ;

struct xdp_umem_fq_reuse *FUNC_2(struct xdp_umem *VAR_0,
       struct xdp_umem_fq_reuse *VAR_1)
{
 struct xdp_umem_fq_reuse *VAR_2 = VAR_0->fq_reuse;

 if (!VAR_2) {
  VAR_0->fq_reuse = VAR_1;
  return ((void*)0);
 }

 if (VAR_1->nentries < VAR_2->length)
  return VAR_1;

 FUNC_1(VAR_1->handles, VAR_2->handles,
        FUNC_0(VAR_2->length, sizeof(u64)));
 VAR_1->length = VAR_2->length;

 VAR_0->fq_reuse = VAR_1;
 return VAR_2;
}
