
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int state; unsigned char len; unsigned char type; int dstref; unsigned char flags; int srcref; } ;
struct TYPE_3__ {int state; } ;
struct RDPSTUFF {TYPE_2__ cotp; TYPE_1__ cc; } ;
struct BannerOutput {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct BannerOutput*,int ,...) ;
 size_t FUNC_2 (struct BannerOutput*,struct RDPSTUFF*,unsigned char const*,size_t) ;

__attribute__((used)) static size_t
FUNC_3(struct BannerOutput *VAR_3, struct RDPSTUFF *VAR_4, const unsigned char *VAR_5, size_t VAR_6)
{
    size_t VAR_7;
    unsigned VAR_8 = VAR_4->cotp.state;
    enum {
        LENGTH, PDU_TYPE, DSTREF0, DSTREF1, SRCREF0, SRCREF1,
        FLAGS, CONTENT, UNKNOWN_PROTOCOL,
    };
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        unsigned char VAR_9 = VAR_5[VAR_7];
        switch (VAR_8) {
            case LENGTH:
                VAR_4->cotp.len = VAR_9;
                if (VAR_4->cotp.len < 6) {
                    VAR_8 = UNKNOWN_PROTOCOL;
                } else {
                    VAR_4->cotp.len -= 6;
                    VAR_8++;
                }
                break;
            case PDU_TYPE:
                VAR_4->cotp.type = VAR_9;
                VAR_4->cotp.srcref = 0;
                VAR_4->cotp.dstref = 0;
                VAR_8++;
                break;
            case DSTREF0:
            case DSTREF1:
                VAR_4->cotp.dstref = VAR_4->cotp.dstref<<8 | VAR_9;
                VAR_8++;
                break;
            case SRCREF0:
            case SRCREF1:
                VAR_4->cotp.dstref = VAR_4->cotp.dstref<<8 | VAR_9;
                VAR_8++;
                break;
            case FLAGS:
                VAR_4->cotp.flags = VAR_9;
                VAR_4->cc.state = 0;
                VAR_8++;
                break;
            case CONTENT:
                switch (VAR_4->cotp.type) {
                    case 0xd0:
                    {
                        size_t VAR_10 = VAR_4->cotp.len;
                        size_t VAR_11;


                        if (VAR_10 >= VAR_6 - VAR_7)
                            VAR_10 = VAR_6 - VAR_7;

                        VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5 + VAR_7, VAR_10);




                        FUNC_0(VAR_11 != 0);
                        VAR_7 += VAR_11 - 1;
                        VAR_4->cotp.len -= (unsigned char)VAR_11;



                        if (VAR_4->cotp.len)
                            VAR_8 = CONTENT;
                        else
                            VAR_8 = UNKNOWN_PROTOCOL;

                    }
                        break;
                    default:
                        FUNC_1(VAR_3, VAR_2, " COTPPDU=unknown", VAR_0);
                        VAR_7 = VAR_6;
                        break;
                }
                break;
            case UNKNOWN_PROTOCOL:
                FUNC_1(VAR_3, VAR_1, VAR_5, VAR_6);
                VAR_7 = VAR_6;
                break;
        }
    }

    VAR_4->cotp.state = VAR_8;
    return VAR_7;
}
