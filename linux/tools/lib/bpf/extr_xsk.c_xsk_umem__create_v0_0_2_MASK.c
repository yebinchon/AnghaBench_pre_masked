
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_umem_config_v1 {int dummy; } ;
struct xsk_umem_config {scalar_t__ flags; } ;
struct xsk_umem {int dummy; } ;
struct xsk_ring_prod {int dummy; } ;
struct xsk_ring_cons {int dummy; } ;
typedef int __u64 ;


 int FUNC_0 (struct xsk_umem_config*,struct xsk_umem_config const*,int) ;
 int FUNC_1 (struct xsk_umem**,void*,int ,struct xsk_ring_prod*,struct xsk_ring_cons*,struct xsk_umem_config*) ;

int FUNC_2(struct xsk_umem **VAR_0, void *VAR_1,
       __u64 VAR_2, struct xsk_ring_prod *VAR_3,
       struct xsk_ring_cons *VAR_4,
       const struct xsk_umem_config *VAR_5)
{
 struct xsk_umem_config VAR_6;

 FUNC_0(&VAR_6, VAR_5, sizeof(struct xsk_umem_config_v1));
 VAR_6.flags = 0;

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
     &VAR_6);
}
