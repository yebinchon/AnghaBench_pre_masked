
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct virtio_vsock_pkt_info {size_t flags; int op; int type; int msg; int vsk; int reply; } ;
struct TYPE_2__ {void* len; void* flags; void* dst_port; void* src_port; void* dst_cid; void* src_cid; void* op; void* type; } ;
struct virtio_vsock_pkt {size_t len; size_t buf_len; struct virtio_vsock_pkt* buf; int vsk; int reply; TYPE_1__ hdr; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (size_t) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (struct virtio_vsock_pkt*) ;
 struct virtio_vsock_pkt* FUNC_4 (size_t,int ) ;
 struct virtio_vsock_pkt* FUNC_5 (int,int ) ;
 int FUNC_6 (struct virtio_vsock_pkt*,int ,size_t) ;
 int FUNC_7 (size_t,size_t,size_t,size_t,size_t,int ,int ,size_t) ;

__attribute__((used)) static struct virtio_vsock_pkt *
FUNC_8(struct virtio_vsock_pkt_info *VAR_1,
      size_t VAR_2,
      u32 VAR_3,
      u32 VAR_4,
      u32 VAR_5,
      u32 VAR_6)
{
 struct virtio_vsock_pkt *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->hdr.type = FUNC_0(VAR_1->type);
 VAR_7->hdr.op = FUNC_0(VAR_1->op);
 VAR_7->hdr.src_cid = FUNC_2(VAR_3);
 VAR_7->hdr.dst_cid = FUNC_2(VAR_5);
 VAR_7->hdr.src_port = FUNC_1(VAR_4);
 VAR_7->hdr.dst_port = FUNC_1(VAR_6);
 VAR_7->hdr.flags = FUNC_1(VAR_1->flags);
 VAR_7->len = VAR_2;
 VAR_7->hdr.len = FUNC_1(VAR_2);
 VAR_7->reply = VAR_1->reply;
 VAR_7->vsk = VAR_1->vsk;

 if (VAR_1->msg && VAR_2 > 0) {
  VAR_7->buf = FUNC_4(VAR_2, VAR_0);
  if (!VAR_7->buf)
   goto out_pkt;

  VAR_7->buf_len = VAR_2;

  VAR_8 = FUNC_6(VAR_7->buf, VAR_1->msg, VAR_2);
  if (VAR_8)
   goto out;
 }

 FUNC_7(VAR_3, VAR_4,
      VAR_5, VAR_6,
      VAR_2,
      VAR_1->type,
      VAR_1->op,
      VAR_1->flags);

 return VAR_7;

out:
 FUNC_3(VAR_7->buf);
out_pkt:
 FUNC_3(VAR_7);
 return ((void*)0);
}
