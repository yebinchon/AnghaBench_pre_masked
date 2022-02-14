
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int protocol_binary_request_no_extras ;
struct TYPE_9__ {void* expiration; void* initial; void* delta; } ;
struct TYPE_7__ {int extlen; int opaque; void* bodylen; int keylen; int opcode; int magic; } ;
struct TYPE_8__ {TYPE_1__ request; } ;
struct TYPE_10__ {TYPE_3__ body; TYPE_2__ header; } ;
struct TYPE_11__ {TYPE_4__ message; } ;
typedef TYPE_5__ protocol_binary_request_incr ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (size_t) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (char*,void const*,size_t) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;

__attribute__((used)) static off_t FUNC_6(char* VAR_1,
                                size_t VAR_2,
                                uint8_t VAR_3,
                                const void* VAR_4,
                                size_t VAR_5,
                                uint64_t VAR_6,
                                uint64_t VAR_7,
                                uint32_t VAR_8) {
    protocol_binary_request_incr *VAR_9 = (void*)VAR_1;
    FUNC_0(VAR_2 > sizeof(*VAR_9) + VAR_5);

    FUNC_5(VAR_9, 0, sizeof(*VAR_9));
    VAR_9->message.header.request.magic = VAR_0;
    VAR_9->message.header.request.opcode = VAR_3;
    VAR_9->message.header.request.keylen = FUNC_3(VAR_5);
    VAR_9->message.header.request.extlen = 20;
    VAR_9->message.header.request.bodylen = FUNC_1(VAR_5 + 20);
    VAR_9->message.header.request.opaque = 0xdeadbeef;
    VAR_9->message.body.delta = FUNC_2(VAR_6);
    VAR_9->message.body.initial = FUNC_2(VAR_7);
    VAR_9->message.body.expiration = FUNC_1(VAR_8);

    off_t VAR_10 = sizeof(protocol_binary_request_no_extras) + 20;

    FUNC_4(VAR_1 + VAR_10, VAR_4, VAR_5);
    return VAR_10 + VAR_5;
}
