
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,char*,unsigned char,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int,int) ;
 unsigned char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_3 (char*,char*) ;

int FUNC_4(int (*VAR_2) (const void *VAR_3, size_t VAR_4, void *VAR_5),
                       void *VAR_6, const void *VAR_7, int VAR_8, int VAR_9)
{
    const unsigned char *VAR_10 = VAR_7;
    int VAR_11 = 0;
    char VAR_12[288 + 1];
    int VAR_13, VAR_14, VAR_15, VAR_16;
    unsigned char VAR_17;
    int VAR_18;

    if (VAR_9 < 0)
        VAR_9 = 0;
    else if (VAR_9 > 64)
        VAR_9 = 64;

    VAR_18 = FUNC_1(VAR_9);
    VAR_15 = VAR_8 / VAR_18;
    if ((VAR_15 * VAR_18) < VAR_8)
        VAR_15++;
    for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
        VAR_16 = FUNC_0(VAR_12, sizeof(VAR_12), "%*s%04x - ", VAR_9, "",
                         VAR_13 * VAR_18);
        for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {
            if (FUNC_2(VAR_12, VAR_16, 3)) {
                if (((VAR_13 * VAR_18) + VAR_14) >= VAR_8) {
                    FUNC_3(VAR_12 + VAR_16, "   ");
                } else {
                    VAR_17 = *(VAR_10 + VAR_13 * VAR_18 + VAR_14) & 0xff;
                    FUNC_0(VAR_12 + VAR_16, 4, "%02x%c", VAR_17,
                                 VAR_14 == 7 ? '-' : ' ');
                }
                VAR_16 += 3;
            }
        }
        if (FUNC_2(VAR_12, VAR_16, 2)) {
            FUNC_3(VAR_12 + VAR_16, "  ");
            VAR_16 += 2;
        }
        for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {
            if (((VAR_13 * VAR_18) + VAR_14) >= VAR_8)
                break;
            if (FUNC_2(VAR_12, VAR_16, 1)) {
                VAR_17 = *(VAR_10 + VAR_13 * VAR_18 + VAR_14) & 0xff;

                VAR_12[VAR_16++] = ((VAR_17 >= ' ') && (VAR_17 <= '~')) ? VAR_17 : '.';





                VAR_12[VAR_16] = '\0';
            }
        }
        if (FUNC_2(VAR_12, VAR_16, 1)) {
            VAR_12[VAR_16++] = '\n';
            VAR_12[VAR_16] = '\0';
        }




        VAR_11 += VAR_2((void *)VAR_12, VAR_16, VAR_6);
    }
    return VAR_11;
}
