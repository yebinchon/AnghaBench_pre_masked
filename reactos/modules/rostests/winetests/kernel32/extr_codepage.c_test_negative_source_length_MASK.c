
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bufW ;
typedef int buf ;
typedef char WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,char*,int,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int,char*,int,int *,int *) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char,int) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    int VAR_3;
    char VAR_4[10];
    WCHAR VAR_5[10];


    FUNC_2( 0xdeadbeef );
    FUNC_6(VAR_4,'x',sizeof(VAR_4));
    VAR_3 = FUNC_3(VAR_0, 0, VAR_2, -2002, VAR_4, 10, ((void*)0), ((void*)0));
    FUNC_7(VAR_3 == 7 && FUNC_0() == 0xdeadbeef,
       "WideCharToMultiByte(-2002): len=%d error=%u\n", VAR_3, FUNC_0());
    FUNC_7(!FUNC_4(VAR_4, "foobar"),
       "WideCharToMultiByte(-2002): expected \"foobar\" got \"%s\"\n", VAR_4);

    FUNC_2( 0xdeadbeef );
    FUNC_6(VAR_5,'x',sizeof(VAR_5));
    VAR_3 = FUNC_1(VAR_0, 0, "foobar", -2002, VAR_5, 10);
    FUNC_7(VAR_3 == 7 && !FUNC_5(VAR_5, VAR_2) && FUNC_0() == 0xdeadbeef,
       "MultiByteToWideChar(-2002): len=%d error=%u\n", VAR_3, FUNC_0());

    FUNC_2(0xdeadbeef);
    FUNC_6(VAR_5, 'x', sizeof(VAR_5));
    VAR_3 = FUNC_1(VAR_0, 0, "foobar", -1, VAR_5, 6);
    FUNC_7(VAR_3 == 0 && FUNC_0() == VAR_1,
       "MultiByteToWideChar(-1): len=%d error=%u\n", VAR_3, FUNC_0());
}
