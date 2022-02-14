
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
struct PreprocessedInfo {unsigned int port_src; unsigned int port_dst; int* ip_src; int* ip_dst; int ip_ttl; scalar_t__ app_length; scalar_t__ app_offset; } ;
struct Output {int dummy; } ;
struct DNS_Incoming {int id; int qr; int rcode; unsigned int* rr_offset; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (unsigned char const*,unsigned int,unsigned int) ;
 int FUNC_1 (struct Output*,int ,unsigned int,int,unsigned int,int ,int ,unsigned char const*,unsigned int) ;
 int FUNC_2 (struct DNS_Incoming*,unsigned char const*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int,unsigned int,unsigned int,int) ;

unsigned
FUNC_5(struct Output *VAR_2, time_t VAR_3,
            const unsigned char *VAR_4, unsigned VAR_5,
            struct PreprocessedInfo *VAR_6,
            uint64_t VAR_7)
{
    unsigned VAR_8;
    unsigned VAR_9;
    unsigned VAR_10 = VAR_6->port_src;
    unsigned VAR_11 = VAR_6->port_dst;
    struct DNS_Incoming VAR_12[1];
    unsigned VAR_13;
    uint64_t VAR_14;
    const char *VAR_15 = 0;

    VAR_8 = VAR_6->ip_src[0]<<24 | VAR_6->ip_src[1]<<16
            | VAR_6->ip_src[2]<< 8 | VAR_6->ip_src[3]<<0;
    VAR_9 = VAR_6->ip_dst[0]<<24 | VAR_6->ip_dst[1]<<16
            | VAR_6->ip_dst[2]<< 8 | VAR_6->ip_dst[3]<<0;

    VAR_14 = (unsigned)FUNC_4(VAR_8, VAR_10 | VAR_1, VAR_9, VAR_11, VAR_7);

    FUNC_2(VAR_12, VAR_4, VAR_6->app_offset, VAR_6->app_offset + VAR_6->app_length);

    if ((VAR_14 & 0xFFFF) != VAR_12->id)
        return 1;






    if (VAR_12->qr != 1)
        return 0;





    switch (VAR_12->rcode) {
        case 0: VAR_15 = 0; break;
        case 1: VAR_15 = "1:FORMERR"; break;
        case 2: VAR_15 = "2:SERVFAIL"; break;
        case 3: VAR_15 = "3:NXDOMAIN"; break;
        case 4: VAR_15 = "4:NOTIMP"; break;
        case 5: VAR_15 = "5:REFUSED"; break;
        case 6: VAR_15 = "6:YXDOMAIN"; break;
        case 7: VAR_15 = "7:XRRSET"; break;
        case 8: VAR_15 = "8:NOTAUTH"; break;
        case 9: VAR_15 = "9:NOTZONE"; break;
    }
    if (VAR_15 != 0) {
        FUNC_1(
                         VAR_2, VAR_3,
                         VAR_8, 17, VAR_10,
                         VAR_0,
                         VAR_6->ip_ttl,
                         (const unsigned char*)VAR_15,
                         (unsigned)FUNC_3(VAR_15));
        return 0;
    }
    VAR_13 = VAR_12->rr_offset[1];
    VAR_13 = FUNC_0(VAR_4, VAR_13, VAR_5);
    if (VAR_13 + 10 >= VAR_5)
        return 0;

    {
        unsigned VAR_16 = VAR_4[VAR_13+0]<<8 | VAR_4[VAR_13+1];
        unsigned VAR_17 = VAR_4[VAR_13+2]<<8 | VAR_4[VAR_13+3];
        unsigned VAR_18 = VAR_4[VAR_13+8]<<8 | VAR_4[VAR_13+9];
        unsigned VAR_19 = VAR_4[VAR_13+10];

        if (VAR_18 == 0 || VAR_19 > VAR_18-1)
            return 0;
        if (VAR_16 != 0x10 || VAR_17 != 3)
            return 0;

        VAR_13 += 11;

        FUNC_1(
                VAR_2, VAR_3,
                VAR_8, 17, VAR_10,
                VAR_0,
                VAR_6->ip_ttl,
                VAR_4 + VAR_13, VAR_19);
    }


    return 0;
}
