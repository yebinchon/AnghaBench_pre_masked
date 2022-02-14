
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sxdp ;
struct xsk_umem {scalar_t__ fd; scalar_t__ refcount; } ;
struct xsk_socket_config {int dummy; } ;
struct TYPE_6__ {int rx_size; int tx_size; int libbpf_flags; int bind_flags; } ;
struct xsk_socket {scalar_t__ fd; char* ifname; int prog_fd; TYPE_3__ config; int queue_id; scalar_t__ ifindex; struct xsk_ring_prod* tx; struct xsk_ring_cons* rx; struct xsk_umem* umem; scalar_t__ outstanding_tx; } ;
struct xsk_ring_prod {int mask; int size; int cached_cons; void* ring; void* flags; void* consumer; void* producer; } ;
struct xsk_ring_cons {int mask; int size; void* ring; void* flags; void* consumer; void* producer; } ;
struct TYPE_4__ {int desc; int producer; int consumer; int flags; } ;
struct TYPE_5__ {int desc; int producer; int consumer; int flags; } ;
struct xdp_mmap_offsets {TYPE_1__ rx; TYPE_2__ tx; } ;
struct xdp_desc {int dummy; } ;
struct sockaddr_xdp {int sxdp_flags; int sxdp_queue_id; scalar_t__ sxdp_ifindex; int sxdp_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int off ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 struct xsk_socket* FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_19 ;
 int FUNC_3 (struct xsk_socket*) ;
 int FUNC_4 (scalar_t__,int ,int ,struct xdp_mmap_offsets*,int*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,int) ;
 void* FUNC_7 (int *,int,int,int,scalar_t__,int ) ;
 int FUNC_8 (void*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__,int ,int ,int*,int) ;
 scalar_t__ FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (TYPE_3__*,struct xsk_socket_config const*) ;
 int FUNC_13 (struct xsk_socket*) ;

int FUNC_14(struct xsk_socket **VAR_20, const char *VAR_21,
         __u32 VAR_22, struct xsk_umem *VAR_23,
         struct xsk_ring_cons *VAR_24, struct xsk_ring_prod *VAR_25,
         const struct xsk_socket_config *VAR_26)
{
 void *VAR_27 = ((void*)0), *VAR_28 = ((void*)0);
 struct sockaddr_xdp VAR_29 = {};
 struct xdp_mmap_offsets VAR_30;
 struct xsk_socket *VAR_31;
 socklen_t VAR_32;
 int VAR_33;

 if (!VAR_23 || !VAR_20 || !VAR_24 || !VAR_25)
  return -VAR_2;

 if (VAR_23->refcount) {
  FUNC_9("Error: shared umems not supported by libbpf.\n");
  return -VAR_1;
 }

 VAR_31 = FUNC_1(1, sizeof(*VAR_31));
 if (!VAR_31)
  return -VAR_3;

 if (VAR_23->refcount++ > 0) {
  VAR_31->fd = FUNC_11(VAR_0, VAR_11, 0);
  if (VAR_31->fd < 0) {
   VAR_33 = -VAR_19;
   goto out_xsk_alloc;
  }
 } else {
  VAR_31->fd = VAR_23->fd;
 }

 VAR_31->outstanding_tx = 0;
 VAR_31->queue_id = VAR_22;
 VAR_31->umem = VAR_23;
 VAR_31->ifindex = FUNC_5(VAR_21);
 if (!VAR_31->ifindex) {
  VAR_33 = -VAR_19;
  goto out_socket;
 }
 FUNC_6(VAR_31->ifname, VAR_21, VAR_4 - 1);
 VAR_31->ifname[VAR_4 - 1] = '\0';

 VAR_33 = FUNC_12(&VAR_31->config, VAR_26);
 if (VAR_33)
  goto out_socket;

 if (VAR_24) {
  VAR_33 = FUNC_10(VAR_31->fd, VAR_12, VAR_16,
     &VAR_31->config.rx_size,
     sizeof(VAR_31->config.rx_size));
  if (VAR_33) {
   VAR_33 = -VAR_19;
   goto out_socket;
  }
 }
 if (VAR_25) {
  VAR_33 = FUNC_10(VAR_31->fd, VAR_12, VAR_17,
     &VAR_31->config.tx_size,
     sizeof(VAR_31->config.tx_size));
  if (VAR_33) {
   VAR_33 = -VAR_19;
   goto out_socket;
  }
 }

 VAR_32 = sizeof(VAR_30);
 VAR_33 = FUNC_4(VAR_31->fd, VAR_12, VAR_13, &VAR_30, &VAR_32);
 if (VAR_33) {
  VAR_33 = -VAR_19;
  goto out_socket;
 }

 if (VAR_24) {
  VAR_27 = FUNC_7(((void*)0), VAR_30.rx.desc +
         VAR_31->config.rx_size * sizeof(struct xdp_desc),
         VAR_9 | VAR_10, VAR_7 | VAR_6,
         VAR_31->fd, VAR_14);
  if (VAR_27 == VAR_5) {
   VAR_33 = -VAR_19;
   goto out_socket;
  }

  VAR_24->mask = VAR_31->config.rx_size - 1;
  VAR_24->size = VAR_31->config.rx_size;
  VAR_24->producer = VAR_27 + VAR_30.rx.producer;
  VAR_24->consumer = VAR_27 + VAR_30.rx.consumer;
  VAR_24->flags = VAR_27 + VAR_30.rx.flags;
  VAR_24->ring = VAR_27 + VAR_30.rx.desc;
 }
 VAR_31->rx = VAR_24;

 if (VAR_25) {
  VAR_28 = FUNC_7(((void*)0), VAR_30.tx.desc +
         VAR_31->config.tx_size * sizeof(struct xdp_desc),
         VAR_9 | VAR_10, VAR_7 | VAR_6,
         VAR_31->fd, VAR_15);
  if (VAR_28 == VAR_5) {
   VAR_33 = -VAR_19;
   goto out_mmap_rx;
  }

  VAR_25->mask = VAR_31->config.tx_size - 1;
  VAR_25->size = VAR_31->config.tx_size;
  VAR_25->producer = VAR_28 + VAR_30.tx.producer;
  VAR_25->consumer = VAR_28 + VAR_30.tx.consumer;
  VAR_25->flags = VAR_28 + VAR_30.tx.flags;
  VAR_25->ring = VAR_28 + VAR_30.tx.desc;
  VAR_25->cached_cons = VAR_31->config.tx_size;
 }
 VAR_31->tx = VAR_25;

 VAR_29.sxdp_family = VAR_8;
 VAR_29.sxdp_ifindex = VAR_31->ifindex;
 VAR_29.sxdp_queue_id = VAR_31->queue_id;
 VAR_29.sxdp_flags = VAR_31->config.bind_flags;

 VAR_33 = FUNC_0(VAR_31->fd, (struct sockaddr *)&VAR_29, sizeof(VAR_29));
 if (VAR_33) {
  VAR_33 = -VAR_19;
  goto out_mmap_tx;
 }

 VAR_31->prog_fd = -1;

 if (!(VAR_31->config.libbpf_flags & VAR_18)) {
  VAR_33 = FUNC_13(VAR_31);
  if (VAR_33)
   goto out_mmap_tx;
 }

 *VAR_20 = VAR_31;
 return 0;

out_mmap_tx:
 if (VAR_25)
  FUNC_8(VAR_28, VAR_30.tx.desc +
         VAR_31->config.tx_size * sizeof(struct xdp_desc));
out_mmap_rx:
 if (VAR_24)
  FUNC_8(VAR_27, VAR_30.rx.desc +
         VAR_31->config.rx_size * sizeof(struct xdp_desc));
out_socket:
 if (--VAR_23->refcount)
  FUNC_2(VAR_31->fd);
out_xsk_alloc:
 FUNC_3(VAR_31);
 return VAR_33;
}
