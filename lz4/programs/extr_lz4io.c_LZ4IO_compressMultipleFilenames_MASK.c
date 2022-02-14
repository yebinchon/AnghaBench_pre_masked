
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cRess_t ;
typedef int LZ4IO_prefs_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int * const,int ,char const*,char*,int) ;
 int FUNC_1 (int * const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (size_t) ;
 char* VAR_1 ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*,char const*) ;
 size_t FUNC_8 (char const*) ;

int FUNC_9(LZ4IO_prefs_t* const VAR_2,
                              const char** VAR_3, int VAR_4,
                              const char* VAR_5,
                              int VAR_6)
{
    int VAR_7;
    int VAR_8 = 0;
    char* VAR_9 = (char*)FUNC_4(VAR_0);
    size_t VAR_10 = VAR_0;
    const size_t VAR_11 = FUNC_8(VAR_5);
    cRess_t VAR_12;

    if (VAR_9 == ((void*)0)) return VAR_4;
    VAR_12 = FUNC_1(VAR_2);


    for (VAR_7=0; VAR_7<VAR_4; VAR_7++) {
        size_t const VAR_13 = FUNC_8(VAR_3[VAR_7]);
        if (!FUNC_6(VAR_5, VAR_1)) {
            VAR_8 += FUNC_0(VAR_2, VAR_12,
                                    VAR_3[VAR_7], VAR_1,
                                    VAR_6);
            continue;
        }
        if (VAR_10 <= VAR_13+VAR_11+1) {
            FUNC_3(VAR_9);
            VAR_10 = VAR_13 + 20;
            VAR_9 = (char*)FUNC_4(VAR_10);
            if (VAR_9==((void*)0)) {
                FUNC_2(VAR_12);
                return VAR_4;
        } }
        FUNC_7(VAR_9, VAR_3[VAR_7]);
        FUNC_5(VAR_9, VAR_5);

        VAR_8 += FUNC_0(VAR_2, VAR_12,
                                VAR_3[VAR_7], VAR_9,
                                VAR_6);
    }


    FUNC_2(VAR_12);
    FUNC_3(VAR_9);

    return VAR_8;
}
