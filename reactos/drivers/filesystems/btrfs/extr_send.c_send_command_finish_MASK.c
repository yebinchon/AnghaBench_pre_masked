
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t datalen; int * data; } ;
typedef TYPE_1__ send_context ;
struct TYPE_5__ {size_t length; int csum; } ;
typedef TYPE_2__ btrfs_send_command ;
typedef size_t ULONG ;


 int FUNC_0 (int ,int *,size_t) ;

__attribute__((used)) static void FUNC_1(send_context* VAR_0, ULONG VAR_1) {
    btrfs_send_command* VAR_2 = (btrfs_send_command*)&VAR_0->data[VAR_1];

    VAR_2->length = VAR_0->datalen - VAR_1 - sizeof(btrfs_send_command);
    VAR_2->csum = FUNC_0(0, (uint8_t*)VAR_2, VAR_0->datalen - VAR_1);
}
