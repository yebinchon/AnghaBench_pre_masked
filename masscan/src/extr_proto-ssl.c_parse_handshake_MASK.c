
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned int state; unsigned int remaining; unsigned char type; } ;
struct TYPE_6__ {int state; } ;
struct TYPE_7__ {TYPE_2__ all; } ;
struct SSLRECORD {TYPE_4__ handshake; TYPE_3__ x; } ;
struct TYPE_5__ {struct SSLRECORD ssl; } ;
struct ProtocolState {TYPE_1__ sub; } ;
struct InteractiveData {int dummy; } ;
struct BannerOutput {int dummy; } ;
struct Banner1 {int is_heartbleed; } ;
typedef int heartbleed_request ;


 int FUNC_0 (unsigned int,size_t,unsigned int) ;
 int FUNC_1 (struct Banner1 const*,void*,struct ProtocolState*,unsigned char const*,unsigned int,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_2 (struct Banner1 const*,void*,struct ProtocolState*,unsigned char const*,unsigned int,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_3 (struct InteractiveData*,char const*,int,int ) ;

__attribute__((used)) static void
FUNC_4(
        const struct Banner1 *VAR_0,
        void *VAR_1,
        struct ProtocolState *VAR_2,
        const unsigned char *VAR_3, size_t VAR_4,
        struct BannerOutput *VAR_5,
        struct InteractiveData *VAR_6)
{
    struct SSLRECORD *VAR_7 = &VAR_2->sub.ssl;
    unsigned VAR_8 = VAR_7->handshake.state;
    unsigned VAR_9 = VAR_7->handshake.remaining;
    unsigned VAR_10;
    enum {
        START,
        LENGTH0, LENGTH1, LENGTH2,
        CONTENTS,
        UNKNOWN,
    };





    for (VAR_10=0; VAR_10<VAR_4; VAR_10++)
    switch (VAR_8) {



    case START:
        if (VAR_3[VAR_10] & 0x80) {
            VAR_8 = UNKNOWN;
            break;
        }

        VAR_7->handshake.type = VAR_3[VAR_10];



        VAR_7->x.all.state = 0;
        FUNC_0(VAR_10,VAR_4,VAR_8);





    case LENGTH0:
        VAR_9 = VAR_3[VAR_10];
        FUNC_0(VAR_10,VAR_4,VAR_8);
    case LENGTH1:
        VAR_9 <<= 8;
        VAR_9 |= VAR_3[VAR_10];
        FUNC_0(VAR_10,VAR_4,VAR_8);
    case LENGTH2:
        VAR_9 <<= 8;
        VAR_9 |= VAR_3[VAR_10];





        if (VAR_7->handshake.type == 2 && VAR_0->is_heartbleed) {
            static const char VAR_11[] =
                "\x15\x03\x02\x00\x02\x01\x80"
                "\x18\x03\x02\x00\x03\x01" "\x40\x00";
            FUNC_3(VAR_6, VAR_11, sizeof(VAR_11)-1, 0);
        }
        FUNC_0(VAR_10,VAR_4,VAR_8);







    case CONTENTS:
        {
            unsigned VAR_12 = (unsigned)VAR_4-VAR_10;
            if (VAR_12 > VAR_9)
                VAR_12 = VAR_9;

            switch (VAR_7->handshake.type) {
                case 0:
                case 1:
                case 3:
                case 4:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 20:
                case 22:
                default:

                    break;

                case 2:
                    FUNC_2( VAR_0,
                                       VAR_1,
                                       VAR_2,
                                       VAR_3+VAR_10, VAR_12,
                                       VAR_5,
                                       VAR_6);
                    break;
                case 11:
                    FUNC_1( VAR_0,
                                      VAR_1,
                                      VAR_2,
                                      VAR_3+VAR_10, VAR_12,
                                      VAR_5,
                                      VAR_6);
                    break;
            }

            VAR_9 -= VAR_12;
            VAR_10 += VAR_12-1;

            if (VAR_9 == 0)
                VAR_8 = START;
        }

        break;
    case UNKNOWN:
    default:
        VAR_10 = (unsigned)VAR_4;
    }

    VAR_7->handshake.state = VAR_8;
    VAR_7->handshake.remaining = VAR_9;
}
