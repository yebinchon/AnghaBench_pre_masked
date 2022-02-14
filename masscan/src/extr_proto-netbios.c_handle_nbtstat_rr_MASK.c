
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct Output {int dummy; } ;
typedef int banner ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,unsigned int*,char) ;
 int FUNC_1 (unsigned char*,int,unsigned int*,unsigned char const*) ;
 int FUNC_2 (struct Output*,int ,unsigned int,int,unsigned int,int ,unsigned int,unsigned char*,unsigned int) ;

__attribute__((used)) static unsigned
FUNC_3(struct Output *VAR_1, time_t VAR_2, unsigned VAR_3,
                  const unsigned char *VAR_4, unsigned VAR_5,
                  unsigned VAR_6, unsigned VAR_7)
{
    unsigned char VAR_8[65536];
    unsigned VAR_9 = 0;
    unsigned VAR_10 = 0;
    unsigned VAR_11;

    if (VAR_10 >= VAR_5)
        return 0;
    VAR_11 = VAR_4[VAR_10++];


    while (VAR_10 + 18 <= VAR_5 && VAR_11) {
        FUNC_1(VAR_8, sizeof(VAR_8), &VAR_9, &VAR_4[VAR_10]);
        VAR_10 += 18;
        VAR_11--;
    }


    {
        unsigned VAR_12;

        for (VAR_12=0; VAR_12<6; VAR_12++) {
            if (VAR_10 + VAR_12 < VAR_5) {
                unsigned char VAR_13 = VAR_4[VAR_10];
                FUNC_0(VAR_8, sizeof(VAR_8), &VAR_9, "0123456789ABCDEF"[VAR_13>>4]);
                FUNC_0(VAR_8, sizeof(VAR_8), &VAR_9, "0123456789ABCDEF"[VAR_13&0xF]);
                if (VAR_12 < 5)
                    FUNC_0(VAR_8, sizeof(VAR_8), &VAR_9, '-');
            }
        }
    }


    FUNC_2(
            VAR_1, VAR_2,
            VAR_6, 17, VAR_7,
            VAR_0,
            VAR_3,
            VAR_8, VAR_9);
    return 0;
}
