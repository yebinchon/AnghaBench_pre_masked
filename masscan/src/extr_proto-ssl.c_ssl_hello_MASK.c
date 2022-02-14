
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint64_t ;


 unsigned char* FUNC_0 (size_t) ;
 int FUNC_1 (unsigned char*,void const*,size_t) ;
 scalar_t__ FUNC_2 (unsigned int*,int,int const*) ;
 int FUNC_3 (int ) ;

char *
FUNC_4(const void *VAR_0)
{
    unsigned char *VAR_1 = (unsigned char *)VAR_0;
    unsigned VAR_2 = (unsigned)FUNC_3(0);
    unsigned VAR_3;


    size_t VAR_4 = (VAR_1[3]<<8 | VAR_1[4]) + 5;


    VAR_1 = FUNC_0(VAR_4);
    FUNC_1(VAR_1, VAR_0, VAR_4);


    VAR_1[11] = (unsigned char)(VAR_2>>24);
    VAR_1[12] = (unsigned char)(VAR_2>>16);
    VAR_1[13] = (unsigned char)(VAR_2>> 8);
    VAR_1[14] = (unsigned char)(VAR_2>> 0);


    for (VAR_3=4; VAR_3<32; VAR_3++) {
        static const uint64_t VAR_5[2] = {0,0};
        unsigned VAR_6 = VAR_3+VAR_2;
        unsigned char VAR_7 = (unsigned char)FUNC_2(&VAR_6, sizeof(VAR_6), VAR_5);

        VAR_1[11+VAR_3] = VAR_7;
    }

    return (char*)VAR_1;
}
