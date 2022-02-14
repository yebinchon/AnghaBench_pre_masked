
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int point_conversion_form_t ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;


 size_t FUNC_0 (int const*,int const*,int ,unsigned char**,int *) ;
 void** VAR_0 ;
 int FUNC_1 (unsigned char*) ;
 char* FUNC_2 (size_t) ;

char *FUNC_3(const EC_GROUP *VAR_1,
                         const EC_POINT *VAR_2,
                         point_conversion_form_t VAR_3, BN_CTX *VAR_4)
{
    char *VAR_5, *VAR_6;
    size_t VAR_7 = 0, VAR_8;
    unsigned char *VAR_9 = ((void*)0), *VAR_10;

    VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_9, VAR_4);

    if (VAR_7 == 0)
        return ((void*)0);

    VAR_5 = FUNC_2(VAR_7 * 2 + 2);
    if (VAR_5 == ((void*)0)) {
        FUNC_1(VAR_9);
        return ((void*)0);
    }
    VAR_6 = VAR_5;
    VAR_10 = VAR_9;
    for (VAR_8 = VAR_7; VAR_8 > 0; VAR_8--) {
        int VAR_11 = (int)*(VAR_10++);
        *(VAR_6++) = VAR_0[VAR_11 >> 4];
        *(VAR_6++) = VAR_0[VAR_11 & 0x0F];
    }
    *VAR_6 = '\0';

    FUNC_1(VAR_9);

    return VAR_5;
}
