
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xsk_queue {int nentries; } ;
struct xdp_ring {int dummy; } ;
struct xdp_desc {int dummy; } ;



__attribute__((used)) static u32 FUNC_0(struct xsk_queue *VAR_0)
{
 return sizeof(struct xdp_ring) + VAR_0->nentries * sizeof(struct xdp_desc);
}
