
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xsk_umem_info {int fq; int umem; } ;
struct xsk_socket_info {struct xsk_umem_info* umem; int tx; int rx; int xsk; } ;
struct xsk_socket_config {int tx_size; int bind_flags; int xdp_flags; scalar_t__ libbpf_flags; int rx_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 struct xsk_socket_info* FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int ,int ,int *,int *,struct xsk_socket_config*) ;

__attribute__((used)) static struct xsk_socket_info *FUNC_7(struct xsk_umem_info *VAR_10)
{
 struct xsk_socket_config VAR_11;
 struct xsk_socket_info *VAR_12;
 int VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_12 = FUNC_1(1, sizeof(*VAR_12));
 if (!VAR_12)
  FUNC_2(VAR_2);

 VAR_12->umem = VAR_10;
 VAR_11.rx_size = VAR_0;
 VAR_11.tx_size = VAR_1;
 VAR_11.libbpf_flags = 0;
 VAR_11.xdp_flags = VAR_7;
 VAR_11.bind_flags = VAR_6;
 VAR_13 = FUNC_6(&VAR_12->xsk, VAR_3, VAR_5, VAR_10->umem,
     &VAR_12->rx, &VAR_12->tx, &VAR_11);
 if (VAR_13)
  FUNC_2(-VAR_13);

 VAR_13 = FUNC_0(VAR_4, &VAR_9, VAR_7);
 if (VAR_13)
  FUNC_2(-VAR_13);

 VAR_13 = FUNC_4(&VAR_12->umem->fq,
         VAR_1,
         &VAR_14);
 if (VAR_13 != VAR_1)
  FUNC_2(-VAR_13);
 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++)
  *FUNC_3(&VAR_12->umem->fq, VAR_14++) =
   VAR_15 * VAR_8;
 FUNC_5(&VAR_12->umem->fq,
         VAR_1);

 return VAR_12;
}
