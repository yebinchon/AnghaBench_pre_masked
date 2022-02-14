
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,unsigned char const**,size_t) ;
 int FUNC_8 (int *,unsigned char**) ;

int FUNC_9(const uint8_t *VAR_0, size_t VAR_1)
{
    const unsigned char *VAR_2 = VAR_0;
    unsigned char *VAR_3 = ((void*)0);

    X509 *VAR_4 = FUNC_7(((void*)0), &VAR_2, VAR_1);
    if (VAR_4 != ((void*)0)) {
        BIO *VAR_5 = FUNC_1(FUNC_2());

        FUNC_6(VAR_5, VAR_4);
        FUNC_0(VAR_5);

        FUNC_8(VAR_4, &VAR_3);
        FUNC_4(VAR_3);

        FUNC_5(VAR_4);
    }
    FUNC_3();
    return 0;
}
