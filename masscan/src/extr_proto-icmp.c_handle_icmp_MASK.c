
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
struct PreprocessedInfo {unsigned int port_src; unsigned int port_dst; int* ip_dst; int* ip_src; int transport_offset; int mac_src; int ip_ttl; } ;
struct Output {int dummy; } ;
struct DedupTable {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct DedupTable* FUNC_0 () ;
 int FUNC_1 (struct DedupTable*,unsigned int,int ,unsigned int,int ) ;
 int FUNC_2 (struct Output*,unsigned int,unsigned int) ;
 int FUNC_3 (struct Output*,int ,int ,unsigned int,unsigned int,unsigned int,int ,int ,int ) ;
 int FUNC_4 (int ,int ,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_5 (unsigned int,int ,unsigned int,int ,int ) ;

void
FUNC_6(struct Output *VAR_3, time_t VAR_4,
            const unsigned char *VAR_5, unsigned VAR_6,
            struct PreprocessedInfo *VAR_7,
            uint64_t VAR_8)
{
    unsigned VAR_9 = VAR_7->port_src;
    unsigned VAR_10 = VAR_7->port_dst;
    unsigned VAR_11;
    unsigned VAR_12;
    unsigned VAR_13;
    unsigned VAR_14;


    static struct DedupTable *VAR_15 = ((void*)0);


    if (!VAR_15)
        VAR_15 = FUNC_0();

    VAR_12 = VAR_7->ip_dst[0]<<24 | VAR_7->ip_dst[1]<<16
            | VAR_7->ip_dst[2]<< 8 | VAR_7->ip_dst[3]<<0;
    VAR_13 = VAR_7->ip_src[0]<<24 | VAR_7->ip_src[1]<<16
            | VAR_7->ip_src[2]<< 8 | VAR_7->ip_src[3]<<0;

    VAR_11 = VAR_5[VAR_7->transport_offset+4]<<24
                | VAR_5[VAR_7->transport_offset+5]<<16
                | VAR_5[VAR_7->transport_offset+6]<<8
                | VAR_5[VAR_7->transport_offset+7]<<0;

    switch (VAR_9) {
    case 0:
        VAR_14 = (unsigned)FUNC_5(VAR_13, VAR_2, VAR_12, 0, VAR_8);
        if ((VAR_14 & 0xFFFFFFFF) != VAR_11)
            return;

        if (FUNC_1(VAR_15, VAR_13, 0, VAR_12, 0))
            break;







        FUNC_3(
                            VAR_3,
                            VAR_4,
                            VAR_1,
                            VAR_13,
                            1,
                            0,
                            0,
                            VAR_7->ip_ttl,
                            VAR_7->mac_src);
        break;
    case 3:
        switch (VAR_10) {
        case 0:


            break;
        case 1:

            break;
        case 2:

            break;
        case 3:
            if (VAR_6 - VAR_7->transport_offset > 8) {
                unsigned VAR_16, VAR_17, VAR_18, VAR_19;
                unsigned VAR_20;
                int VAR_21;

                VAR_21 = FUNC_4(
                    VAR_5 + VAR_7->transport_offset + 8,
                    VAR_6 - VAR_7->transport_offset + 8,
                    &VAR_16, &VAR_17, &VAR_18, &VAR_19,
                    &VAR_20);

                if (VAR_21)
                    return;

                if (!FUNC_2(VAR_3, VAR_16, VAR_18))
                    return;

                switch (VAR_20) {
                case 6:
                    FUNC_3(
                                        VAR_3,
                                        VAR_4,
                                        VAR_0,
                                        VAR_17,
                                        VAR_20,
                                        VAR_19,
                                        0,
                                        VAR_7->ip_ttl,
                                        VAR_7->mac_src);
                    break;
                case 17:
                    FUNC_3(
                                        VAR_3,
                                        VAR_4,
                                        VAR_0,
                                        VAR_17,
                                        VAR_20,
                                        VAR_19,
                                        0,
                                        VAR_7->ip_ttl,
                                        VAR_7->mac_src);
                    break;
                case 132:
                    FUNC_3(
                                        VAR_3,
                                        VAR_4,
                                        VAR_0,
                                        VAR_17,
                                        VAR_20,
                                        VAR_19,
                                        0,
                                        VAR_7->ip_ttl,
                                        VAR_7->mac_src);
                    break;
                }
            }

        }
        break;
    default:
    ;
    }

}
