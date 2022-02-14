
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
struct PreprocessedInfo {unsigned int port_src; int* ip_src; unsigned int app_length; int mac_src; int app_offset; } ;
struct Output {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct Output*,int ,unsigned char const*,unsigned int,struct PreprocessedInfo*,int ) ;
 unsigned int FUNC_1 (struct Output*,int ,unsigned char const*,unsigned int,struct PreprocessedInfo*,int ) ;
 unsigned int FUNC_2 (struct Output*,int ,unsigned char const*,unsigned int,struct PreprocessedInfo*,int ) ;
 unsigned int FUNC_3 (struct Output*,int ,unsigned char const*,unsigned int,struct PreprocessedInfo*,int ) ;
 unsigned int FUNC_4 (struct Output*,int ,unsigned char const*,unsigned int,struct PreprocessedInfo*,int ) ;
 unsigned int FUNC_5 (struct Output*,int ,unsigned char const*,unsigned int,struct PreprocessedInfo*,int ) ;
 unsigned int FUNC_6 (struct Output*,int ,unsigned char const*,unsigned int,struct PreprocessedInfo*,int ) ;
 unsigned int FUNC_7 (struct Output*,int ,unsigned char const*,unsigned int,struct PreprocessedInfo*,int ) ;
 int FUNC_8 (struct Output*,int ,int ,unsigned int,int,unsigned int,int ,int ,int ) ;

void
FUNC_9(struct Output *VAR_1, time_t VAR_2,
        const unsigned char *VAR_3, unsigned VAR_4,
        struct PreprocessedInfo *VAR_5, uint64_t VAR_6)
{
    unsigned VAR_7;
    unsigned VAR_8 = VAR_5->port_src;
    unsigned VAR_9 = 0;

    VAR_7 = VAR_5->ip_src[0]<<24 | VAR_5->ip_src[1]<<16
            | VAR_5->ip_src[2]<< 8 | VAR_5->ip_src[3]<<0;



    switch (VAR_8) {
        case 53:
            VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
            break;
        case 123:
            VAR_9 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
            break;
        case 137:
            VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
            break;
        case 161:
            VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
            break;
        case 5683:
            VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3 + VAR_5->app_offset, VAR_5->app_length, VAR_5, VAR_6);
            break;
        case 11211:
            VAR_3 += VAR_5->app_offset;
            VAR_4 = VAR_5->app_length;
            VAR_9 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
            break;
        case 16464:
        case 16465:
        case 16470:
        case 16471:
            VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
            break;
        default:
            VAR_3 += VAR_5->app_offset;
            VAR_4 = VAR_5->app_length;
            VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
            break;
    }

    if (VAR_9 == 0)
        FUNC_8(
                        VAR_1,
                        VAR_2,
                        VAR_0,
                        VAR_7,
                        17,
                        VAR_8,
                        0,
                        0,
                        VAR_5->mac_src);

}
