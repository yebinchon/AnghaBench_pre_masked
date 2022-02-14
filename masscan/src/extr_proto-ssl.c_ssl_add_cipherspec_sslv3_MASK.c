
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (void*,int) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static char *
FUNC_3(void *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    unsigned char *VAR_3;
    size_t VAR_4 = FUNC_2(VAR_0);
    size_t VAR_5;
    size_t VAR_6;
    size_t VAR_7;
    size_t VAR_8;
    size_t VAR_9;


    VAR_3 = FUNC_0(VAR_0, FUNC_2(VAR_0) + 2);


    VAR_5 = VAR_3[3] << 8 | VAR_3[4];
    VAR_6 = VAR_3[6] << 16 | VAR_3[7] << 8 | VAR_3[8];



    VAR_8 = 43;
    VAR_8 += VAR_3[VAR_8] + 1;


    VAR_7 = VAR_3[VAR_8] << 8 | VAR_3[VAR_8+1];
    VAR_9 = VAR_8+2;
    if (VAR_2) {

        FUNC_1(VAR_3 + VAR_9 + VAR_7 + 2,
                VAR_3 + VAR_9 + VAR_7,
                VAR_4 - (VAR_9 + VAR_7));
        VAR_3[VAR_9 + VAR_7 ] = (unsigned char)(VAR_1>>8);
        VAR_3[VAR_9 + VAR_7 + 1] = (unsigned char)(VAR_1>>0);
    } else {

        FUNC_1(VAR_3 + VAR_9 + 2,
                VAR_3 + VAR_9,
                VAR_4 - VAR_9);
        VAR_3[VAR_9 ] = (unsigned char)(VAR_1>>8);
        VAR_3[VAR_9 + 1] = (unsigned char)(VAR_1>>0);
    }


    VAR_7 += 2;
    VAR_3[VAR_8 ] = (unsigned char)(VAR_7>>8);
    VAR_3[VAR_8 + 1] = (unsigned char)(VAR_7>>0);
    VAR_6 += 2;
    VAR_3[6] = (unsigned char)(VAR_6>>16);
    VAR_3[7] = (unsigned char)(VAR_6>> 8);
    VAR_3[8] = (unsigned char)(VAR_6>> 0);
    VAR_5 += 2;
    VAR_3[3] = (unsigned char)(VAR_5>>8);
    VAR_3[4] = (unsigned char)(VAR_5>>0);

    return (char*)VAR_3;
}
