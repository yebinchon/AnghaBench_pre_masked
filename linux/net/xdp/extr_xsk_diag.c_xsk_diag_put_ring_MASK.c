
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_queue {int nentries; } ;
struct xdp_diag_ring {int entries; } ;
struct sk_buff {int dummy; } ;
typedef int dr ;


 int FUNC_0 (struct sk_buff*,int,int,struct xdp_diag_ring*) ;

__attribute__((used)) static int FUNC_1(const struct xsk_queue *VAR_0, int VAR_1,
        struct sk_buff *VAR_2)
{
 struct xdp_diag_ring VAR_3 = {};

 VAR_3.entries = VAR_0->nentries;
 return FUNC_0(VAR_2, VAR_1, sizeof(VAR_3), &VAR_3);
}
