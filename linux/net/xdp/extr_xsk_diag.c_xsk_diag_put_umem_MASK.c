
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_umem {scalar_t__ cq; scalar_t__ fq; int users; scalar_t__ zc; int queue_id; TYPE_1__* dev; scalar_t__ headroom; scalar_t__ chunk_size_nohr; int npgs; int size; int id; } ;
struct xdp_sock {struct xdp_umem* umem; } ;
struct xdp_diag_umem {int refs; int flags; int queue_id; int ifindex; scalar_t__ headroom; scalar_t__ chunk_size; int num_pages; int size; int id; } ;
struct sk_buff {int dummy; } ;
typedef int du ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct xdp_diag_umem*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(const struct xdp_sock *VAR_4, struct sk_buff *VAR_5)
{
 struct xdp_umem *VAR_6 = VAR_4->umem;
 struct xdp_diag_umem VAR_7 = {};
 int VAR_8;

 if (!VAR_6)
  return 0;

 VAR_7.id = VAR_6->id;
 VAR_7.size = VAR_6->size;
 VAR_7.num_pages = VAR_6->npgs;
 VAR_7.chunk_size = VAR_6->chunk_size_nohr + VAR_6->headroom;
 VAR_7.headroom = VAR_6->headroom;
 VAR_7.ifindex = VAR_6->dev ? VAR_6->dev->ifindex : 0;
 VAR_7.queue_id = VAR_6->queue_id;
 VAR_7.flags = 0;
 if (VAR_6->zc)
  VAR_7.flags |= VAR_3;
 VAR_7.refs = FUNC_1(&VAR_6->users);

 VAR_8 = FUNC_0(VAR_5, VAR_0, sizeof(VAR_7), &VAR_7);

 if (!VAR_8 && VAR_6->fq)
  VAR_8 = FUNC_2(VAR_6->fq, VAR_2, VAR_5);
 if (!VAR_8 && VAR_6->cq) {
  VAR_8 = FUNC_2(VAR_6->cq, VAR_1,
     VAR_5);
 }
 return VAR_8;
}
