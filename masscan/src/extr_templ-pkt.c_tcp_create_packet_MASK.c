
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct TemplatePacket {unsigned int offset_ip; unsigned int offset_tcp; int* packet; size_t length; unsigned int checksum_ip; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int VAR_0 ;
 unsigned int FUNC_3 (unsigned char*,unsigned int,unsigned int,size_t) ;

size_t
FUNC_4(
        struct TemplatePacket *VAR_1,
        unsigned VAR_2, unsigned VAR_3,
        unsigned VAR_4, unsigned VAR_5,
        unsigned VAR_6, unsigned VAR_7,
        unsigned VAR_8,
        const unsigned char *VAR_9, size_t VAR_10,
        unsigned char *VAR_11, size_t VAR_12)
{
    unsigned VAR_13 = VAR_2 ^ VAR_3 ^ VAR_6;
    unsigned VAR_14 = VAR_1->offset_ip;
    unsigned VAR_15 = VAR_1->offset_tcp;
    unsigned VAR_16 = VAR_15 + ((VAR_1->packet[VAR_15+12]&0xF0)>>2);
    size_t VAR_17 = VAR_16 + VAR_10;
    uint64_t VAR_18;
    size_t VAR_19 = (VAR_16 - VAR_14) + VAR_10;
    unsigned VAR_20;

    if (VAR_17 > VAR_12) {
        FUNC_0(VAR_0, "tcp: err generating packet: too much payload\n");
        return 0;
    }

    FUNC_1(VAR_11 + 0, VAR_1->packet, VAR_1->length);
    FUNC_1(VAR_11 + VAR_16, VAR_9, VAR_10);
    VAR_20 = VAR_11[VAR_14+2]<<8 | VAR_11[VAR_14+3];





    VAR_11[VAR_14+2] = (unsigned char)(VAR_19>> 8);
    VAR_11[VAR_14+3] = (unsigned char)(VAR_19 & 0xFF);
    VAR_11[VAR_14+4] = (unsigned char)(VAR_13 >> 8);
    VAR_11[VAR_14+5] = (unsigned char)(VAR_13 & 0xFF);
    VAR_11[VAR_14+12] = (unsigned char)((VAR_4 >> 24) & 0xFF);
    VAR_11[VAR_14+13] = (unsigned char)((VAR_4 >> 16) & 0xFF);
    VAR_11[VAR_14+14] = (unsigned char)((VAR_4 >> 8) & 0xFF);
    VAR_11[VAR_14+15] = (unsigned char)((VAR_4 >> 0) & 0xFF);
    VAR_11[VAR_14+16] = (unsigned char)((VAR_2 >> 24) & 0xFF);
    VAR_11[VAR_14+17] = (unsigned char)((VAR_2 >> 16) & 0xFF);
    VAR_11[VAR_14+18] = (unsigned char)((VAR_2 >> 8) & 0xFF);
    VAR_11[VAR_14+19] = (unsigned char)((VAR_2 >> 0) & 0xFF);

    VAR_18 = VAR_1->checksum_ip;
    VAR_18 += (VAR_13&0xFFFF);
    VAR_18 += VAR_4;
    VAR_18 += VAR_2;
    VAR_18 += VAR_19 - VAR_20;
    VAR_18 = (VAR_18 >> 16) + (VAR_18 & 0xFFFF);
    VAR_18 = (VAR_18 >> 16) + (VAR_18 & 0xFFFF);
    VAR_18 = ~VAR_18;

    VAR_11[VAR_14+10] = (unsigned char)(VAR_18 >> 8);
    VAR_11[VAR_14+11] = (unsigned char)(VAR_18 & 0xFF);




    VAR_11[VAR_15+ 0] = (unsigned char)(VAR_5 >> 8);
    VAR_11[VAR_15+ 1] = (unsigned char)(VAR_5 & 0xFF);
    VAR_11[VAR_15+ 2] = (unsigned char)(VAR_3 >> 8);
    VAR_11[VAR_15+ 3] = (unsigned char)(VAR_3 & 0xFF);
    VAR_11[VAR_15+ 4] = (unsigned char)(VAR_6 >> 24);
    VAR_11[VAR_15+ 5] = (unsigned char)(VAR_6 >> 16);
    VAR_11[VAR_15+ 6] = (unsigned char)(VAR_6 >> 8);
    VAR_11[VAR_15+ 7] = (unsigned char)(VAR_6 >> 0);

    VAR_11[VAR_15+ 8] = (unsigned char)(VAR_7 >> 24);
    VAR_11[VAR_15+ 9] = (unsigned char)(VAR_7 >> 16);
    VAR_11[VAR_15+10] = (unsigned char)(VAR_7 >> 8);
    VAR_11[VAR_15+11] = (unsigned char)(VAR_7 >> 0);

    VAR_11[VAR_15+13] = (unsigned char)VAR_8;

    VAR_11[VAR_15+14] = (unsigned char)(1200>>8);
    VAR_11[VAR_15+15] = (unsigned char)(1200 & 0xFF);

    VAR_11[VAR_15+16] = (unsigned char)(0 >> 8);
    VAR_11[VAR_15+17] = (unsigned char)(0 >> 0);

    VAR_18 = FUNC_3(VAR_11, VAR_1->offset_ip, VAR_1->offset_tcp,
                         VAR_17 - VAR_1->offset_tcp);
    VAR_18 = ~VAR_18;

    VAR_11[VAR_15+16] = (unsigned char)(VAR_18 >> 8);
    VAR_11[VAR_15+17] = (unsigned char)(VAR_18 >> 0);

    if (VAR_17 < 60) {
        FUNC_2(VAR_11+VAR_17, 0, 60-VAR_17);
        VAR_17 = 60;
    }
    return VAR_17;
}
