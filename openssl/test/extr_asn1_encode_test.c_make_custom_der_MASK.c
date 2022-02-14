
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int t_true ;
struct TYPE_3__ {size_t nbytes1; size_t nbytes2; char* bytes2; unsigned char const* bytes1; } ;
typedef TYPE_1__ TEST_CUSTOM_DATA ;


 int FUNC_0 (int) ;
 unsigned char* FUNC_1 (size_t) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (size_t,unsigned char**) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static size_t FUNC_4(const TEST_CUSTOM_DATA *VAR_2,
                              unsigned char **VAR_3, int VAR_4)
{
    size_t VAR_5, VAR_6 = 0, VAR_7 = 0, VAR_8;
    const unsigned char VAR_9[] = { VAR_0, 0x01, 0xff };
    unsigned char *VAR_10 = ((void*)0);
    size_t VAR_11;




    VAR_5 =
        1 + FUNC_2(VAR_2->nbytes1, ((void*)0))
        + VAR_2->nbytes1;

    for (VAR_11 = VAR_2->nbytes2; VAR_11 > 0; VAR_11--) {
        if (VAR_2->bytes2[VAR_11 - 1] != '\0')
            break;
    }
    if (VAR_4 || VAR_11 > 0) {




        VAR_7 =
            1 + FUNC_2(VAR_2->nbytes2, ((void*)0))
            + VAR_2->nbytes2;
        VAR_6 =
            1 + FUNC_2(VAR_7, ((void*)0)) + VAR_7;
    }






    VAR_8 =
        1 + FUNC_2(sizeof(VAR_9) + VAR_5 + VAR_6, ((void*)0))
        + sizeof(VAR_9) + VAR_5 + VAR_6;

    *VAR_3 = VAR_10 = FUNC_1(VAR_8);
    if (*VAR_3 == ((void*)0))
        return 0;


    *VAR_10++ = 0x30;
    FUNC_2(sizeof(VAR_9) + VAR_5 + VAR_6, &VAR_10);


    FUNC_3(VAR_10, VAR_9, sizeof(VAR_9));
    VAR_10 += sizeof(VAR_9);


    *VAR_10++ = VAR_1;
    FUNC_2(VAR_2->nbytes1, &VAR_10);
    FUNC_3(VAR_10, VAR_2->bytes1, VAR_2->nbytes1);
    VAR_10 += VAR_2->nbytes1;

    if (VAR_6 > 0) {


        *VAR_10++ = 0xa0;
        FUNC_2(VAR_7, &VAR_10);
        *VAR_10++ = VAR_1;
        FUNC_2(VAR_2->nbytes2, &VAR_10);
        FUNC_3(VAR_10, VAR_2->bytes2, VAR_2->nbytes2);
        VAR_10 += VAR_2->nbytes2;
    }

    FUNC_0(VAR_8 == (size_t)(VAR_10 - *VAR_3));

    return VAR_8;
}
