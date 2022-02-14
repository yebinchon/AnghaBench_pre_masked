
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_blk_outhdr {int dummy; } ;
struct mic_copy_desc {int iovcnt; int update_used; scalar_t__ vr_idx; struct iovec* iov; } ;
struct iovec {int iov_len; struct virtio_blk_outhdr* iov_base; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct mic_copy_desc*) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, struct virtio_blk_outhdr *VAR_2, __u32 VAR_3)
{
 struct iovec VAR_4;
 struct mic_copy_desc VAR_5;

 VAR_4.iov_len = sizeof(*VAR_2);
 VAR_4.iov_base = VAR_2;
 VAR_5.iov = &VAR_4;
 VAR_5.iovcnt = 1;
 VAR_5.vr_idx = 0;
 VAR_5.update_used = 0;
 return FUNC_0(VAR_1, VAR_0, &VAR_5);
}
