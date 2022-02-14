
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ASN1_STRING ;


 int FUNC_0 (unsigned char**,int *) ;
 int FUNC_1 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(ASN1_STRING *VAR_3, unsigned char **VAR_4, size_t *VAR_5)
{
    int VAR_6;
    unsigned char *VAR_7;
    int VAR_8;
    int VAR_9 = 0;


    *VAR_4 = ((void*)0);
    *VAR_5 = 0;
    if ((VAR_6 = FUNC_0(&VAR_7, VAR_3)) < 0)
        return VAR_0;






    while (VAR_6 > 0 && VAR_7[VAR_6 - 1] == '\0')
        --VAR_6;


    if ((size_t)VAR_6 != FUNC_2((char *)VAR_7)) {
        FUNC_1(VAR_7);
        return VAR_1;
    }
    for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
        unsigned char VAR_10 = VAR_7[VAR_8];

        if ((VAR_10 >= 'a' && VAR_10 <= 'z')
            || (VAR_10 >= 'A' && VAR_10 <= 'Z')
            || (VAR_10 >= '0' && VAR_10 <= '9')
            || VAR_10 == '_')
            continue;


        if (VAR_8 > 0 && VAR_8 < VAR_6 - 1) {
            if (VAR_10 == '-')
                continue;





            if (VAR_10 == '.'
                && VAR_7[VAR_8 + 1] != '.'
                && VAR_7[VAR_8 - 1] != '-'
                && VAR_7[VAR_8 + 1] != '-') {
                VAR_9 = 1;
                continue;
            }
        }
        VAR_9 = 0;
        break;
    }

    if (VAR_9) {
        *VAR_4 = VAR_7;
        *VAR_5 = (size_t)VAR_6;
        return VAR_2;
    }
    FUNC_1(VAR_7);
    return VAR_2;
}
