
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct ProtocolState {unsigned int state; } ;
typedef void const InteractiveData ;
struct BannerOutput {int dummy; } ;
typedef void Banner1 ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char* FUNC_0 (size_t) ;
 int VAR_5 ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (struct BannerOutput*,int ,char const*,int ) ;
 int FUNC_3 (struct BannerOutput*,int ,char) ;
 int FUNC_4 (unsigned char*,unsigned char*,size_t) ;
 char* FUNC_5 (int) ;
 int VAR_6 ;
 int FUNC_6 (char*,int,char*,int) ;
 int FUNC_7 (void const*,unsigned char*,size_t,int) ;

__attribute__((used)) static void
FUNC_8( const struct Banner1 *VAR_7,
        void *VAR_8,
        struct ProtocolState *VAR_9,
        const unsigned char *VAR_10, size_t VAR_11,
        struct BannerOutput *VAR_12,
        struct InteractiveData *VAR_13)
{
    unsigned VAR_14 = VAR_9->state;
    size_t VAR_15;
    enum {
        TELNET_DATA,
        TELNET_IAC,
        TELNET_DO,
        TELNET_DONT,
        TELNET_WILL,
        TELNET_WONT,
        TELNET_SB,
        TELNET_SB_DATA,
        TELNET_INVALID,
    };
    static const char *VAR_16[4] = {"DO", "DONT", "WILL", "WONT"};
    unsigned char VAR_17[256] = {0};

    FUNC_1(VAR_8);
    FUNC_1(VAR_7);
    FUNC_1(VAR_13);

    for (VAR_15=0; VAR_15<VAR_11; VAR_15++) {
        int VAR_18 = VAR_10[VAR_15];
        switch (VAR_14) {
            case 0:
                if (VAR_18 == 0xFF) {

                    VAR_14 = TELNET_IAC;
                } else if (VAR_18 == '\r') {

                    continue;
                } else if (VAR_18 == '\n') {
                    FUNC_2(VAR_12, VAR_5, "\\n ", VAR_0);
                } else {

                    FUNC_3(VAR_12, VAR_5, VAR_18);
                }
                break;
            case TELNET_IAC:
                switch (VAR_18) {
                    case 240:
                        VAR_14 = 0;
                        break;
                    case 246:
                        FUNC_2(VAR_12, VAR_5, " IAC(AYT)", VAR_0);
                        VAR_14 = 0;
                        break;
                    case 241:
                        FUNC_2(VAR_12, VAR_5, " IAC(NOP)", VAR_0);
                        VAR_14 = 0;
                        break;
                    case 242:
                        FUNC_2(VAR_12, VAR_5, " IAC(MRK)", VAR_0);
                        VAR_14 = 0;
                        break;
                    case 243:
                        FUNC_2(VAR_12, VAR_5, " IAC(NOP)", VAR_0);
                        VAR_14 = 0;
                        break;
                    case 244:
                        FUNC_2(VAR_12, VAR_5, " IAC(INT)", VAR_0);
                        VAR_14 = 0;
                        break;
                    case 245:
                        FUNC_2(VAR_12, VAR_5, " IAC(ABRT)", VAR_0);
                        VAR_14 = 0;
                        break;
                    case 247:
                        FUNC_2(VAR_12, VAR_5, " IAC(EC)", VAR_0);
                        VAR_14 = 0;
                        break;
                    case 248:
                        FUNC_2(VAR_12, VAR_5, " IAC(EL)", VAR_0);
                        VAR_14 = 0;
                        break;
                    case 249:
                        FUNC_2(VAR_12, VAR_5, " IAC(GA)", VAR_0);
                        VAR_14 = 0;
                        break;
                    case 250:
                        VAR_14 = TELNET_SB;
                        break;
                    case 251:
                        VAR_14 = TELNET_WILL;
                        break;
                    case 252:
                        VAR_14 = TELNET_WONT;
                        break;
                    case 253:
                        VAR_14 = TELNET_DO;
                        break;
                    case 254:
                        VAR_14 = TELNET_DONT;
                        break;
                    default:
                    case 255:

                        VAR_14 = TELNET_INVALID;
                        break;
                }
                break;
            case TELNET_SB_DATA:
                if (VAR_18 == 0xFF)
                    VAR_14 = TELNET_IAC;
                else
                    ;
                break;
            case TELNET_SB:
                {
                    const char *VAR_19 = FUNC_5(VAR_18);
                    char VAR_20[16];
                    if (VAR_19 == ((void*)0)) {
                        FUNC_6(VAR_20, sizeof(VAR_20), "0x%02x", VAR_18);
                        VAR_19 = VAR_20;
                    }
                    if (VAR_19[0]) {
                        FUNC_3(VAR_12, VAR_5, ' ');
                        FUNC_2(VAR_12, VAR_5, "SB", VAR_0);
                        FUNC_3(VAR_12, VAR_5, '(');
                        FUNC_2(VAR_12, VAR_5, VAR_19, VAR_0);
                        FUNC_3(VAR_12, VAR_5, ')');
                    }
                    VAR_14 = TELNET_SB_DATA;
                }
                break;
            case TELNET_DO:
            case TELNET_DONT:
            case TELNET_WILL:
            case TELNET_WONT:
                switch (VAR_14) {
                    case TELNET_DO:
                        VAR_17[VAR_18] = VAR_4;
                        break;
                    case TELNET_DONT:
                        VAR_17[VAR_18] = VAR_4;
                        break;
                    case TELNET_WILL:
                        VAR_17[VAR_18] = VAR_2;
                        break;
                    case TELNET_WONT:
                        VAR_17[VAR_18] = VAR_2;
                        break;
                }
            {
                const char *VAR_21 = FUNC_5(VAR_18);
                char VAR_22[16];
                if (VAR_21 == ((void*)0)) {
                    FUNC_6(VAR_22, sizeof(VAR_22), "0x%02x", VAR_18);
                    VAR_21 = VAR_22;
                }
                if (VAR_21[0]) {
                    FUNC_3(VAR_12, VAR_5, ' ');
                    FUNC_2(VAR_12, VAR_5, VAR_16[VAR_14-TELNET_DO], VAR_0);
                    FUNC_3(VAR_12, VAR_5, '(');
                    FUNC_2(VAR_12, VAR_5, VAR_21, VAR_0);
                    FUNC_3(VAR_12, VAR_5, ')');
                }
            }
                VAR_14 = 0;
                break;
            default:
                VAR_15 = (unsigned)VAR_11;
                break;
        }
    }

