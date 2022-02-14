
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int state; unsigned char type; unsigned char flags; unsigned char len; int result; } ;
struct RDPSTUFF {TYPE_1__ cc; } ;
struct BannerOutput {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct BannerOutput*,int ,...) ;

__attribute__((used)) static size_t
FUNC_1(struct BannerOutput *VAR_3, struct RDPSTUFF *VAR_4, const unsigned char *VAR_5, size_t VAR_6)
{
    size_t VAR_7;
    unsigned VAR_8 = VAR_4->cc.state;
    enum {
        TYPE, FLAGS, LENGTH, RESERVED, RESULT0, RESULT1, RESULT2, RESULT3, EXTRA, UNKNOWN_PROTOCOL
    };
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        unsigned char VAR_9 = VAR_5[VAR_7];
        switch (VAR_8) {
            case TYPE:
                VAR_4->cc.type = VAR_9;
                VAR_8++;
                break;
            case FLAGS:
                VAR_4->cc.flags = VAR_9;
                VAR_8++;
                break;
            case LENGTH:
                VAR_4->cc.len = VAR_9;
                if (VAR_4->cc.len < 4) {
                    VAR_8 = UNKNOWN_PROTOCOL;
                } else {
                    VAR_4->cc.len -= 4;
                    VAR_8++;
                }
                break;
            case RESERVED:
                switch (VAR_4->cc.type) {
                    case 2:
                    case 3:
                        VAR_8 = RESULT0;
                        VAR_4->cc.result = 0;
                        break;
                    default:
                        VAR_8 = EXTRA;
                        break;
                }
                break;
            case RESULT0:
            case RESULT1:
            case RESULT2:
            case RESULT3:
                if (VAR_4->cc.len == 0)
                    VAR_8 = EXTRA;
                else {
                    VAR_4->cc.len--;
                    VAR_4->cc.result = VAR_4->cc.result>>8 | (VAR_9 << 24);
                    VAR_8++;
                    if (VAR_8 == EXTRA) {
                        switch (VAR_4->cc.type) {
                            case 2:
                                if (VAR_4->cc.result & 2)
                                    FUNC_0(VAR_3, VAR_2, " NLA-supported", VAR_0);
                                else
                                    FUNC_0(VAR_3, VAR_2, " NLA-unused", VAR_0);
                                break;
                            case 3:
                                if (VAR_4->cc.result == 5)
                                    FUNC_0(VAR_3, VAR_2, " NLA-unsupported", VAR_0);
                                else
                                    FUNC_0(VAR_3, VAR_2, " failure", VAR_0);
                                break;
                            default:
                                FUNC_0(VAR_3, VAR_2, " unknown", VAR_0);
                                break;
                        }
                    }
                }
                break;

            case EXTRA:
                VAR_7 = VAR_6;
                break;
            case UNKNOWN_PROTOCOL:
                FUNC_0(VAR_3, VAR_1, VAR_5, VAR_6);
                VAR_7 = VAR_6;
                break;
        }
    }

    VAR_4->cc.state = VAR_8;
    return VAR_7;
}
