
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_METHOD ;


 int * FUNC_0 (size_t) ;
 int FUNC_1 (int*,int *,int const*) ;
 size_t FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int ) ;

__attribute__((used)) static int FUNC_6(void)
{
    size_t VAR_0;
    int VAR_1 = -1;
    int VAR_2 = 1;
    int VAR_3;
    const EVP_PKEY_METHOD *VAR_4;

    for (VAR_0 = 0; VAR_0 < FUNC_2(); VAR_0++) {
        VAR_4 = FUNC_0(VAR_0);
        FUNC_1(&VAR_3, ((void*)0), VAR_4);
        if (VAR_3 < VAR_1)
            VAR_2 = 0;
        VAR_1 = VAR_3;

    }
    if (!VAR_2) {
        FUNC_4("EVP_PKEY_METHOD table out of order");
        for (VAR_0 = 0; VAR_0 < FUNC_2(); VAR_0++) {
            VAR_4 = FUNC_0(VAR_0);
            FUNC_1(&VAR_3, ((void*)0), VAR_4);
            FUNC_5("%d : %s", VAR_3, FUNC_3(VAR_3));
        }
    }
    return VAR_2;
}
