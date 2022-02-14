
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rand_buf ;
typedef int RAND_DRBG ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*,size_t) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned char*,int,int) ;
 size_t FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(void)
{
    RAND_DRBG *VAR_0 = ((void*)0);
    unsigned char VAR_1[256];
    size_t VAR_2;
    size_t VAR_3 = 0;

    if (!FUNC_5(VAR_0 = FUNC_0())
        || !FUNC_6(FUNC_7(VAR_0)))
        return 0;





    FUNC_8(VAR_1, 0xCD, sizeof(VAR_1));

    for ( VAR_2 = 256 ; VAR_2 > 0 ; --VAR_2 ) {
        FUNC_1(VAR_0);
        FUNC_2(VAR_1, VAR_2);

        if (!FUNC_4(FUNC_3(),
                         (VAR_2 >= VAR_3)))
            return 0;
    }

    return 1;
}
