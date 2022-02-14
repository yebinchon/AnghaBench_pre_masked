
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mic_vring {int dummy; } ;
struct TYPE_4__ {int virtio_block_fd; } ;
struct mic_info {int name; TYPE_1__ mic_virtblk; } ;
struct TYPE_6__ {int num_vq; } ;
struct TYPE_5__ {TYPE_3__ dd; int blk_config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mic_info*,TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mic_info*,int ,int ,struct mic_vring*,int *,int ) ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static bool
FUNC_4(struct mic_info *VAR_4, struct mic_vring *VAR_5)
{
 if (((unsigned long)&VAR_3.blk_config % 8) != 0) {
  FUNC_2("%s: blk_config is not 8 byte aligned.\n",
   VAR_4->name);
  return 0;
 }
 FUNC_0(VAR_4, &VAR_3.dd);
 if (VAR_0 == FUNC_1(VAR_4, VAR_4->mic_virtblk.virtio_block_fd,
      VAR_1, VAR_5, ((void*)0),
      VAR_3.dd.num_vq)) {
  FUNC_2("%s init_vr failed %s\n",
   VAR_4->name, FUNC_3(VAR_2));
  return 0;
 }
 return 1;
}
