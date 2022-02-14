
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
struct PreprocessedInfo {unsigned int port_src; unsigned int transport_offset; int* ip_src; int mac_src; int ip_ttl; } ;
struct Output {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct Output*,int ,int ,unsigned int,int,unsigned int,int ,int ,int ) ;

void
FUNC_2(struct Output *VAR_2, time_t VAR_3,
            const unsigned char *VAR_4, unsigned VAR_5,
            unsigned VAR_6,
            struct PreprocessedInfo *VAR_7,
            uint64_t VAR_8)
{
    unsigned VAR_9;
    unsigned VAR_10 = VAR_7->port_src;
    unsigned VAR_11;
    unsigned VAR_12 = VAR_7->transport_offset;

    FUNC_0(VAR_8);

    VAR_9 = VAR_7->ip_src[0]<<24 | VAR_7->ip_src[1]<<16
            | VAR_7->ip_src[2]<< 8 | VAR_7->ip_src[3]<<0;

    VAR_11 = VAR_4[VAR_12 + 4] << 24 | VAR_4[VAR_12 + 5] << 16 |
                        VAR_4[VAR_12 + 6] << 8 | VAR_4[VAR_12 + 7];
    if (VAR_6 != VAR_11)
        return;

    if (VAR_12 + 16 > VAR_5)
        return;

    switch (VAR_4[VAR_12 + 12]) {
    case 2:
        FUNC_1(
                        VAR_2,
                        VAR_3,
                        VAR_1,
                        VAR_9,
                        132,
                        VAR_10,
                        0,
                        VAR_7->ip_ttl,
                        VAR_7->mac_src);
        break;
    case 6:
        FUNC_1(
                        VAR_2,
                        VAR_3,
                        VAR_0,
                        VAR_9,
                        132,
                        VAR_10,
                        0,
                        VAR_7->ip_ttl,
                        VAR_7->mac_src);
        break;
    default:
        ;
    }



}
