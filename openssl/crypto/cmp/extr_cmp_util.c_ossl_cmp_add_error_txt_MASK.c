
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char const*,char const*) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (char const**,int*,char const**,char const**,int*) ;
 size_t VAR_2 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int) ;
 int FUNC_5 (int ,char const*,unsigned long,char const*,int) ;
 size_t FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,char const*) ;

void FUNC_8(const char *VAR_3, const char *VAR_4)
{
    const char *VAR_5 = ((void*)0);
    int VAR_6;
    const char *VAR_7 = ((void*)0);
    const char *VAR_8 = ((void*)0);
    int VAR_9;
    unsigned long VAR_10 = FUNC_1();

    if (VAR_3 == ((void*)0))
        VAR_3 = "";
    if (VAR_10 == 0)
        FUNC_5(VAR_0, ((void*)0), 0, "", 0);

    do {
        size_t VAR_11, VAR_12;
        const char *VAR_13 = VAR_4, *VAR_14 = VAR_4;
        char *VAR_15;

        FUNC_2(&VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
        if ((VAR_9 & VAR_1) == 0) {
            VAR_8 = "";
            VAR_3 = "";
        }
        VAR_12 = FUNC_6(VAR_8);


        if (VAR_12 >= VAR_2
                || FUNC_6(VAR_3) >= (size_t)(VAR_2 - VAR_12))
            VAR_11 = 0;
        else
            VAR_11 = VAR_2 - VAR_12 - FUNC_6(VAR_3) - 1;


        if (VAR_3[0] == '\0') {
            const size_t VAR_16 = FUNC_6(VAR_14);

            if (VAR_16 <= VAR_11) {
                VAR_14 += VAR_16;
                VAR_13 = ((void*)0);
            }
            else {
                VAR_14 += VAR_11;
                VAR_13 = VAR_14;
            }
        } else {
            while (*VAR_14 != '\0' && (size_t)(VAR_14 - VAR_4) <= VAR_11) {
                VAR_13 = VAR_14;
                VAR_14 = FUNC_7(VAR_13, VAR_3);
                if (VAR_14 != ((void*)0))
                    VAR_14 += FUNC_6(VAR_3);
                else
                    VAR_14 = VAR_13 + FUNC_6(VAR_13);
            }
            if ((size_t)(VAR_14 - VAR_4) <= VAR_11)
                VAR_13 = ((void*)0);
        }
        if (VAR_13 != ((void*)0)) {

            if (VAR_13 != VAR_4) {
                VAR_15 = FUNC_4(VAR_4, VAR_13 - VAR_4);
                if (VAR_15 == ((void*)0))
                    return;
                FUNC_0(2, VAR_3, VAR_15);
                FUNC_3(VAR_15);
            }
            FUNC_5(VAR_0, VAR_7, VAR_10, VAR_5, VAR_6);
            VAR_4 = VAR_13;
        } else {
            FUNC_0(2, VAR_3, VAR_4);
            VAR_4 = VAR_14;
        }
    } while (*VAR_4 != '\0');
}
