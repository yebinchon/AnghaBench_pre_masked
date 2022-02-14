
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {size_t rx_size; size_t tx_size; } ;
struct xsk_socket {int prog_fd; scalar_t__ fd; TYPE_6__* umem; TYPE_5__ config; TYPE_3__* tx; TYPE_1__* rx; } ;
struct TYPE_10__ {scalar_t__ desc; } ;
struct TYPE_8__ {scalar_t__ desc; } ;
struct xdp_mmap_offsets {TYPE_4__ tx; TYPE_2__ rx; } ;
struct xdp_desc {int dummy; } ;
typedef int socklen_t ;
typedef int off ;
struct TYPE_12__ {scalar_t__ fd; int refcount; } ;
struct TYPE_9__ {scalar_t__ ring; } ;
struct TYPE_7__ {scalar_t__ ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct xsk_socket*) ;
 int FUNC_2 (scalar_t__,int ,int ,struct xdp_mmap_offsets*,int*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct xsk_socket*) ;

void FUNC_5(struct xsk_socket *VAR_2)
{
 size_t VAR_3 = sizeof(struct xdp_desc);
 struct xdp_mmap_offsets VAR_4;
 socklen_t VAR_5;
 int VAR_6;

 if (!VAR_2)
  return;

 if (VAR_2->prog_fd != -1) {
  FUNC_4(VAR_2);
  FUNC_0(VAR_2->prog_fd);
 }

 VAR_5 = sizeof(VAR_4);
 VAR_6 = FUNC_2(VAR_2->fd, VAR_0, VAR_1, &VAR_4, &VAR_5);
 if (!VAR_6) {
  if (VAR_2->rx) {
   FUNC_3(VAR_2->rx->ring - VAR_4.rx.desc,
          VAR_4.rx.desc + VAR_2->config.rx_size * VAR_3);
  }
  if (VAR_2->tx) {
   FUNC_3(VAR_2->tx->ring - VAR_4.tx.desc,
          VAR_4.tx.desc + VAR_2->config.tx_size * VAR_3);
  }

 }

 VAR_2->umem->refcount--;



 if (VAR_2->fd != VAR_2->umem->fd)
  FUNC_0(VAR_2->fd);
 FUNC_1(VAR_2);
}
