
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {size_t datalen; int * data; } ;
typedef TYPE_1__ send_context ;
struct TYPE_5__ {scalar_t__ csum; int cmd; } ;
typedef TYPE_2__ btrfs_send_command ;



__attribute__((used)) static void FUNC_0(send_context* VAR_0, uint16_t VAR_1) {
    btrfs_send_command* VAR_2 = (btrfs_send_command*)&VAR_0->data[VAR_0->datalen];

    VAR_2->cmd = VAR_1;
    VAR_2->csum = 0;

    VAR_0->datalen += sizeof(btrfs_send_command);
}
