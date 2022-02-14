
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(BIO *VAR_0, BIO *VAR_1)
{
    if (VAR_1 != ((void*)0)) {
        BIO *VAR_2;
        do {
            VAR_2 = FUNC_2(VAR_0);
            FUNC_0(VAR_0);
            VAR_0 = VAR_2;
        } while (VAR_0 != ((void*)0) && VAR_0 != VAR_1);
    } else
        FUNC_1(VAR_0);
}
