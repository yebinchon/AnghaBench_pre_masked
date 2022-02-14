
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (unsigned char,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_3(
    const int VAR_4, const int VAR_5,
    const int VAR_6, const int VAR_7,
    const unsigned char *VAR_8, const int VAR_9,
    bool VAR_10)
{
    FUNC_0(VAR_8);
    const int VAR_11 = (VAR_4 - VAR_6) / 2;
    const int VAR_12 = (VAR_5 - VAR_7) / 2;
    for (int VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
        const unsigned char *VAR_14 = VAR_8 + VAR_13 * VAR_9;
        FUNC_1(VAR_3, VAR_12 + VAR_13, VAR_11);
        for (int VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
            unsigned char VAR_16 = *VAR_14++;
            unsigned char VAR_17 = *VAR_14++;
            unsigned char VAR_18 = *VAR_14++;
            if (VAR_10) {
                FUNC_1(VAR_1, FUNC_2(VAR_18, VAR_17, VAR_16));
            } else {
                FUNC_1(VAR_2, VAR_18, VAR_17, VAR_16);
            }
            FUNC_1(" ");
        }
        FUNC_1(VAR_0);
    }
    FUNC_1("\n");
}
