
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
struct PreprocessedInfo {unsigned int port_src; int* ip_src; int ip_ttl; } ;
struct Output {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct Output*,int ,unsigned int,int,unsigned int,int ,int ,unsigned char const*,unsigned int) ;

unsigned
FUNC_2(struct Output *VAR_1, time_t VAR_2,
           const unsigned char *VAR_3, unsigned VAR_4,
           struct PreprocessedInfo *VAR_5,
           uint64_t VAR_6)
{
    unsigned VAR_7;

    unsigned VAR_8 = VAR_5->port_src;


    FUNC_0(VAR_6);

    VAR_7 = VAR_5->ip_src[0]<<24 | VAR_5->ip_src[1]<<16 | VAR_5->ip_src[2]<< 8 | VAR_5->ip_src[3]<<0;


    if (VAR_4 > 64)
        VAR_4 = 64;

    FUNC_1(
                         VAR_1, VAR_2,
                         VAR_7, 17, VAR_8,
                         VAR_0,
                         VAR_5->ip_ttl,
                         VAR_3, VAR_4);

    return 0;
}
