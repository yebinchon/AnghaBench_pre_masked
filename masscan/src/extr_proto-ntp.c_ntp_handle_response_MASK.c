
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef int time_t ;
struct PreprocessedInfo {unsigned int app_offset; int app_length; int* ip_src; int ip_ttl; int port_src; } ;
struct Output {int dummy; } ;
struct BannerOutput {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct BannerOutput*) ;
 int FUNC_2 (struct BannerOutput*) ;
 int FUNC_3 (struct BannerOutput*,int ) ;
 int FUNC_4 (struct BannerOutput*,int ) ;
 int FUNC_5 (unsigned char const*,int,struct BannerOutput*,unsigned int*) ;
 int FUNC_6 (struct Output*,int ,unsigned int,int,int ,int ,int ,int ,int ) ;

unsigned
FUNC_7(struct Output *VAR_1, time_t VAR_2,
            const unsigned char *VAR_3, unsigned VAR_4,
            struct PreprocessedInfo *VAR_5,
            uint64_t VAR_6
            )
{
    unsigned VAR_7;
    unsigned VAR_8 = 0;
    struct BannerOutput VAR_9[1];
    unsigned VAR_10 = VAR_5->app_offset;

    FUNC_0(VAR_4);
    FUNC_0(VAR_6);

    if (VAR_5->app_length < 4)
        return 0;



    FUNC_1(VAR_9);


    switch ((VAR_3[VAR_10]>>3)&7) {
        case 2:
            FUNC_5(
               VAR_3 + VAR_5->app_offset,
               VAR_5->app_length,
               VAR_9,
               &VAR_8);
            break;
        default:
            FUNC_2(VAR_9);
            return 0;
    }

    VAR_7 = VAR_5->ip_src[0]<<24 | VAR_5->ip_src[1]<<16
    | VAR_5->ip_src[2]<< 8 | VAR_5->ip_src[3]<<0;
    FUNC_6(
                         VAR_1, VAR_2,
                         VAR_7, 17, VAR_5->port_src,
                         VAR_0,
                         VAR_5->ip_ttl,
                         FUNC_3(VAR_9, VAR_0),
                         FUNC_4(VAR_9, VAR_0));


    FUNC_2(VAR_9);

    return 0;
}
