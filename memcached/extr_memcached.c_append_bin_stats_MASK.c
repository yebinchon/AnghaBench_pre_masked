
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int keylen; int opaque; int bodylen; int datatype; int opcode; int magic; } ;
struct TYPE_8__ {char const* bytes; TYPE_1__ response; } ;
typedef TYPE_3__ protocol_binary_response_header ;
struct TYPE_7__ {char* buffer; int offset; } ;
struct TYPE_9__ {TYPE_2__ stats; int opaque; } ;
typedef TYPE_4__ conn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (char*,char const*,int const) ;

__attribute__((used)) static void FUNC_3(const char *VAR_3, const uint16_t VAR_4,
                             const char *VAR_5, const uint32_t VAR_6,
                             conn *VAR_7) {
    char *VAR_8 = VAR_7->stats.buffer + VAR_7->stats.offset;
    uint32_t VAR_9 = VAR_4 + VAR_6;
    protocol_binary_response_header VAR_10 = {
        .response.magic = (uint8_t)VAR_2,
        .response.opcode = VAR_0,
        .response.keylen = (uint16_t)FUNC_1(VAR_4),
        .response.datatype = (uint8_t)VAR_1,
        .response.bodylen = FUNC_0(VAR_9),
        .response.opaque = VAR_7->opaque
    };

    FUNC_2(VAR_8, VAR_10.bytes, sizeof(VAR_10.response));
    VAR_8 += sizeof(VAR_10.response);

    if (VAR_4 > 0) {
        FUNC_2(VAR_8, VAR_3, VAR_4);
        VAR_8 += VAR_4;

        if (VAR_6 > 0) {
            FUNC_2(VAR_8, VAR_5, VAR_6);
        }
    }

    VAR_7->stats.offset += sizeof(VAR_10.response) + VAR_9;
}
