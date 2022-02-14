
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_net_hdr {int dummy; } ;
struct mic_vring {int dummy; } ;
struct mic_copy_desc {int vr_idx; int update_used; TYPE_1__* iov; } ;
typedef void* ssize_t ;
struct TYPE_2__ {void* iov_len; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(int VAR_1, bool VAR_2, struct mic_vring *VAR_3,
    struct mic_copy_desc *VAR_4, ssize_t VAR_5)
{
 VAR_4->vr_idx = VAR_2 ? 0 : 1;
 VAR_4->update_used = 1;
 if (VAR_1 == VAR_0)
  VAR_4->iov[1].iov_len = VAR_5 - sizeof(struct virtio_net_hdr);
 else
  VAR_4->iov[0].iov_len = VAR_5;
}
