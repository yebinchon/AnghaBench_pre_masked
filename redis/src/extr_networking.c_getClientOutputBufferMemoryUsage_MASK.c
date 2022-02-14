
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int listNode ;
typedef int clientReplyBlock ;
struct TYPE_3__ {unsigned long reply_bytes; int reply; } ;
typedef TYPE_1__ client ;


 unsigned long FUNC_0 (int ) ;

unsigned long FUNC_1(client *VAR_0) {
    unsigned long VAR_1 = sizeof(listNode) + sizeof(clientReplyBlock);
    return VAR_0->reply_bytes + (VAR_1*FUNC_0(VAR_0->reply));
}
