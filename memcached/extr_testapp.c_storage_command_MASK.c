
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
typedef void* uint32_t ;
struct TYPE_9__ {void* expiration; void* flags; } ;
struct TYPE_7__ {int extlen; int opaque; int bodylen; int keylen; int opcode; int magic; } ;
struct TYPE_8__ {TYPE_1__ request; } ;
struct TYPE_10__ {TYPE_3__ body; TYPE_2__ header; } ;
struct TYPE_11__ {TYPE_4__ message; } ;
typedef TYPE_5__ protocol_binary_request_set ;
typedef int protocol_binary_request_no_extras ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (char*,void const*,size_t) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;

__attribute__((used)) static off_t FUNC_5(char*VAR_1,
                             size_t VAR_2,
                             uint8_t VAR_3,
                             const void* VAR_4,
                             size_t VAR_5,
                             const void* VAR_6,
                             size_t VAR_7,
                             uint32_t VAR_8,
                             uint32_t VAR_9) {

    protocol_binary_request_set *VAR_10 = (void*)VAR_1;
    FUNC_0(VAR_2 > sizeof(*VAR_10) + VAR_5 + VAR_7);

    FUNC_4(VAR_10, 0, sizeof(*VAR_10));
    VAR_10->message.header.request.magic = VAR_0;
    VAR_10->message.header.request.opcode = VAR_3;
    VAR_10->message.header.request.keylen = FUNC_2(VAR_5);
    VAR_10->message.header.request.extlen = 8;
    VAR_10->message.header.request.bodylen = FUNC_1(VAR_5 + 8 + VAR_7);
    VAR_10->message.header.request.opaque = 0xdeadbeef;
    VAR_10->message.body.flags = VAR_8;
    VAR_10->message.body.expiration = VAR_9;

    off_t VAR_11 = sizeof(protocol_binary_request_no_extras) + 8;

    FUNC_3(VAR_1 + VAR_11, VAR_4, VAR_5);
    if (VAR_6 != ((void*)0)) {
        FUNC_3(VAR_1 + VAR_11 + VAR_5, VAR_6, VAR_7);
    }

    return VAR_11 + VAR_5 + VAR_7;
}
