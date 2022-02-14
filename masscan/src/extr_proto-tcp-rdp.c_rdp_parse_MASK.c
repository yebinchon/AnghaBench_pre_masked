
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
struct RDPSTUFF {int tpkt_length; TYPE_2__ cotp; } ;
struct TYPE_3__ {struct RDPSTUFF rdp; } ;
struct ProtocolState {int state; TYPE_1__ sub; } ;
typedef void const InteractiveData ;
struct BannerOutput {int dummy; } ;
typedef void Banner1 ;


 int VAR_0 ;
 int FUNC_0 (void const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct BannerOutput*,int ,unsigned char const*,size_t) ;
 size_t FUNC_3 (struct BannerOutput*,struct RDPSTUFF*,unsigned char const*,size_t) ;

__attribute__((used)) static void
FUNC_4( const struct Banner1 *VAR_1,
             void *VAR_2,
             struct ProtocolState *VAR_3,
             const unsigned char *VAR_4, size_t VAR_5,
             struct BannerOutput *VAR_6,
             struct InteractiveData *VAR_7)
{
    unsigned VAR_8 = VAR_3->state & 0xFFFFFF;
    struct RDPSTUFF *VAR_9 = &VAR_3->sub.rdp;
    size_t VAR_10;
    enum {
        TPKT_START,
        TPKT_RESERVED,
        TPKT_LENGTH0, TPKT_LENGTH1,
        TPKT_CONTENT,
        UNKNOWN_PROTOCOL,
    };
    FUNC_0(VAR_2);
    FUNC_0(VAR_1);
    FUNC_0(VAR_7);

    for (VAR_10=0; VAR_10<VAR_5; VAR_10++) {
        unsigned char VAR_11 = VAR_4[VAR_10];
        switch (VAR_8 & 0xF) {
            case TPKT_START:
                if (VAR_11 != 3) {
                    VAR_8 = UNKNOWN_PROTOCOL;
                    VAR_10--;
                } else {
                    VAR_9->tpkt_length = 0;
                    VAR_9->cotp.state = 0;
                    VAR_8 = TPKT_RESERVED;
                }
                break;
            case TPKT_RESERVED:
                VAR_8++;
                break;
            case TPKT_LENGTH0:
                VAR_9->tpkt_length = VAR_9->tpkt_length;
                VAR_8++;
                break;
            case TPKT_LENGTH1:
                VAR_9->tpkt_length = VAR_9->tpkt_length<<8 | VAR_11;
                if (VAR_9->tpkt_length < 4) {
                    VAR_8 = UNKNOWN_PROTOCOL;
                } else if (VAR_9->tpkt_length == 4) {
                    VAR_8 = 0;
                } else {
                    VAR_9->tpkt_length -= 4;
                    VAR_8++;
                }
                break;
            case TPKT_CONTENT:
            {
                size_t VAR_12 = VAR_9->tpkt_length;
                size_t VAR_13;


                if (VAR_12 >= VAR_5 - VAR_10)
                    VAR_12 = VAR_5 - VAR_10;

                VAR_13 = FUNC_3(VAR_6, VAR_9, VAR_4 + VAR_10, VAR_12);




                FUNC_1(VAR_13 != 0);
                VAR_10 += VAR_13 - 1;
                VAR_9->tpkt_length -= (unsigned short)VAR_13;



                if (VAR_9->tpkt_length)
                    VAR_8 = TPKT_CONTENT;
                else
                    VAR_8 = TPKT_START;
            }
                break;
            case UNKNOWN_PROTOCOL:
                FUNC_2(VAR_6, VAR_0, VAR_4, VAR_5);
                VAR_10 = VAR_5;
                break;
            default:
                break;
        }
    }
    VAR_3->state = VAR_8;
}
