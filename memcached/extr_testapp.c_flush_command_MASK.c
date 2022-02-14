
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
typedef int uint32_t ;
typedef int protocol_binary_request_no_extras ;
struct TYPE_8__ {int extlen; int opaque; void* bodylen; int opcode; int magic; } ;
struct TYPE_9__ {TYPE_2__ request; } ;
struct TYPE_7__ {void* expiration; } ;
struct TYPE_10__ {TYPE_3__ header; TYPE_1__ body; } ;
struct TYPE_11__ {TYPE_4__ message; } ;
typedef TYPE_5__ protocol_binary_request_flush ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;

__attribute__((used)) static off_t FUNC_3(char* VAR_1, size_t VAR_2, uint8_t VAR_3, uint32_t VAR_4, bool VAR_5) {
    protocol_binary_request_flush *VAR_6 = (void*)VAR_1;
    FUNC_0(VAR_2 > sizeof(*VAR_6));

    FUNC_2(VAR_6, 0, sizeof(*VAR_6));
    VAR_6->message.header.request.magic = VAR_0;
    VAR_6->message.header.request.opcode = VAR_3;

    off_t VAR_7 = sizeof(protocol_binary_request_no_extras);
    if (VAR_5) {
        VAR_6->message.header.request.extlen = 4;
        VAR_6->message.body.expiration = FUNC_1(VAR_4);
        VAR_6->message.header.request.bodylen = FUNC_1(4);
        VAR_7 += 4;
    }

    VAR_6->message.header.request.opaque = 0xdeadbeef;

    return VAR_7;
}
