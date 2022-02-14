
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * separators; } ;
typedef TYPE_1__ procfile ;
typedef int PF_CHAR_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(procfile *VAR_3, const char *VAR_4) {
    static PF_CHAR_TYPE VAR_5[256];
    static char VAR_6 = 0;

    if(FUNC_2(!VAR_6)) {



        int VAR_7 = 256;
        while(VAR_7--) {
            if(FUNC_2(VAR_7 == '\n' || VAR_7 == '\r'))
                VAR_5[VAR_7] = VAR_0;

            else if(FUNC_2(FUNC_1(VAR_7) || !FUNC_0(VAR_7)))
                VAR_5[VAR_7] = VAR_1;

            else
                VAR_5[VAR_7] = VAR_2;
        }

        VAR_6 = 1;
    }


    PF_CHAR_TYPE *VAR_8 = VAR_3->separators, *VAR_9 = VAR_5, *VAR_10 = &VAR_5[256];
    while(VAR_9 != VAR_10)
        *VAR_8++ = *VAR_9++;


    if(FUNC_2(!VAR_4))
        VAR_4 = " \t=|";

    VAR_8 = VAR_3->separators;
    const char *VAR_11 = VAR_4;
    while(*VAR_11)
        VAR_8[(int)*VAR_11++] = VAR_1;
}