    {

        unsigned char VAR_23[(256*3*4)];
        size_t VAR_24 = 0;
        size_t VAR_25;

        for (VAR_25=0; VAR_25<256 && VAR_24 + 3 < (256*3*4); VAR_25++) {
            if (VAR_17[VAR_25] & VAR_3) {
                VAR_23[VAR_24++] = 0xFF;
                VAR_23[VAR_24++] = 0xFB;
                VAR_23[VAR_24++] = (unsigned char)VAR_25;
            }
            if (VAR_17[VAR_25] & VAR_4) {
                VAR_23[VAR_24++] = 0xFF;
                VAR_23[VAR_24++] = 0xFC;
                VAR_23[VAR_24++] = (unsigned char)VAR_25;
            }
            if (VAR_17[VAR_25] & VAR_1) {
                VAR_23[VAR_24++] = 0xFF;
                VAR_23[VAR_24++] = 0xFD;
                VAR_23[VAR_24++] = (unsigned char)VAR_25;
            }
            if (VAR_17[VAR_25] & VAR_2) {
                VAR_23[VAR_24++] = 0xFF;
                VAR_23[VAR_24++] = 0xFE;
                VAR_23[VAR_24++] = (unsigned char)VAR_25;
            }
        }
        if (VAR_24) {
            unsigned char *VAR_26 = FUNC_0(VAR_24);
            FUNC_4(VAR_26, VAR_23, VAR_24);
            FUNC_7(VAR_13, VAR_26, VAR_24, 1);
        }
    }
    VAR_9->state = VAR_14;
}
