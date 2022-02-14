
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CoapLink {int link_length; int link_offset; } ;
struct BannerOutput {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct BannerOutput*,int ,...) ;
 int FUNC_2 (struct CoapLink*) ;
 struct CoapLink* FUNC_3 (unsigned char const*,unsigned int,unsigned int,size_t*) ;
 char* FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,int,char*,unsigned long long,...) ;

__attribute__((used)) static bool
FUNC_6(const unsigned char *VAR_2, size_t VAR_3, struct BannerOutput *VAR_4,
           unsigned *VAR_5)
{
    unsigned VAR_6;
    unsigned VAR_7;
    unsigned VAR_8 = 0;
    unsigned VAR_9 = 0;
    unsigned long long VAR_10 = 0;
    unsigned VAR_11;
    unsigned VAR_12;
    unsigned VAR_13;
    size_t VAR_14;


    if (VAR_3 < 4) {
        FUNC_0(3, "[-] CoAP: short length\n");
        goto not_this_protocol;
    }
    VAR_6 = (VAR_2[0]>>6) & 3;
    VAR_7 = (VAR_2[0]>>4) & 3;

    VAR_9 = VAR_2[0] & 0x0F;
    VAR_8 = VAR_2[1];
    *VAR_5 = VAR_2[2]<<8 | VAR_2[3];


    if (VAR_6 != 1) {
        FUNC_0(3, "[-] CoAP: version=%u\n", VAR_6);
        goto not_this_protocol;
    }


    if (VAR_7 != 2) {
        FUNC_0(3, "[-] CoAP: type=%u\n", VAR_7);
        goto not_this_protocol;
    }



    if (VAR_9 > 8 || 4 + VAR_9 > VAR_3) {
        FUNC_0(3, "[-] CoAP: token-length=%u\n", VAR_9);
        goto not_this_protocol;
    }

    VAR_10 = 0;
    for (VAR_14=0; VAR_14<VAR_9; VAR_14++) {
        VAR_10 = VAR_10 << 8ULL;
        VAR_10 = VAR_10 | (unsigned long long)VAR_2[VAR_14];
    }



    {
        char VAR_15[64];
        FUNC_5(VAR_15, sizeof(VAR_15), "rsp=%u.%u(%s)", VAR_8>>5, VAR_8&0x1F, FUNC_4(VAR_8));
        FUNC_1(VAR_4, VAR_1, VAR_15, VAR_0);

    }



    if (VAR_10) {
        char VAR_16[64];
        FUNC_5(VAR_16, sizeof(VAR_16), " token=0x%llu", VAR_10);
        FUNC_1(VAR_4, VAR_1, VAR_16, VAR_0);
    }
    VAR_11 = 4 + VAR_9;
    VAR_12 = 0;
    VAR_13 = 0;
    while (VAR_11 < VAR_3) {
        unsigned VAR_17;
        unsigned VAR_18;
        unsigned VAR_19;


        VAR_18 = VAR_2[VAR_11++];
        if (VAR_18 == 0xFF)
            break;
        VAR_19 = (VAR_18>>0) & 0x0F;
        VAR_17 = (VAR_18>>4) & 0x0F;


        switch (VAR_17) {
            default:
                VAR_12 += VAR_17;
                break;
            case 13:
                if (VAR_11 >= VAR_3) {
                    FUNC_1(VAR_4, VAR_1, " PARSE_ERR", VAR_0);
                    VAR_12 = 0xFFFFFFFF;
                } else {
                    VAR_17 = VAR_2[VAR_11++] + 13;
                    VAR_12 += VAR_17;
                }
                break;
            case 14:
                if (VAR_11 + 1 >= VAR_3) {
                    FUNC_1(VAR_4, VAR_1, " PARSE_ERR", VAR_0);
                    VAR_12 = 0xFFFFFFFF;
                } else {
                    VAR_17 = VAR_2[VAR_11+0]<<8 | VAR_2[VAR_11+1];
                    VAR_17 += 269;
                    VAR_11 += 2;
                    VAR_12 += VAR_17;
                }
                break;
            case 15:
                if (VAR_19 != 15)
                    FUNC_1(VAR_4, VAR_1, " PARSE_ERR", VAR_0);
                VAR_12 = 0xFFFFFFFF;
        }


        switch (VAR_19) {
            default:
                break;
            case 13:
                if (VAR_11 >= VAR_3) {
                    FUNC_1(VAR_4, VAR_1, " PARSE_ERR", VAR_0);
                    VAR_12 = 0xFFFFFFFF;
                } else {
                    VAR_19 = VAR_2[VAR_11++] + 13;
                }
                break;
            case 14:
                if (VAR_11 + 1 >= VAR_3) {
                    FUNC_1(VAR_4, VAR_1, " PARSE_ERR", VAR_0);
                    VAR_12 = 0xFFFFFFFF;
                } else {
                    VAR_19 = VAR_2[VAR_11+0]<<8 | VAR_2[VAR_11+1];
                    VAR_19 += 269;
                    VAR_11 += 2;
                }
                break;
        }
        if (VAR_11 + VAR_19 > VAR_3) {
            FUNC_1(VAR_4, VAR_1, " PARSE_ERR", VAR_0);
            VAR_12 = 0xFFFFFFFF;
        }


        switch (VAR_12) {
            case 0xFFFFFFFF:
                break;
            case 1: FUNC_1(VAR_4, VAR_1, " /If-Match/", VAR_0); break;
            case 3: FUNC_1(VAR_4, VAR_1, " /Uri-Host/", VAR_0); break;
            case 4: FUNC_1(VAR_4, VAR_1, " /Etag", VAR_0); break;
            case 5: FUNC_1(VAR_4, VAR_1, " /If-None-Match/", VAR_0); break;
            case 7: FUNC_1(VAR_4, VAR_1, " /Uri-Port/", VAR_0); break;
            case 8: FUNC_1(VAR_4, VAR_1, " /Location-Path/", VAR_0); break;
            case 11: FUNC_1(VAR_4, VAR_1, " /Uri-Path/", VAR_0); break;
            case 12:
                FUNC_1(VAR_4, VAR_1, " /Content-Format/", VAR_0);
                VAR_13 = 0;

                for (VAR_14=0; VAR_14<VAR_19; VAR_14++) {
                    VAR_13 = VAR_13<<8 | VAR_2[VAR_11+VAR_14];
                }
                break;
            case 14: FUNC_1(VAR_4, VAR_1, " /Max-Age/", VAR_0); break;
            case 15: FUNC_1(VAR_4, VAR_1, " /Uri-Query/", VAR_0); break;
            case 17: FUNC_1(VAR_4, VAR_1, " /Accept/", VAR_0); break;
            case 20: FUNC_1(VAR_4, VAR_1, " /Location-Query/", VAR_0); break;
            case 35: FUNC_1(VAR_4, VAR_1, " /Proxy-Uri/", VAR_0); break;
            case 39: FUNC_1(VAR_4, VAR_1, " /Proxy-Scheme/", VAR_0); break;
            case 60: FUNC_1(VAR_4, VAR_1, " /Size1/", VAR_0); break;
            default: FUNC_1(VAR_4, VAR_1, " /(Unknown)/", VAR_0); break;

        }

        if (VAR_12 == 0xFFFFFFFF)
            break;

        VAR_11 += VAR_19;
    }

    switch (VAR_13) {
        case 0: FUNC_1(VAR_4, VAR_1, " text-plain", VAR_0); break;
        case 40:
            FUNC_1(VAR_4, VAR_1, " application/link-format", VAR_0);
        {
            struct CoapLink *VAR_20;
            size_t VAR_21 = 0;

            VAR_20 = FUNC_3(VAR_2, VAR_11, (unsigned)VAR_3, &VAR_21);
            for (VAR_14=0; VAR_14<VAR_21; VAR_14++) {
                FUNC_1(VAR_4, VAR_1, " ", VAR_0);
                FUNC_1(VAR_4, VAR_1, VAR_2+VAR_20[VAR_14].link_offset, VAR_20[VAR_14].link_length);
            }
            FUNC_2(VAR_20);
        }
            break;
        case 41: FUNC_1(VAR_4, VAR_1, " application/xml", VAR_0); break;
        case 42: FUNC_1(VAR_4, VAR_1, " application/octet-stream", VAR_0); break;
        case 47: FUNC_1(VAR_4, VAR_1, " application/exi", VAR_0); break;
        case 50: FUNC_1(VAR_4, VAR_1, " application/json", VAR_0); break;
        default: FUNC_1(VAR_4, VAR_1, " (unknown-content-type)", VAR_0); break;
    }

    FUNC_0(3, "[+] CoAP: valid\n");
    return 1;
not_this_protocol:
    return 0;
}
