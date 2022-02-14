
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int state; int outstanding; } ;
struct Output {TYPE_1__ redis; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char const) ;

__attribute__((used)) static int
FUNC_3(struct Output *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    unsigned VAR_3 = VAR_0->redis.state;
    unsigned VAR_4;
    enum {
        START,
        NUMBER,
        P,
        PO,
        PON,
        PONG,
        PONG_CR,
        PONG_CR_LF
    };

    for (VAR_4=0; VAR_4<VAR_2; VAR_4++)
    switch (VAR_3) {
    case START:
        switch (VAR_1[VAR_4]) {
        case '+':
            VAR_3 = P;
            break;
        case ':':
            VAR_3 = NUMBER;
            break;
        default:
            FUNC_0(0, "redis: unexpected data: %.*s\n", (int)(VAR_2-VAR_4), VAR_1+VAR_4);
            FUNC_1(1);
            break;
        }
        break;
    case NUMBER:
        if (FUNC_2(VAR_1[VAR_4]) || VAR_1[VAR_4] == '\r')
            ;
        else if (VAR_1[VAR_4] == '\n') {
            VAR_3 = 0;
            if (VAR_0->redis.outstanding == 0) {
                FUNC_0(0, "redis: out of sync\n");
                FUNC_1(1);
            }
            VAR_0->redis.outstanding--;
        } else {
            FUNC_0(0, "redis: unexpected data: %.*s\n", (int)(VAR_2-VAR_4), VAR_1+VAR_4);
            FUNC_1(1);
        }
        break;
    case P:
    case PO:
    case PON:
    case PONG_CR:
    case PONG_CR_LF:
        if ("PONG+\r\n"[VAR_4-P] == VAR_1[VAR_4]) {
            VAR_3++;
            if (VAR_1[VAR_4] == '\n') {
                VAR_0->redis.state = 0;
                return 1;
            }
        } else {
            FUNC_0(0, "redis: unexpected data: %.*s\n", (int)(VAR_2-VAR_4), VAR_1+VAR_4);
            FUNC_1(1);
        }
    default:
        FUNC_0(0, "redis: unexpected state: %u\n", VAR_3);
        FUNC_1(1);
    }
    VAR_0->redis.state = VAR_3;
    return 0;
}
