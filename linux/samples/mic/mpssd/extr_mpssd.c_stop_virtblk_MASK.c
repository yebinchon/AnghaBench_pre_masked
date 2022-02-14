
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int virtio_block_fd; int block_dp; } ;
struct mic_info {TYPE_2__ mic_virtblk; int name; } ;
struct _mic_vring_info {int dummy; } ;
struct TYPE_4__ {int num_vq; } ;
struct TYPE_6__ {TYPE_1__ dd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct mic_info *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(FUNC_1(VAR_2,
      VAR_1) +
        sizeof(struct _mic_vring_info));
 VAR_7 = FUNC_4(VAR_5->mic_virtblk.block_dp,
  VAR_0 + VAR_6 * VAR_4.dd.num_vq);
 if (VAR_7 < 0)
  FUNC_3("%s munmap errno %d\n", VAR_5->name, VAR_3);
 FUNC_2(VAR_5->mic_virtblk.virtio_block_fd);
}
