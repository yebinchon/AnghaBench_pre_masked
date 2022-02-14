
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int nonce ;
typedef int hash_ctx ;
typedef int ge_p3 ;
typedef int az ;
typedef int SHA512_CTX ;


 int FUNC_0 (int*,int) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int const*,size_t) ;
 int FUNC_4 (int*,int *) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int*,int*,int*,int*) ;
 int FUNC_7 (int*) ;

int FUNC_8(uint8_t *VAR_1, const uint8_t *VAR_2, size_t VAR_3,
                 const uint8_t VAR_4[32], const uint8_t VAR_5[32])
{
    uint8_t VAR_6[VAR_0];
    uint8_t VAR_7[VAR_0];
    ge_p3 VAR_8;
    uint8_t VAR_9[VAR_0];
    SHA512_CTX VAR_10;

    FUNC_2(&VAR_10);
    FUNC_3(&VAR_10, VAR_5, 32);
    FUNC_1(VAR_6, &VAR_10);

    VAR_6[0] &= 248;
    VAR_6[31] &= 63;
    VAR_6[31] |= 64;

    FUNC_2(&VAR_10);
    FUNC_3(&VAR_10, VAR_6 + 32, 32);
    FUNC_3(&VAR_10, VAR_2, VAR_3);
    FUNC_1(VAR_7, &VAR_10);

    FUNC_7(VAR_7);
    FUNC_5(&VAR_8, VAR_7);
    FUNC_4(VAR_1, &VAR_8);

    FUNC_2(&VAR_10);
    FUNC_3(&VAR_10, VAR_1, 32);
    FUNC_3(&VAR_10, VAR_4, 32);
    FUNC_3(&VAR_10, VAR_2, VAR_3);
    FUNC_1(VAR_9, &VAR_10);

    FUNC_7(VAR_9);
    FUNC_6(VAR_1 + 32, VAR_9, VAR_6, VAR_7);

    FUNC_0(&VAR_10, sizeof(VAR_10));
    FUNC_0(VAR_7, sizeof(VAR_7));
    FUNC_0(VAR_6, sizeof(VAR_6));

    return 1;
}
