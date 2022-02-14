
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int md5_hmac ;
typedef int md5 ;
typedef int len ;
typedef int buf_hmac ;
typedef int buf ;
typedef int ULONG ;
typedef int UCHAR ;
typedef char* NTSTATUS ;
typedef int * BCRYPT_HASH_HANDLE ;
typedef int * BCRYPT_ALG_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 char* FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *,int **,int *,int,int *,int,int ) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int *,int *,int,int ) ;
 char* FUNC_4 (int *,int *,int *,int,int*,int ) ;
 char* FUNC_5 (int *,int *,int,int ) ;
 char* FUNC_6 (int **,int ,int ,int ) ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int) ;

__attribute__((used)) static void FUNC_13(void)
{
    static const char VAR_8[] =
        "e2a3e68d23ce348b8f68b3079de3d4c9";
    static const char VAR_9[] =
        "7bda029b93fa8d817fcc9e13d6bdf092";
    BCRYPT_ALG_HANDLE VAR_10;
    BCRYPT_HASH_HANDLE VAR_11;
    UCHAR VAR_12[512], VAR_13[1024], VAR_14[16], VAR_15[16];
    ULONG VAR_16, VAR_17;
    char VAR_18[65];
    NTSTATUS VAR_19;

    VAR_10 = ((void*)0);
    VAR_19 = FUNC_6(&VAR_10, VAR_1, VAR_3, 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);
    FUNC_9(VAR_10 != ((void*)0), "alg not set\n");

    VAR_17 = VAR_16 = 0xdeadbeef;
    VAR_19 = FUNC_4(((void*)0), VAR_2, (UCHAR *)&VAR_17, sizeof(VAR_17), &VAR_16, 0);
    FUNC_9(VAR_19 == VAR_5, "got %08x\n", VAR_19);

    VAR_17 = VAR_16 = 0xdeadbeef;
    VAR_19 = FUNC_4(VAR_10, ((void*)0), (UCHAR *)&VAR_17, sizeof(VAR_17), &VAR_16, 0);
    FUNC_9(VAR_19 == VAR_6, "got %08x\n", VAR_19);

    VAR_17 = VAR_16 = 0xdeadbeef;
    VAR_19 = FUNC_4(VAR_10, VAR_2, (UCHAR *)&VAR_17, sizeof(VAR_17), ((void*)0), 0);
    FUNC_9(VAR_19 == VAR_6, "got %08x\n", VAR_19);

    VAR_17 = VAR_16 = 0xdeadbeef;
    VAR_19 = FUNC_4(VAR_10, VAR_2, ((void*)0), sizeof(VAR_17), &VAR_16, 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);
    FUNC_9(VAR_16 == sizeof(VAR_17), "got %u\n", VAR_16);

    VAR_17 = VAR_16 = 0xdeadbeef;
    VAR_19 = FUNC_4(VAR_10, VAR_2, (UCHAR *)&VAR_17, 0, &VAR_16, 0);
    FUNC_9(VAR_19 == VAR_4, "got %08x\n", VAR_19);
    FUNC_9(VAR_17 == 0xdeadbeef, "got %u\n", VAR_17);
    FUNC_9(VAR_16 == sizeof(VAR_17), "got %u\n", VAR_16);

    VAR_17 = VAR_16 = 0xdeadbeef;
    VAR_19 = FUNC_4(VAR_10, VAR_2, (UCHAR *)&VAR_17 , sizeof(VAR_17), &VAR_16, 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);
    FUNC_9(VAR_17 != 0xdeadbeef, "len not set\n");
    FUNC_9(VAR_16 == sizeof(VAR_17), "got %u\n", VAR_16);

    FUNC_12(VAR_10, 16);
    FUNC_11(VAR_10, "MD5");

    VAR_11 = ((void*)0);
    VAR_17 = sizeof(VAR_12);
    VAR_19 = FUNC_1(VAR_10, &VAR_11, VAR_12, VAR_17, ((void*)0), 0, 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);
    FUNC_9(VAR_11 != ((void*)0), "hash not set\n");

    VAR_19 = FUNC_5(VAR_11, ((void*)0), 0, 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);

    VAR_19 = FUNC_5(VAR_11, (UCHAR *)"test", sizeof("test"), 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);

    FUNC_12(VAR_11, 16);
    FUNC_11(VAR_11, "MD5");

    FUNC_8(VAR_14, 0, sizeof(VAR_14));
    VAR_19 = FUNC_3(VAR_11, VAR_14, sizeof(VAR_14), 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);
    FUNC_7( VAR_14, sizeof(VAR_14), VAR_18 );
    FUNC_9(!FUNC_10(VAR_18, VAR_8), "got %s\n", VAR_18);

    VAR_19 = FUNC_2(VAR_11);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);

    VAR_19 = FUNC_0(VAR_10, 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);

    VAR_10 = ((void*)0);
    VAR_19 = FUNC_6(&VAR_10, VAR_1, VAR_3, VAR_0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);
    FUNC_9(VAR_10 != ((void*)0), "alg not set\n");

    VAR_11 = ((void*)0);
    VAR_17 = sizeof(VAR_13);
    VAR_19 = FUNC_1(VAR_10, &VAR_11, VAR_13, VAR_17, (UCHAR *)"key", sizeof("key"), 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);
    FUNC_9(VAR_11 != ((void*)0), "hash not set\n");

    VAR_19 = FUNC_5(VAR_11, (UCHAR *)"test", sizeof("test"), 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);

    FUNC_12(VAR_11, 16);
    FUNC_11(VAR_11, "MD5");

    FUNC_8(VAR_15, 0, sizeof(VAR_15));
    VAR_19 = FUNC_3(VAR_11, VAR_15, sizeof(VAR_15), 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);
    FUNC_7( VAR_15, sizeof(VAR_15), VAR_18 );
    FUNC_9(!FUNC_10(VAR_18, VAR_9), "got %s\n", VAR_18);

    VAR_19 = FUNC_2(VAR_11);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);

    VAR_19 = FUNC_0(VAR_10, 0);
    FUNC_9(VAR_19 == VAR_7, "got %08x\n", VAR_19);
}
