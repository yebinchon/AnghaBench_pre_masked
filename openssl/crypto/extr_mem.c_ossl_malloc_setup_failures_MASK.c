
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int * FUNC_3 (char const*) ;

void FUNC_4(void)
{
    const char *VAR_2 = FUNC_1("OPENSSL_MALLOC_FAILURES");

    if (VAR_2 != ((void*)0) && (VAR_0 = FUNC_3(VAR_2)) != ((void*)0))
        FUNC_2();
    if ((VAR_2 = FUNC_1("OPENSSL_MALLOC_FD")) != ((void*)0))
        VAR_1 = FUNC_0(VAR_2);
}
