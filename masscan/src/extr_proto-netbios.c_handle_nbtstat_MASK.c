
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
struct PreprocessedInfo {unsigned int port_src; unsigned int port_dst; int* ip_src; int* ip_dst; int ip_ttl; scalar_t__ app_length; scalar_t__ app_offset; } ;
struct Output {int dummy; } ;
struct DNS_Incoming {int id; int qr; scalar_t__ rcode; int qdcount; int ancount; int rr_count; unsigned int* rr_offset; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned char const*,unsigned int,unsigned int) ;
 int FUNC_1 (struct Output*,int ,int ,unsigned char const*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct DNS_Incoming*,unsigned char const*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int,unsigned int,unsigned int,int) ;

unsigned
FUNC_4(struct Output *VAR_1, time_t VAR_2,
    const unsigned char *VAR_3, unsigned VAR_4,
    struct PreprocessedInfo *VAR_5,
    uint64_t VAR_6)
{
    unsigned VAR_7;
    unsigned VAR_8;
    unsigned VAR_9 = VAR_5->port_src;
    unsigned VAR_10 = VAR_5->port_dst;
    struct DNS_Incoming VAR_11[1];
    unsigned VAR_12;
    uint64_t VAR_13;

    VAR_7 = VAR_5->ip_src[0]<<24 | VAR_5->ip_src[1]<<16
            | VAR_5->ip_src[2]<< 8 | VAR_5->ip_src[3]<<0;
    VAR_8 = VAR_5->ip_dst[0]<<24 | VAR_5->ip_dst[1]<<16
            | VAR_5->ip_dst[2]<< 8 | VAR_5->ip_dst[3]<<0;

    VAR_13 = (unsigned)FUNC_3(VAR_7, VAR_9 | VAR_0, VAR_8, VAR_10, VAR_6);

    FUNC_2(VAR_11, VAR_3, VAR_5->app_offset, VAR_5->app_offset + VAR_5->app_length);

    if ((VAR_13 & 0xFFFF) != VAR_11->id)
        return 1;

    if (VAR_11->qr != 1)
        return 0;
    if (VAR_11->rcode != 0)
        return 0;
    if (VAR_11->qdcount > 1)
        return 0;
    if (VAR_11->ancount < 1)
        return 0;
    if (VAR_11->rr_count < 1)
        return 0;


    VAR_12 = VAR_11->rr_offset[VAR_11->qdcount];
    VAR_12 = FUNC_0(VAR_3, VAR_12, VAR_4);
    if (VAR_12 + 10 >= VAR_4)
        return 0;

    {
        unsigned VAR_14 = VAR_3[VAR_12+0]<<8 | VAR_3[VAR_12+1];
        unsigned VAR_15 = VAR_3[VAR_12+2]<<8 | VAR_3[VAR_12+3];
        unsigned VAR_16 = VAR_3[VAR_12+8]<<8 | VAR_3[VAR_12+9];
        unsigned VAR_17 = VAR_3[VAR_12+10];

        if (VAR_16 == 0 || VAR_17 > VAR_16-1)
            return 0;
        if (VAR_14 != 0x21 || VAR_15 != 1)
            return 0;

        VAR_12 += 10;

        return FUNC_1(VAR_1, VAR_2, VAR_5->ip_ttl,
                                    VAR_3 + VAR_12,
                                    VAR_4 - VAR_12,
                                    VAR_7,
                                    VAR_9);
    }

}
