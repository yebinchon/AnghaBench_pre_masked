
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_socket_config {int libbpf_flags; scalar_t__ bind_flags; scalar_t__ xdp_flags; int tx_size; int rx_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct xsk_socket_config *VAR_4,
         const struct xsk_socket_config *VAR_5)
{
 if (!VAR_5) {
  VAR_4->rx_size = VAR_2;
  VAR_4->tx_size = VAR_3;
  VAR_4->libbpf_flags = 0;
  VAR_4->xdp_flags = 0;
  VAR_4->bind_flags = 0;
  return 0;
 }

 if (VAR_5->libbpf_flags & ~VAR_1)
  return -VAR_0;

 VAR_4->rx_size = VAR_5->rx_size;
 VAR_4->tx_size = VAR_5->tx_size;
 VAR_4->libbpf_flags = VAR_5->libbpf_flags;
 VAR_4->xdp_flags = VAR_5->xdp_flags;
 VAR_4->bind_flags = VAR_5->bind_flags;

 return 0;
}
