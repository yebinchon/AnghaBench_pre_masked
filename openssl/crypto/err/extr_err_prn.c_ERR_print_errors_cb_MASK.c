
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tid ;
typedef int buf ;
typedef int CRYPTO_THREAD_ID ;


 int FUNC_0 (char*,int,char*,char*,char const*,char const*,char const*,char const*,int,char const*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 unsigned long FUNC_2 (char const**,int*,char const**,char const**,int*) ;
 char* FUNC_3 (unsigned long) ;
 char* FUNC_4 (unsigned long) ;
 char* FUNC_5 (unsigned char const*,int) ;
 int FUNC_6 (char*) ;
 size_t FUNC_7 (char*) ;

void FUNC_8(int (*VAR_1) (const char *VAR_2, size_t VAR_3, void *VAR_4),
                         void *VAR_5)
{
    CRYPTO_THREAD_ID VAR_6 = FUNC_1();
    unsigned long VAR_7;
    char VAR_8[4096], *VAR_9;
    const char *VAR_10, *VAR_11;
    const char *VAR_12, *VAR_13, *VAR_14;
    int VAR_15, VAR_16;

    while ((VAR_7 = FUNC_2(&VAR_12, &VAR_15, &VAR_14, &VAR_13, &VAR_16)) != 0) {
        VAR_10 = FUNC_3(VAR_7);
        VAR_11 = FUNC_4(VAR_7);
        if (VAR_14 == ((void*)0))
            VAR_14 = "unknown function";
        if ((VAR_16 & VAR_0) == 0)
            VAR_13 = "";
        VAR_9 = FUNC_5((const unsigned char *)&VAR_6, sizeof(VAR_6));
        FUNC_0(VAR_8, sizeof(VAR_8), "%s:error:%s:%s:%s:%s:%d:%s\n",
                     VAR_9, VAR_10, VAR_14, VAR_11, VAR_12, VAR_15, VAR_13);
        FUNC_6(VAR_9);
        if (VAR_1(VAR_8, FUNC_7(VAR_8), VAR_5) <= 0)
            break;
    }
}
