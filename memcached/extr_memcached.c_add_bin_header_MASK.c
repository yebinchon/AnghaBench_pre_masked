
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_14__ {int cas; int opaque; int bodylen; void* status; void* datatype; void* extlen; void* keylen; int opcode; void* magic; } ;
struct TYPE_15__ {int* bytes; TYPE_3__ response; } ;
typedef TYPE_4__ protocol_binary_response_header ;
struct TYPE_12__ {int opcode; } ;
struct TYPE_13__ {TYPE_1__ request; } ;
struct TYPE_16__ {int sfd; scalar_t__ wbuf; int cas; int opaque; TYPE_2__ binary_header; scalar_t__ iovused; scalar_t__ msgused; scalar_t__ msgcurr; } ;
typedef TYPE_5__ conn ;
struct TYPE_17__ {int verbose; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (TYPE_5__*,char*) ;
 TYPE_6__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_8(conn *VAR_4, uint16_t VAR_5, uint8_t VAR_6, uint16_t VAR_7, uint32_t VAR_8) {
    protocol_binary_response_header* VAR_9;

    FUNC_2(VAR_4);

    VAR_4->msgcurr = 0;
    VAR_4->msgused = 0;
    VAR_4->iovused = 0;
    if (FUNC_1(VAR_4) != 0) {



        FUNC_7(VAR_4, "SERVER_ERROR out of memory adding binary header");
        return;
    }

    VAR_9 = (protocol_binary_response_header *)VAR_4->wbuf;

    VAR_9->response.magic = (uint8_t)VAR_1;
    VAR_9->response.opcode = VAR_4->binary_header.request.opcode;
    VAR_9->response.keylen = (uint16_t)FUNC_6(VAR_7);

    VAR_9->response.extlen = (uint8_t)VAR_6;
    VAR_9->response.datatype = (uint8_t)VAR_0;
    VAR_9->response.status = (uint16_t)FUNC_6(VAR_5);

    VAR_9->response.bodylen = FUNC_4(VAR_8);
    VAR_9->response.opaque = VAR_4->opaque;
    VAR_9->response.cas = FUNC_5(VAR_4->cas);

    if (VAR_2.verbose > 1) {
        int VAR_10;
        FUNC_3(VAR_3, ">%d Writing bin response:", VAR_4->sfd);
        for (VAR_10 = 0; VAR_10 < sizeof(VAR_9->bytes); ++VAR_10) {
            if (VAR_10 % 4 == 0) {
                FUNC_3(VAR_3, "\n>%d  ", VAR_4->sfd);
            }
            FUNC_3(VAR_3, " 0x%02x", VAR_9->bytes[VAR_10]);
        }
        FUNC_3(VAR_3, "\n");
    }

    FUNC_0(VAR_4, VAR_4->wbuf, sizeof(VAR_9->response));
}
