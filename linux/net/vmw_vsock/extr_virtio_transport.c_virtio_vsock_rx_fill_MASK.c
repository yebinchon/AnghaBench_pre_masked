
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {scalar_t__ num_free; } ;
struct virtio_vsock_pkt {int buf_len; int len; int * buf; int hdr; } ;
struct virtio_vsock {scalar_t__ rx_buf_nr; scalar_t__ rx_buf_max_nr; struct virtqueue** vqs; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * FUNC_0 (int,int ) ;
 struct virtio_vsock_pkt* FUNC_1 (int,int ) ;
 int FUNC_2 (struct scatterlist*,int *,int) ;
 int FUNC_3 (struct virtio_vsock_pkt*) ;
 int FUNC_4 (struct virtqueue*,struct scatterlist**,int ,int,struct virtio_vsock_pkt*,int ) ;
 int FUNC_5 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_6(struct virtio_vsock *VAR_3)
{
 int VAR_4 = VAR_1;
 struct virtio_vsock_pkt *VAR_5;
 struct scatterlist VAR_6, VAR_7, *VAR_8[2];
 struct virtqueue *VAR_9;
 int VAR_10;

 VAR_9 = VAR_3->vqs[VAR_2];

 do {
  VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
  if (!VAR_5)
   break;

  VAR_5->buf = FUNC_0(VAR_4, VAR_0);
  if (!VAR_5->buf) {
   FUNC_3(VAR_5);
   break;
  }

  VAR_5->buf_len = VAR_4;
  VAR_5->len = VAR_4;

  FUNC_2(&VAR_6, &VAR_5->hdr, sizeof(VAR_5->hdr));
  VAR_8[0] = &VAR_6;

  FUNC_2(&VAR_7, VAR_5->buf, VAR_4);
  VAR_8[1] = &VAR_7;
  VAR_10 = FUNC_4(VAR_9, VAR_8, 0, 2, VAR_5, VAR_0);
  if (VAR_10) {
   FUNC_3(VAR_5);
   break;
  }
  VAR_3->rx_buf_nr++;
 } while (VAR_9->num_free);
 if (VAR_3->rx_buf_nr > VAR_3->rx_buf_max_nr)
  VAR_3->rx_buf_max_nr = VAR_3->rx_buf_nr;
 FUNC_5(VAR_9);
}
