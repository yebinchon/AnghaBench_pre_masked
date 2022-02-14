
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {size_t bytes_written; } ;
struct Output {TYPE_1__ rotate; } ;
typedef enum ApplicationProtocol { ____Placeholder_ApplicationProtocol } ApplicationProtocol ;
typedef int FILE ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct Output*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (unsigned char**,int,unsigned int,int *) ;
 int FUNC_3 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct Output *VAR_1, FILE *VAR_2, time_t VAR_3,
        unsigned VAR_4, unsigned VAR_5, unsigned VAR_6,
        enum ApplicationProtocol VAR_7, unsigned VAR_8,
        const unsigned char *VAR_9, unsigned VAR_10)
{
    unsigned char VAR_11[32768];
    unsigned VAR_12;
    size_t VAR_13;
    static const unsigned VAR_14 = 14;

    FUNC_0(VAR_1);


    VAR_11[0] = VAR_0;


    if (VAR_10 >= 128 * 128 - VAR_14)
        return;
    if (VAR_10 < 128 - VAR_14) {
        VAR_11[1] = (unsigned char)(VAR_10 + VAR_14);
        VAR_12 = 2;
    } else {
        VAR_11[1] = (unsigned char)((VAR_10 + VAR_14)>>7) | 0x80;
        VAR_11[2] = (unsigned char)((VAR_10 + VAR_14) & 0x7F);
        VAR_12 = 3;
    }


    VAR_11[VAR_12+0] = (unsigned char)(VAR_3>>24);
    VAR_11[VAR_12+1] = (unsigned char)(VAR_3>>16);
    VAR_11[VAR_12+2] = (unsigned char)(VAR_3>> 8);
    VAR_11[VAR_12+3] = (unsigned char)(VAR_3>> 0);

    VAR_11[VAR_12+4] = (unsigned char)(VAR_4>>24);
    VAR_11[VAR_12+5] = (unsigned char)(VAR_4>>16);
    VAR_11[VAR_12+6] = (unsigned char)(VAR_4>> 8);
    VAR_11[VAR_12+7] = (unsigned char)(VAR_4>> 0);

    VAR_11[VAR_12+8] = (unsigned char)(VAR_5);

    VAR_11[VAR_12+ 9] = (unsigned char)(VAR_6>>8);
    VAR_11[VAR_12+10] = (unsigned char)(VAR_6>>0);

    VAR_11[VAR_12+11] = (unsigned char)(VAR_7>>8);
    VAR_11[VAR_12+12] = (unsigned char)(VAR_7>>0);

    VAR_11[VAR_12+13] = (unsigned char)(VAR_8);


    FUNC_3(VAR_11+VAR_12+14, VAR_9, VAR_10);


    VAR_13 = FUNC_2(&VAR_11, 1, VAR_10+VAR_12+VAR_14, VAR_2);
    if (VAR_13 != VAR_10+VAR_12+VAR_14) {
        FUNC_4("output");
        FUNC_1(1);
    }
    VAR_1->rotate.bytes_written += VAR_13;
}
