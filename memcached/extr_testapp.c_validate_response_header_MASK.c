
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_6__ {scalar_t__ magic; int opcode; scalar_t__ datatype; scalar_t__ status; int opaque; scalar_t__ keylen; scalar_t__ extlen; int bodylen; scalar_t__ cas; } ;
struct TYPE_7__ {TYPE_1__ response; } ;
struct TYPE_8__ {TYPE_2__ header; } ;
struct TYPE_9__ {TYPE_3__ message; } ;
typedef TYPE_4__ protocol_binary_response_no_extras ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(protocol_binary_response_no_extras *VAR_3,
                                     uint8_t VAR_4, uint16_t VAR_5)
{
    FUNC_0(VAR_3->message.header.response.magic == VAR_1);
    FUNC_0(VAR_3->message.header.response.opcode == VAR_4);
    FUNC_0(VAR_3->message.header.response.datatype == VAR_0);
    FUNC_0(VAR_3->message.header.response.status == VAR_5);
    FUNC_0(VAR_3->message.header.response.opaque == 0xdeadbeef);

    if (VAR_5 == VAR_2) {
        switch (VAR_4) {
        case 157:
        case 155:
        case 153:
        case 151:
        case 149:
        case 139:
        case 136:
        case 134:
        case 132:
        case 130:
            FUNC_0("Quiet command shouldn't return on success" == ((void*)0));
        default:
            break;
        }

        switch (VAR_4) {
        case 158:
        case 133:
        case 131:
        case 156:
        case 137:
            FUNC_0(VAR_3->message.header.response.keylen == 0);
            FUNC_0(VAR_3->message.header.response.extlen == 0);
            FUNC_0(VAR_3->message.header.response.bodylen == 0);
            FUNC_0(VAR_3->message.header.response.cas != 0);
            break;
        case 150:
        case 138:
        case 135:
        case 152:
            FUNC_0(VAR_3->message.header.response.keylen == 0);
            FUNC_0(VAR_3->message.header.response.extlen == 0);
            FUNC_0(VAR_3->message.header.response.bodylen == 0);
            FUNC_0(VAR_3->message.header.response.cas == 0);
            break;

        case 154:
        case 140:
            FUNC_0(VAR_3->message.header.response.keylen == 0);
            FUNC_0(VAR_3->message.header.response.extlen == 0);
            FUNC_0(VAR_3->message.header.response.bodylen == 8);
            FUNC_0(VAR_3->message.header.response.cas != 0);
            break;

        case 129:
            FUNC_0(VAR_3->message.header.response.extlen == 0);

            FUNC_0(VAR_3->message.header.response.cas == 0);
            break;

        case 128:
            FUNC_0(VAR_3->message.header.response.keylen == 0);
            FUNC_0(VAR_3->message.header.response.extlen == 0);
            FUNC_0(VAR_3->message.header.response.bodylen != 0);
            FUNC_0(VAR_3->message.header.response.cas == 0);
            break;

        case 144:
        case 141:
        case 148:
        case 145:
            FUNC_0(VAR_3->message.header.response.keylen == 0);
            FUNC_0(VAR_3->message.header.response.extlen == 4);
            FUNC_0(VAR_3->message.header.response.cas != 0);
            break;

        case 143:
        case 142:
        case 147:
        case 146:
            FUNC_0(VAR_3->message.header.response.keylen != 0);
            FUNC_0(VAR_3->message.header.response.extlen == 4);
            FUNC_0(VAR_3->message.header.response.cas != 0);
            break;

        default:

            break;
        }
    } else {
        FUNC_0(VAR_3->message.header.response.cas == 0);
        FUNC_0(VAR_3->message.header.response.extlen == 0);
        if (VAR_4 != 143 &&
            VAR_4 != 147) {
            FUNC_0(VAR_3->message.header.response.keylen == 0);
        }
    }
}
