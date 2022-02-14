
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {size_t extlen; int opaque; int bodylen; int keylen; int opcode; int magic; } ;
struct TYPE_7__ {TYPE_1__ request; } ;
struct TYPE_8__ {TYPE_2__ header; } ;
struct TYPE_9__ {TYPE_3__ message; } ;
typedef TYPE_4__ protocol_binary_request_no_extras ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (char*,void const*,size_t) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;

__attribute__((used)) static off_t FUNC_5(char* VAR_1,
                         size_t VAR_2,
                         uint8_t VAR_3,
                         const void* VAR_4,
                         size_t VAR_5,
                         const void* VAR_6,
                         size_t VAR_7,
                         const void* VAR_8,
                         size_t VAR_9) {
    protocol_binary_request_no_extras *VAR_10 = (void*)VAR_1;
    FUNC_0(VAR_2 > sizeof(*VAR_10) + VAR_5 + VAR_7 + VAR_9);

    FUNC_4(VAR_10, 0, sizeof(*VAR_10));
    VAR_10->message.header.request.magic = VAR_0;
    VAR_10->message.header.request.opcode = VAR_3;
    VAR_10->message.header.request.extlen = VAR_5;
    VAR_10->message.header.request.keylen = FUNC_2(VAR_7);
    VAR_10->message.header.request.bodylen = FUNC_1(VAR_5 + VAR_7 + VAR_9);
    VAR_10->message.header.request.opaque = 0xdeadbeef;

    off_t VAR_11 = sizeof(protocol_binary_request_no_extras);
    off_t VAR_12 = VAR_11 + VAR_5;
    off_t VAR_13 = VAR_12 + VAR_7;

    if (VAR_4 != ((void*)0)) {
        FUNC_3(VAR_1 + VAR_11, VAR_4, VAR_5);
    }
    if (VAR_6 != ((void*)0)) {
        FUNC_3(VAR_1 + VAR_12, VAR_6, VAR_7);
    }
    if (VAR_8 != ((void*)0)) {
        FUNC_3(VAR_1 + VAR_13, VAR_8, VAR_9);
    }

    return sizeof(*VAR_10) + VAR_5 + VAR_7 + VAR_9;
}
