
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char*,char) ;
 scalar_t__ FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*,char*,unsigned int*,char*) ;

unsigned int FUNC_3(const char *VAR_6, unsigned int VAR_7)
{
    unsigned int VAR_8 = 0;
    unsigned int VAR_9;
    char VAR_10;

    if (!VAR_6)
        return VAR_7;

    while (*VAR_6 && FUNC_2(VAR_6, "%u%c", &VAR_9, &VAR_10) == 2) {
        switch (VAR_10) {
        case 's': VAR_8 += VAR_9; break;
        case 'm': VAR_8 += VAR_9 * VAR_2; break;
        case 'h': VAR_8 += VAR_9 * VAR_1; break;
        case 'd': VAR_8 += VAR_9 * VAR_0; break;
        case 'w': VAR_8 += VAR_9 * VAR_4; break;
        case 'M': VAR_8 += VAR_9 * VAR_3; break;
        case 'y': VAR_8 += VAR_9 * VAR_5; break;
        default:
            FUNC_0("Ignoring unknown multiplier: %c",
                        VAR_10);
        }

        VAR_6 = (const char *)FUNC_1(VAR_6, VAR_10) + 1;
    }

    return VAR_8 ? VAR_8 : VAR_7;
}
