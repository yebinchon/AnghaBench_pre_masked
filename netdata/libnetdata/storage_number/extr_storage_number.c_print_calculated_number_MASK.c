
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long calculated_number ;


 scalar_t__ FUNC_0 (unsigned long long) ;
 double FUNC_1 (unsigned long long,unsigned long long*) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (char*,unsigned long long) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(char *VAR_0, calculated_number VAR_1) {

    char VAR_2[50], VAR_3[50];

    char *VAR_4 = VAR_0;

    if(FUNC_4(VAR_1 < 0)) {
        *VAR_4++ = '-';
        VAR_1 = -VAR_1;
    }

    calculated_number VAR_5, VAR_6;




    VAR_6 = ((unsigned long long)(VAR_1 * 10000000ULL) % 10000000ULL);


    unsigned long long VAR_7 = (unsigned long long)VAR_5;
    unsigned long long VAR_8 = (unsigned long long)FUNC_0(VAR_6);
    if(FUNC_4(VAR_8 >= 10000000)) {
        VAR_7 += 1;
        VAR_8 -= 10000000;
    }



    char *VAR_9;
    if(FUNC_4(VAR_7 == 0)) {
        VAR_2[0] = '0';
        VAR_9 = &VAR_2[1];
    }
    else

        VAR_9 = FUNC_3(VAR_2, VAR_7);


    VAR_9--;
    while( VAR_9 >= VAR_2 ) *VAR_4++ = *VAR_9--;

    if(FUNC_2(VAR_8 != 0)) {

        *VAR_4++ = '.';


        char *VAR_10 = FUNC_3(VAR_3, VAR_8);


        int VAR_11 = 7;
        int VAR_12 = (int)(VAR_10 - VAR_3);
        while(VAR_12 < VAR_11) {
            *VAR_4++ = '0';
            VAR_12++;
        }

        char *VAR_13 = VAR_3;
        while(VAR_13 < VAR_10 && *VAR_13 == '0') VAR_13++;


        VAR_10--;
        while( VAR_10 >= VAR_13 ) *VAR_4++ = *VAR_10--;
    }

    *VAR_4 = '\0';

    return (int)(VAR_4 - VAR_0);
}
