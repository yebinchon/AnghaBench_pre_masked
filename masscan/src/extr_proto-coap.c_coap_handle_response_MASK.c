
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
struct PreprocessedInfo {unsigned int port_src; unsigned int port_dst; int* ip_src; int* ip_dst; int ip_ttl; } ;
struct Output {int dummy; } ;
struct BannerOutput {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct BannerOutput*,int ,char*,int ) ;
 int FUNC_2 (struct BannerOutput*) ;
 int FUNC_3 (struct BannerOutput*) ;
 int FUNC_4 (struct BannerOutput*,int ) ;
 int FUNC_5 (struct BannerOutput*,int ) ;
 int FUNC_6 (unsigned char const*,unsigned int,struct BannerOutput*,unsigned int*) ;
 int FUNC_7 (struct Output*,int ,unsigned char const*,unsigned int,struct PreprocessedInfo*,int ) ;
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
    unsigned VAR_14;
    struct BannerOutput VAR_15[1];
    bool VAR_16;

    FUNC_0(1, "[+] COAP\n");

    VAR_9 = VAR_7->ip_src[0]<<24 | VAR_7->ip_src[1]<<16
        | VAR_7->ip_src[2]<< 8 | VAR_7->ip_src[3]<<0;
    VAR_10 = VAR_7->ip_dst[0]<<24 | VAR_7->ip_dst[1]<<16
        | VAR_7->ip_dst[2]<< 8 | VAR_7->ip_dst[3]<<0;



    FUNC_2(VAR_15);




    VAR_16 = FUNC_6(VAR_5, VAR_6, VAR_15, &VAR_13);



    VAR_14 = (unsigned)FUNC_9(VAR_9, VAR_11 | VAR_2, VAR_10, VAR_12, VAR_8);





    if ((VAR_14&0xffff) != VAR_13)
        FUNC_1(VAR_15, VAR_1, " IP-MISMATCH", VAR_0);



    if (VAR_16) {
        FUNC_8(
            VAR_3, VAR_4,
            VAR_9, 17 , VAR_7->port_src,
            VAR_1,
            VAR_7->ip_ttl,
            FUNC_4(VAR_15, VAR_1),
            FUNC_5(VAR_15, VAR_1));
        FUNC_3(VAR_15);
        return 0;
    } else {
        FUNC_3(VAR_15);
        return FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    }
}
