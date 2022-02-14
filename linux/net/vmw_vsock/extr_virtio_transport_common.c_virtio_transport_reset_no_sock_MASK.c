
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_vsock_pkt_info {scalar_t__ op; scalar_t__ type; int reply; } ;
struct TYPE_2__ {int src_port; int src_cid; int dst_port; int dst_cid; int op; int type; } ;
struct virtio_vsock_pkt {TYPE_1__ hdr; } ;
struct virtio_transport {int (* send_pkt ) (struct virtio_vsock_pkt*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct virtio_vsock_pkt*) ;
 struct virtio_vsock_pkt* FUNC_4 (struct virtio_vsock_pkt_info*,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct virtio_vsock_pkt*) ;
 struct virtio_transport* FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct virtio_vsock_pkt *VAR_3)
{
 const struct virtio_transport *VAR_4;
 struct virtio_vsock_pkt *VAR_5;
 struct virtio_vsock_pkt_info VAR_6 = {
  .op = VAR_2,
  .type = FUNC_0(VAR_3->hdr.type),
  .reply = 1,
 };


 if (FUNC_0(VAR_3->hdr.op) == VAR_2)
  return 0;

 VAR_5 = FUNC_4(&VAR_6, 0,
        FUNC_2(VAR_3->hdr.dst_cid),
        FUNC_1(VAR_3->hdr.dst_port),
        FUNC_2(VAR_3->hdr.src_cid),
        FUNC_1(VAR_3->hdr.src_port));
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_6();
 if (!VAR_4) {
  FUNC_5(VAR_5);
  return -VAR_1;
 }

 return VAR_4->send_pkt(VAR_5);
}
