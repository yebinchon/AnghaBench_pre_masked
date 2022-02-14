
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_ENCODE_CTX ;


 int FUNC_0 (int *,unsigned char*,int*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,int*,unsigned char const*,size_t) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 size_t VAR_1 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (unsigned char*,unsigned char*,int) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(unsigned char *VAR_2, size_t VAR_3, const char *VAR_4)
{
    EVP_ENCODE_CTX *VAR_5;
    int VAR_6 = 0, VAR_7 = 0;
    size_t VAR_8, VAR_9;
    const unsigned char *VAR_10 = (const unsigned char *)"00";

    while (*VAR_4 == ' ' || *VAR_4 == '\t' || *VAR_4 == '\n')
        ++VAR_4;
    VAR_8 = FUNC_7(VAR_4);
    VAR_9 = 4 - (VAR_8 & 3);
    VAR_9 &= 3;


    if (VAR_8 > VAR_1 || ((VAR_8 + VAR_9) / 4) * 3 > VAR_3)
        return -1;

    VAR_5 = FUNC_4();
    if (VAR_5 == ((void*)0))
        return -1;
    if (VAR_9 == 3) {
        VAR_6 = -1;
        goto err;
    }



    FUNC_1(VAR_5);
    FUNC_5(VAR_5, VAR_0);


    if (VAR_9 != 0
            && FUNC_2(VAR_5, VAR_2, &VAR_6, VAR_10, VAR_9) < 0) {
        VAR_6 = -1;
        goto err;
    }
    if (FUNC_2(VAR_5, VAR_2, &VAR_7, (const unsigned char *)VAR_4, VAR_8) < 0) {
        VAR_6 = -1;
        goto err;
    }
    VAR_6 += VAR_7;
    FUNC_0(VAR_5, VAR_2 + VAR_6, &VAR_7);
    VAR_6 += VAR_7;


    if (VAR_9 != 0) {
        if ((int)VAR_9 >= VAR_6) {
            VAR_6 = -1;
            goto err;
        }
        FUNC_6(VAR_2, VAR_2 + VAR_9, VAR_6 - VAR_9);
        VAR_6 -= VAR_9;
    }

 err:
    FUNC_3(VAR_5);

    return VAR_6;
}
