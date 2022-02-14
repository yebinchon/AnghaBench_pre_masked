
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct xsk_queue {struct xdp_ring* ring; void* ring_mask; void* nentries; } ;
struct xdp_ring {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct xsk_queue*) ;
 struct xsk_queue* FUNC_3 (int,int) ;
 size_t FUNC_4 (struct xsk_queue*) ;
 size_t FUNC_5 (struct xsk_queue*) ;

struct xsk_queue *FUNC_6(u32 VAR_5, bool VAR_6)
{
 struct xsk_queue *VAR_7;
 gfp_t VAR_8;
 size_t VAR_9;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->nentries = VAR_5;
 VAR_7->ring_mask = VAR_5 - 1;

 VAR_8 = VAR_0 | VAR_4 | VAR_3 |
      VAR_1 | VAR_2;
 VAR_9 = VAR_6 ? FUNC_5(VAR_7) :
        FUNC_4(VAR_7);

 VAR_7->ring = (struct xdp_ring *)FUNC_0(VAR_8,
            FUNC_1(VAR_9));
 if (!VAR_7->ring) {
  FUNC_2(VAR_7);
  return ((void*)0);
 }

 return VAR_7;
}
