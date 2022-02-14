
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ magic; int opaque; int keylen; int opcode; int cas; int bodylen; } ;
struct TYPE_11__ {int* bytes; TYPE_1__ request; } ;
typedef TYPE_2__ protocol_binary_request_header ;
struct TYPE_12__ {int rbytes; int sfd; scalar_t__ rcurr; int last_cmd_time; scalar_t__ cas; TYPE_2__ binary_header; int opaque; int keylen; int cmd; scalar_t__ iovused; scalar_t__ msgused; scalar_t__ msgcurr; scalar_t__ rbuf; } ;
typedef TYPE_3__ conn ;
struct TYPE_13__ {int verbose; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,char*) ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(conn *VAR_5) {

    if (VAR_5->rbytes < sizeof(VAR_5->binary_header)) {

        return 0;
    } else {
        protocol_binary_request_header* VAR_6;
        VAR_6 = (protocol_binary_request_header*)VAR_5->rcurr;

        if (VAR_3.verbose > 1) {

            int VAR_7;
            FUNC_3(VAR_4, "<%d Read binary protocol data:", VAR_5->sfd);
            for (VAR_7 = 0; VAR_7 < sizeof(VAR_6->bytes); ++VAR_7) {
                if (VAR_7 % 4 == 0) {
                    FUNC_3(VAR_4, "\n<%d   ", VAR_5->sfd);
                }
                FUNC_3(VAR_4, " 0x%02x", VAR_6->bytes[VAR_7]);
            }
            FUNC_3(VAR_4, "\n");
        }

        VAR_5->binary_header = *VAR_6;
        VAR_5->binary_header.request.keylen = FUNC_7(VAR_6->request.keylen);
        VAR_5->binary_header.request.bodylen = FUNC_5(VAR_6->request.bodylen);
        VAR_5->binary_header.request.cas = FUNC_6(VAR_6->request.cas);

        if (VAR_5->binary_header.request.magic != VAR_0) {
            if (VAR_3.verbose) {
                FUNC_3(VAR_4, "Invalid magic:  %lx\n",
                        VAR_5->binary_header.request.magic);
            }
            FUNC_1(VAR_5, VAR_1);
            return -1;
        }

        VAR_5->msgcurr = 0;
        VAR_5->msgused = 0;
        VAR_5->iovused = 0;
        if (FUNC_0(VAR_5) != 0) {
            FUNC_8(VAR_5,
                    "SERVER_ERROR Out of memory allocating headers");
            return 0;
        }

        VAR_5->cmd = VAR_5->binary_header.request.opcode;
        VAR_5->keylen = VAR_5->binary_header.request.keylen;
        VAR_5->opaque = VAR_5->binary_header.request.opaque;

        VAR_5->cas = 0;

        VAR_5->last_cmd_time = VAR_2;
        FUNC_2(VAR_5);

        VAR_5->rbytes -= sizeof(VAR_5->binary_header);
        VAR_5->rcurr += sizeof(VAR_5->binary_header);
    }

    return 1;
}
