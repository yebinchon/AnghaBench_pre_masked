
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int virtio_block_fd; } ;
struct TYPE_5__ {int virtio_console_fd; } ;
struct TYPE_4__ {int virtio_net_fd; } ;
struct mic_info {int id; int name; TYPE_3__ mic_virtblk; TYPE_2__ mic_console; TYPE_1__ mic_net; } ;
struct mic_device_desc {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int,int ,struct mic_device_desc*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct mic_info *VAR_4, struct mic_device_desc *VAR_5)
{
 char VAR_6[VAR_2];
 int VAR_7, VAR_8;

 FUNC_4(VAR_6, VAR_2, "/dev/vop_virtio%d", VAR_4->id);
 VAR_7 = FUNC_3(VAR_6, VAR_1);
 if (VAR_7 < 0) {
  FUNC_2("Could not open %s %s\n", VAR_6, FUNC_5(VAR_3));
  return;
 }

 VAR_8 = FUNC_1(VAR_7, VAR_0, VAR_5);
 if (VAR_8 < 0) {
  FUNC_2("Could not add %d %s\n", VAR_5->type, FUNC_5(VAR_3));
  FUNC_0(VAR_7);
  return;
 }
 switch (VAR_5->type) {
 case 128:
  VAR_4->mic_net.virtio_net_fd = VAR_7;
  FUNC_2("Added VIRTIO_ID_NET for %s\n", VAR_4->name);
  break;
 case 129:
  VAR_4->mic_console.virtio_console_fd = VAR_7;
  FUNC_2("Added VIRTIO_ID_CONSOLE for %s\n", VAR_4->name);
  break;
 case 130:
  VAR_4->mic_virtblk.virtio_block_fd = VAR_7;
  FUNC_2("Added VIRTIO_ID_BLOCK for %s\n", VAR_4->name);
  break;
 }
}
