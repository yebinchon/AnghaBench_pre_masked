
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*,char const*,unsigned int) ;
 int FUNC_3 (unsigned char*,...) ;
 int FUNC_4 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_5 (char const*) ;

unsigned
FUNC_6(unsigned char **VAR_0, unsigned VAR_1,
                    const char *VAR_2,
                    const unsigned char *VAR_3, unsigned VAR_4)
{
    unsigned char *VAR_5 = *VAR_0;
    unsigned char *VAR_6;
    unsigned VAR_7;
    unsigned VAR_8 = 0;
    unsigned VAR_9 = (unsigned)FUNC_5(VAR_2);

    VAR_6 = FUNC_0(VAR_1 + VAR_4 + 1 + 2);

    FUNC_3(VAR_6, VAR_5, VAR_1);



    for (VAR_7=0; VAR_7<VAR_1; VAR_7++) {
        if (VAR_6[VAR_7] == '\r')
            continue;
        if (VAR_6[VAR_7] == '\n') {
            if (VAR_8) {



                while (VAR_6[VAR_7-1] == '\r')
                    VAR_7--;
                break;
            } else if (FUNC_2(&VAR_6[VAR_7+1], VAR_2, VAR_9) == 0) {
                unsigned VAR_10;
                VAR_7++;
                for (VAR_10=VAR_7; VAR_10<VAR_1 && VAR_6[VAR_10] != '\n'; VAR_10++)
                    ;
                if (VAR_10 < VAR_1 && VAR_6[VAR_10] == '\n')
                    VAR_10++;
                FUNC_4( &VAR_6[VAR_7],
                            &VAR_6[VAR_10],
                            VAR_1 - VAR_10);
                VAR_1 -= (VAR_10 - VAR_7);
                VAR_6[VAR_1] = '\0';
                break;
            }
        }
    }


    FUNC_4( &VAR_6[VAR_7 + VAR_9 + VAR_4 + 1 + 2],
                &VAR_6[VAR_7],
                VAR_1 - VAR_7);
    FUNC_3( &VAR_6[VAR_7],
            VAR_2,
            VAR_9);
    FUNC_3( &VAR_6[VAR_7 + VAR_9],
            " ",
            1);
    FUNC_3( &VAR_6[VAR_7 + VAR_9 + 1],
            VAR_3,
            VAR_4);
    FUNC_3( &VAR_6[VAR_7 + VAR_9 + 1 + VAR_4],
            "\r\n",
            2);

    VAR_1 += VAR_9 + 1 + VAR_4 + 2;

    FUNC_1(VAR_5);
    *VAR_0 = VAR_6;
    return VAR_1;
}
