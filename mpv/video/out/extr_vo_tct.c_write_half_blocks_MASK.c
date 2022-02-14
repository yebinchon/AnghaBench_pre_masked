
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_3(
    const int VAR_6, const int VAR_7,
    const int VAR_8, const int VAR_9,
    unsigned char *VAR_10, int VAR_11,
    bool VAR_12)
{
    FUNC_0(VAR_10);
    const int VAR_13 = (VAR_6 - VAR_8) / 2;
    const int VAR_14 = (VAR_7 - VAR_9) / 2;
    for (int VAR_15 = 0; VAR_15 < VAR_9 * 2; VAR_15 += 2) {
        const unsigned char *VAR_16 = VAR_10 + VAR_15 * VAR_11;
        const unsigned char *VAR_17 = VAR_10 + (VAR_15 + 1) * VAR_11;
        FUNC_1(VAR_5, VAR_14 + VAR_15 / 2, VAR_13);
        for (int VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
            unsigned char VAR_19 = *VAR_16++;
            unsigned char VAR_20 = *VAR_16++;
            unsigned char VAR_21 = *VAR_16++;
            unsigned char VAR_22 = *VAR_17++;
            unsigned char VAR_23 = *VAR_17++;
            unsigned char VAR_24 = *VAR_17++;
            if (VAR_12) {
                FUNC_1(VAR_1, FUNC_2(VAR_21, VAR_20, VAR_19));
                FUNC_1(VAR_2, FUNC_2(VAR_24, VAR_23, VAR_22));
            } else {
                FUNC_1(VAR_3, VAR_21, VAR_20, VAR_19);
                FUNC_1(VAR_4, VAR_24, VAR_23, VAR_22);
            }
            FUNC_1("\xe2\x96\x84");
        }
        FUNC_1(VAR_0);
    }
    FUNC_1("\n");
}
