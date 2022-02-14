
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int state; unsigned int remaining; unsigned char type; } ;
struct SSLRECORD {TYPE_2__ handshake; } ;
struct TYPE_3__ {struct SSLRECORD ssl; } ;
struct ProtocolState {int base64; TYPE_1__ sub; } ;
typedef void InteractiveData ;
struct BannerOutput {int dummy; } ;
struct Banner1 {int is_capture_heartbleed; } ;


 int FUNC_0 (unsigned int,size_t,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct BannerOutput*,int ,char*,int) ;
 int FUNC_3 (struct BannerOutput*,int ,unsigned char const*,unsigned int,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(
        const struct Banner1 *VAR_2,
        void *VAR_3,
        struct ProtocolState *VAR_4,
        const unsigned char *VAR_5, size_t VAR_6,
        struct BannerOutput *VAR_7,
        struct InteractiveData *VAR_8)
{
    struct SSLRECORD *VAR_9 = &VAR_4->sub.ssl;
    unsigned VAR_10 = VAR_9->handshake.state;
    unsigned VAR_11 = VAR_9->handshake.remaining;
    unsigned VAR_12;
    enum {
        START,
        LENGTH0, LENGTH1,
        CONTENTS,
        UNKNOWN,
    };

    FUNC_1(VAR_8);
    FUNC_1(VAR_3);





    for (VAR_12=0; VAR_12<VAR_6; VAR_12++)
    switch (VAR_10) {





    case START:
        if (VAR_5[VAR_12] < 1 || 2 < VAR_5[VAR_12]) {
            VAR_10 = UNKNOWN;
            break;
        }
        VAR_9->handshake.type = VAR_5[VAR_12];
        FUNC_0(VAR_12,VAR_6,VAR_10);


    case LENGTH0:
        VAR_11 = VAR_5[VAR_12];
        FUNC_0(VAR_12,VAR_6,VAR_10);
    case LENGTH1:
        VAR_11 <<= 8;
        VAR_11 |= VAR_5[VAR_12];


        if (VAR_9->handshake.type == 2) {



            if (VAR_11 >= 16)
                FUNC_2( VAR_7, VAR_1, "SSL[HEARTBLEED] ", 16);



            if (VAR_2->is_capture_heartbleed) {
                FUNC_4(&VAR_4->base64);
                FUNC_2(VAR_7, VAR_0, "", 0);
            }
        }
        FUNC_0(VAR_12,VAR_6,VAR_10);




    case CONTENTS:
        {
            unsigned VAR_13 = (unsigned)VAR_6-VAR_12;
            if (VAR_13 > VAR_11)
                VAR_13 = VAR_11;





            if (VAR_9->handshake.type == 2 && VAR_2->is_capture_heartbleed) {
                FUNC_3(VAR_7,
                                     VAR_0,
                                     VAR_5+VAR_12, VAR_13,
                                     &VAR_4->base64);
            }

            VAR_11 -= VAR_13;
            VAR_12 += VAR_13-1;

            if (VAR_11 == 0)
                VAR_10 = UNKNOWN;
        }

        break;




    case UNKNOWN:
    default:
        VAR_12 = (unsigned)VAR_6;
    }


    VAR_9->handshake.state = VAR_10;
    VAR_9->handshake.remaining = VAR_11;
}
