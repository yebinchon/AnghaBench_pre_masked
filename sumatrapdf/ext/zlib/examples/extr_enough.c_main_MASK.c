
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tab {int dummy; } ;
typedef int code_t ;
typedef scalar_t__ big_t ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (size_t,int) ;
 int FUNC_2 () ;
 int * VAR_0 ;
 scalar_t__ FUNC_3 (int,int,int) ;
 int * VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int,int) ;
 int FUNC_6 (char*,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_7 (char*,int,...) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;

int FUNC_9(int VAR_7, char **VAR_8)
{
    int VAR_9;
    int VAR_10;
    big_t VAR_11;
    big_t VAR_12;
    code_t VAR_13;


    VAR_0 = ((void*)0);
    VAR_3 = ((void*)0);
    VAR_1 = ((void*)0);


    VAR_9 = 286;
    VAR_4 = 9;
    VAR_2 = 15;
    if (VAR_7 > 1) {
        VAR_9 = FUNC_0(VAR_8[1]);
        if (VAR_7 > 2) {
            VAR_4 = FUNC_0(VAR_8[2]);
            if (VAR_7 > 3)
                VAR_2 = FUNC_0(VAR_8[3]);
        }
    }
    if (VAR_7 > 4 || VAR_9 < 2 || VAR_4 < 1 || VAR_2 < 1) {
        FUNC_6("invalid arguments, need: [sym >= 2 [root >= 1 [max >= 1]]]\n",
              VAR_6);
        return 1;
    }


    if (VAR_2 > VAR_9 - 1)
        VAR_2 = VAR_9 - 1;


    for (VAR_10 = 0, VAR_13 = 1; VAR_13; VAR_10++, VAR_13 <<= 1)
        ;


    if (VAR_2 > VAR_10 || (code_t)(VAR_9 - 2) >= (((code_t)0 - 1) >> (VAR_2 - 1))) {
        FUNC_6("abort: code length too long for internal types\n", VAR_6);
        return 1;
    }


    if ((code_t)(VAR_9 - 1) > ((code_t)1 << VAR_2) - 1) {
        FUNC_5(VAR_6, "%d symbols cannot be coded in %d bits\n",
                VAR_9, VAR_2);
        return 1;
    }


    VAR_0 = FUNC_1(VAR_2 + 1, sizeof(int));
    if (VAR_0 == ((void*)0)) {
        FUNC_6("abort: unable to allocate enough memory\n", VAR_6);
        return 1;
    }



    if (VAR_9 == 2)
        VAR_3 = ((void*)0);
    else {
        VAR_5 = VAR_9 >> 1;
        if (VAR_5 > ((size_t)0 - 1) / (VAR_10 = (VAR_9 - 1) >> 1) ||
                (VAR_5 *= VAR_10, VAR_5 > ((size_t)0 - 1) / (VAR_10 = VAR_2 - 1)) ||
                (VAR_5 *= VAR_10, VAR_5 > ((size_t)0 - 1) / sizeof(big_t)) ||
                (VAR_3 = FUNC_1(VAR_5, sizeof(big_t))) == ((void*)0)) {
            FUNC_6("abort: unable to allocate enough memory\n", VAR_6);
            FUNC_2();
            return 1;
        }
    }


    VAR_12 = 0;
    for (VAR_10 = 2; VAR_10 <= VAR_9; VAR_10++) {
        VAR_11 = FUNC_3(VAR_10, 1, 2);
        VAR_12 += VAR_11;
        if (VAR_11 == (big_t)0 - 1 || VAR_12 < VAR_11) {
            FUNC_6("abort: can't count that high!\n", VAR_6);
            FUNC_2();
            return 1;
        }
        FUNC_7("%llu %d-codes\n", VAR_11, VAR_10);
    }
    FUNC_7("%llu total codes for 2 to %d symbols", VAR_12, VAR_9);
    if (VAR_2 < VAR_9 - 1)
        FUNC_7(" (%d-bit length limit)\n", VAR_2);
    else
        FUNC_8(" (no length limit)");


    if (VAR_9 == 2)
        VAR_1 = ((void*)0);
    else if (VAR_5 > ((size_t)0 - 1) / sizeof(struct tab) ||
             (VAR_1 = FUNC_1(VAR_5, sizeof(struct tab))) == ((void*)0)) {
        FUNC_6("abort: unable to allocate enough memory\n", VAR_6);
        FUNC_2();
        return 1;
    }


    if (VAR_4 > VAR_2)
        VAR_4 = VAR_2;
    if ((code_t)VAR_9 < ((code_t)1 << (VAR_4 + 1)))
        FUNC_4(VAR_9);
    else
        FUNC_8("cannot handle minimum code lengths > root");


    FUNC_2();
    return 0;
}
