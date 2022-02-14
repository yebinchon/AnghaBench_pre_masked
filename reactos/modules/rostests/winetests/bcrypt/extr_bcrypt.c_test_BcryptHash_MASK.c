
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int md5_hmac ;
typedef int md5 ;
typedef int UCHAR ;
typedef char* NTSTATUS ;
typedef int * BCRYPT_ALG_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,int ) ;
 char* FUNC_1 (int **,int ,int ,int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int,char*,...) ;
 char* FUNC_5 (int *,int *,int,int *,int,int *,int) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static void FUNC_9(void)
{
    static const char VAR_4[] =
        "e2a3e68d23ce348b8f68b3079de3d4c9";
    static const char VAR_5[] =
        "7bda029b93fa8d817fcc9e13d6bdf092";
    BCRYPT_ALG_HANDLE VAR_6;
    UCHAR VAR_7[16], VAR_8[16];
    char VAR_9[65];
    NTSTATUS VAR_10;

    VAR_6 = ((void*)0);
    VAR_10 = FUNC_1(&VAR_6, VAR_1, VAR_2, 0);
    FUNC_4(VAR_10 == VAR_3, "got %08x\n", VAR_10);
    FUNC_4(VAR_6 != ((void*)0), "alg not set\n");

    FUNC_8(VAR_6, 16);
    FUNC_7(VAR_6, "MD5");

    FUNC_3(VAR_7, 0, sizeof(VAR_7));
    VAR_10 = FUNC_5(VAR_6, ((void*)0), 0, (UCHAR *)"test", sizeof("test"), VAR_7, sizeof(VAR_7));
    FUNC_4(VAR_10 == VAR_3, "got %08x\n", VAR_10);
    FUNC_2( VAR_7, sizeof(VAR_7), VAR_9 );
    FUNC_4(!FUNC_6(VAR_9, VAR_4), "got %s\n", VAR_9);

    VAR_10 = FUNC_0(VAR_6, 0);
    FUNC_4(VAR_10 == VAR_3, "got %08x\n", VAR_10);

    VAR_6 = ((void*)0);
    FUNC_3(VAR_8, 0, sizeof(VAR_8));
    VAR_10 = FUNC_1(&VAR_6, VAR_1, VAR_2, VAR_0);
    FUNC_4(VAR_10 == VAR_3, "got %08x\n", VAR_10);
    FUNC_4(VAR_6 != ((void*)0), "alg not set\n");

    VAR_10 = FUNC_5(VAR_6, (UCHAR *)"key", sizeof("key"), (UCHAR *)"test", sizeof("test"), VAR_8, sizeof(VAR_8));
    FUNC_4(VAR_10 == VAR_3, "got %08x\n", VAR_10);
    FUNC_2( VAR_8, sizeof(VAR_8), VAR_9 );
    FUNC_4(!FUNC_6(VAR_9, VAR_5), "got %s\n", VAR_9);

    VAR_10 = FUNC_0(VAR_6, 0);
    FUNC_4(VAR_10 == VAR_3, "got %08x\n", VAR_10);
}
