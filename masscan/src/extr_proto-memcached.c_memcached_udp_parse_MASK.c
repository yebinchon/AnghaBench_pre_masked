
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
typedef int stuff ;
struct ProtocolState {int dummy; } ;
struct PreprocessedInfo {unsigned int port_src; unsigned int port_dst; int* ip_src; int* ip_dst; int ip_ttl; } ;
struct Output {int dummy; } ;
struct BannerOutput {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct BannerOutput*,int ,char*,int ) ;
 int FUNC_1 (struct BannerOutput*) ;
 int FUNC_2 (struct BannerOutput*) ;
 int FUNC_3 (struct BannerOutput*,int ) ;
 int FUNC_4 (struct BannerOutput*,int ) ;
 int FUNC_5 (struct Output*,int ,unsigned char const*,unsigned int,struct PreprocessedInfo*,int ) ;
 int FUNC_6 (int ,int ,struct ProtocolState*,unsigned char const*,unsigned int,struct BannerOutput*,int ) ;
 int FUNC_7 (struct ProtocolState*,int ,int) ;
 int FUNC_8 (struct Output*,int ,unsigned int,int,unsigned int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (unsigned int,unsigned int,unsigned int,unsigned int,int ) ;

unsigned
FUNC_10(struct Output *VAR_3, time_t VAR_4,
            const unsigned char *VAR_5, unsigned VAR_6,
            struct PreprocessedInfo *VAR_7,
            uint64_t VAR_8
            )
{
    unsigned VAR_9;
    unsigned VAR_10;
    unsigned VAR_11 = VAR_7->port_src;
    unsigned VAR_12 = VAR_7->port_dst;
    unsigned VAR_13 = 0;
    unsigned VAR_14 = 0;
    unsigned VAR_15 = 0;
    unsigned VAR_16 = 0;
    unsigned VAR_17 = 0;
    struct BannerOutput VAR_18[1];


    if (VAR_6 < 8)
        return 0;
    VAR_13 = VAR_5[0]<<8 | VAR_5[1];
    VAR_14 = VAR_5[2]<<8 | VAR_5[3];
    VAR_15 = VAR_5[4]<<8 | VAR_5[5];
    VAR_16 = VAR_5[6]<<8 | VAR_5[7];


    if (VAR_14 > 100)
        goto not_memcached;


    if (VAR_15 > 100)
        goto not_memcached;


    if (VAR_16 != 0)
        goto not_memcached;


    VAR_9 = VAR_7->ip_src[0]<<24 | VAR_7->ip_src[1]<<16
            | VAR_7->ip_src[2]<< 8 | VAR_7->ip_src[3]<<0;
    VAR_10 = VAR_7->ip_dst[0]<<24 | VAR_7->ip_dst[1]<<16
            | VAR_7->ip_dst[2]<< 8 | VAR_7->ip_dst[3]<<0;




    VAR_17 = (unsigned)FUNC_9(VAR_9, VAR_11 | VAR_2, VAR_10, VAR_12, VAR_8);





    FUNC_1(VAR_18);


    {
        struct ProtocolState VAR_19[1];

        FUNC_7(VAR_19, 0, sizeof(VAR_19[0]));

        FUNC_6(
            0, 0,
            VAR_19, VAR_5+8, VAR_6-8, VAR_18,
            0);
    }

    if ((VAR_17&0xffff) != VAR_13)
        FUNC_0(VAR_18, VAR_1, " IP-MISMATCH", VAR_0);


    FUNC_8(
        VAR_3, VAR_4,
        VAR_9, 17 , VAR_7->port_src,
        VAR_1,
        VAR_7->ip_ttl,
        FUNC_3(VAR_18, VAR_1),
        FUNC_4(VAR_18, VAR_1));


    FUNC_2(VAR_18);

    return 0;

not_memcached:
    return FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
