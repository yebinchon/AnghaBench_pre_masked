
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
struct PreprocessedInfo {unsigned int port_src; unsigned int port_dst; int app_offset; int* ip_src; int* ip_dst; int ip_ttl; int app_length; } ;
struct Output {int dummy; } ;
struct BannerOutput {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct BannerOutput*) ;
 int FUNC_2 (struct BannerOutput*) ;
 int FUNC_3 (struct BannerOutput*,int ) ;
 int FUNC_4 (struct BannerOutput*,int ) ;
 int FUNC_5 (struct Output*,int ,unsigned int,int,unsigned int,int ,int ,int ,int ) ;
 int FUNC_6 (unsigned char const*,int ,struct BannerOutput*,unsigned int*) ;
 scalar_t__ FUNC_7 (unsigned int,unsigned int,unsigned int,unsigned int,int ) ;

unsigned
FUNC_8(struct Output *VAR_2, time_t VAR_3,
            const unsigned char *VAR_4, unsigned VAR_5,
            struct PreprocessedInfo *VAR_6,
            uint64_t VAR_7
            )
{
    unsigned VAR_8;
    unsigned VAR_9;
    unsigned VAR_10 = VAR_6->port_src;
    unsigned VAR_11 = VAR_6->port_dst;
    unsigned VAR_12;
    unsigned VAR_13 = 0;
    struct BannerOutput VAR_14[1];

    FUNC_0(VAR_5);



    FUNC_1(VAR_14);


    FUNC_6(
        VAR_4 + VAR_6->app_offset,
        VAR_6->app_length,
        VAR_14,
        &VAR_13);


    VAR_8 = VAR_6->ip_src[0]<<24 | VAR_6->ip_src[1]<<16
            | VAR_6->ip_src[2]<< 8 | VAR_6->ip_src[3]<<0;
    VAR_9 = VAR_6->ip_dst[0]<<24 | VAR_6->ip_dst[1]<<16
            | VAR_6->ip_dst[2]<< 8 | VAR_6->ip_dst[3]<<0;




    VAR_12 = (unsigned)FUNC_7(VAR_8, VAR_10 | VAR_1, VAR_9, VAR_11, VAR_7);
    if ((VAR_12&0x7FFFffff) != VAR_13)
        return 1;


    FUNC_5(
        VAR_2, VAR_3,
        VAR_8, 17, VAR_6->port_src,
        VAR_0,
        VAR_6->ip_ttl,
        FUNC_3(VAR_14, VAR_0),
        FUNC_4(VAR_14, VAR_0));


    FUNC_2(VAR_14);

    return 0;
}
