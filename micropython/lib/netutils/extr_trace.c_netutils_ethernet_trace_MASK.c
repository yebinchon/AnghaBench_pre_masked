
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int mp_print_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int const*,size_t,int const*) ;
 char* FUNC_1 (int const) ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 () ;
 int FUNC_5 (int const*,char*,...) ;

void FUNC_6(const mp_print_t *VAR_3, size_t VAR_4, const uint8_t *VAR_5, unsigned int VAR_6) {
    FUNC_5(VAR_3, "[% 8d] ETH%cX len=%u", FUNC_4(), VAR_6 & VAR_0 ? 'T' : 'R', VAR_4);
    FUNC_5(VAR_3, " dst=%02x:%02x:%02x:%02x:%02x:%02x", VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4], VAR_5[5]);
    FUNC_5(VAR_3, " src=%02x:%02x:%02x:%02x:%02x:%02x", VAR_5[6], VAR_5[7], VAR_5[8], VAR_5[9], VAR_5[10], VAR_5[11]);

    const char *VAR_7 = FUNC_1(VAR_5[12] << 8 | VAR_5[13]);
    if (VAR_7) {
        FUNC_5(VAR_3, " type=%s", VAR_7);
    } else {
        FUNC_5(VAR_3, " type=0x%04x", VAR_5[12] << 8 | VAR_5[13]);
    }
    if (VAR_4 > 14) {
        VAR_4 -= 14;
        VAR_5 += 14;
        if (VAR_5[-2] == 0x08 && VAR_5[-1] == 0x00 && VAR_5[0] == 0x45) {

            VAR_4 = FUNC_2(VAR_5 + 2);
            FUNC_5(VAR_3, " srcip=%u.%u.%u.%u dstip=%u.%u.%u.%u",
                VAR_5[12], VAR_5[13], VAR_5[14], VAR_5[15],
                VAR_5[16], VAR_5[17], VAR_5[18], VAR_5[19]);
            uint8_t VAR_8 = VAR_5[9];
            VAR_5 += 20;
            VAR_4 -= 20;
            if (VAR_8 == 6) {

                uint16_t VAR_9 = FUNC_2(VAR_5);
                uint16_t VAR_10 = FUNC_2(VAR_5 + 2);
                uint32_t VAR_11 = FUNC_3(VAR_5 + 4);
                uint32_t VAR_12 = FUNC_3(VAR_5 + 8);
                uint16_t VAR_13 = FUNC_2(VAR_5 + 12);
                uint16_t VAR_14 = FUNC_2(VAR_5 + 14);
                FUNC_5(VAR_3, " TCP srcport=%u dstport=%u seqnum=%u acknum=%u dataoff=%u flags=%x winsz=%u",
                    VAR_9, VAR_10, (unsigned)VAR_11, (unsigned)VAR_12, VAR_13 >> 12, VAR_13 & 0x1ff, VAR_14);
                VAR_5 += 20;
                VAR_4 -= 20;
                if (VAR_13 >> 12 > 5) {
                    FUNC_5(VAR_3, " opts=");
                    size_t VAR_15 = ((VAR_13 >> 12) - 5) * 4;
                    FUNC_0(VAR_3, VAR_15, VAR_5);
                    VAR_5 += VAR_15;
                    VAR_4 -= VAR_15;
                }
            } else if (VAR_8 == 17) {

                uint16_t VAR_16 = FUNC_2(VAR_5);
                uint16_t VAR_17 = FUNC_2(VAR_5 + 2);
                FUNC_5(VAR_3, " UDP srcport=%u dstport=%u", VAR_16, VAR_17);
                VAR_4 = FUNC_2(VAR_5 + 4);
                VAR_5 += 8;
                if ((VAR_16 == 67 && VAR_17 == 68) || (VAR_16 == 68 && VAR_17 == 67)) {

                    if (VAR_16 == 67) {
                        FUNC_5(VAR_3, " DHCPS");
                    } else {
                        FUNC_5(VAR_3, " DHCPC");
                    }
                    FUNC_0(VAR_3, 12 + 16 + 16 + 64, VAR_5);
                    size_t VAR_18 = 12 + 16 + 16 + 64 + 128;
                    VAR_4 -= VAR_18;
                    VAR_5 += VAR_18;
                    FUNC_5(VAR_3, " opts:");
                    switch (VAR_5[6]) {
                        case 1: FUNC_5(VAR_3, " DISCOVER"); break;
                        case 2: FUNC_5(VAR_3, " OFFER"); break;
                        case 3: FUNC_5(VAR_3, " REQUEST"); break;
                        case 4: FUNC_5(VAR_3, " DECLINE"); break;
                        case 5: FUNC_5(VAR_3, " ACK"); break;
                        case 6: FUNC_5(VAR_3, " NACK"); break;
                        case 7: FUNC_5(VAR_3, " RELEASE"); break;
                        case 8: FUNC_5(VAR_3, " INFORM"); break;
                    }
                }
            } else {

                FUNC_5(VAR_3, " prot=%u", VAR_8);
            }
        } else if (VAR_5[-2] == 0x86 && VAR_5[-1] == 0xdd && (VAR_5[0] >> 4) == 6) {

            uint32_t VAR_19 = FUNC_3(VAR_5);
            uint16_t VAR_20 = FUNC_2(VAR_5 + 4);
            FUNC_5(VAR_3, " tclass=%u flow=%u len=%u nexthdr=%u hoplimit=%u", (unsigned)((VAR_19 >> 20) & 0xff), (unsigned)(VAR_19 & 0xfffff), VAR_20, VAR_5[6], VAR_5[7]);
            FUNC_5(VAR_3, " srcip=");
            FUNC_0(VAR_3, 16, VAR_5 + 8);
            FUNC_5(VAR_3, " dstip=");
            FUNC_0(VAR_3, 16, VAR_5 + 24);
            VAR_5 += 40;
            VAR_4 -= 40;
        }
        if (VAR_6 & VAR_2) {
            FUNC_5(VAR_3, " data=");
            FUNC_0(VAR_3, VAR_4, VAR_5);
        }
    }
    if (VAR_6 & VAR_1) {
        FUNC_5(VAR_3, "\n");
    }
}
