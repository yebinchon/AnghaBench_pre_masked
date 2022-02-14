
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct xdp_sock {int rx_dropped; TYPE_1__* umem; int rx; } ;
struct xdp_buff {void* data_meta; void* data; } ;
struct TYPE_4__ {int chunk_size_nohr; int fq; int headroom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,void*,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xdp_buff*) ;
 int FUNC_3 (struct xdp_buff*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,TYPE_1__*) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct xdp_sock *VAR_2, struct xdp_buff *VAR_3, u32 VAR_4)
{
 u64 VAR_5 = VAR_2->umem->headroom;
 u64 VAR_6, VAR_7;
 void *VAR_8;
 u32 VAR_9;
 int VAR_10;

 if (!FUNC_6(VAR_2->umem->fq, &VAR_6, VAR_2->umem) ||
     VAR_4 > VAR_2->umem->chunk_size_nohr - VAR_1) {
  VAR_2->rx_dropped++;
  return -VAR_0;
 }

 if (FUNC_1(FUNC_2(VAR_3))) {
  VAR_8 = VAR_3->data;
  VAR_9 = 0;
 } else {
  VAR_8 = VAR_3->data_meta;
  VAR_9 = VAR_3->data - VAR_3->data_meta;
 }

 VAR_7 = FUNC_4(VAR_2->umem, VAR_6, VAR_5);
 FUNC_0(VAR_2->umem, VAR_7, VAR_8, VAR_4, VAR_9);

 VAR_5 += VAR_9;
 VAR_6 = FUNC_4(VAR_2->umem, VAR_6, VAR_5);
 VAR_10 = FUNC_7(VAR_2->rx, VAR_6, VAR_4);
 if (!VAR_10) {
  FUNC_5(VAR_2->umem->fq);
  FUNC_3(VAR_3);
  return 0;
 }

 VAR_2->rx_dropped++;
 return VAR_10;
}
