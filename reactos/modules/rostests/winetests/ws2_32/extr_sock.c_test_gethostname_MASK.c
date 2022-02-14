
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int dummy; } ;
typedef int name ;


 char* VAR_0 ;
 char* FUNC_0 () ;
 int FUNC_1 (int) ;
 struct hostent* FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    struct hostent *VAR_1;
    char VAR_2[256];
    int VAR_3, VAR_4;

    FUNC_1(0xdeadbeef);
    VAR_3 = FUNC_3(((void*)0), 256);
    FUNC_4(VAR_3 == -1, "gethostname() returned %d\n", VAR_3);
    FUNC_4(FUNC_0() == VAR_0, "gethostname with null buffer "
            "failed with %d, expected %d\n", FUNC_0(), VAR_0);

    VAR_3 = FUNC_3(VAR_2, sizeof(VAR_2));
    FUNC_4(VAR_3 == 0, "gethostname() call failed: %d\n", FUNC_0());
    VAR_1 = FUNC_2(VAR_2);
    FUNC_4(VAR_1 != ((void*)0), "gethostbyname(\"%s\") failed: %d\n", VAR_2, FUNC_0());

    VAR_4 = FUNC_7(VAR_2);
    FUNC_1(0xdeadbeef);
    FUNC_6(VAR_2, "deadbeef");
    VAR_3 = FUNC_3(VAR_2, VAR_4);
    FUNC_4(VAR_3 == -1, "gethostname() returned %d\n", VAR_3);
    FUNC_4(!FUNC_5(VAR_2, "deadbeef"), "name changed unexpected!\n");
    FUNC_4(FUNC_0() == VAR_0, "gethostname with insufficient length "
            "failed with %d, expected %d\n", FUNC_0(), VAR_0);

    VAR_4++;
    VAR_3 = FUNC_3(VAR_2, VAR_4);
    FUNC_4(VAR_3 == 0, "gethostname() call failed: %d\n", FUNC_0());
    VAR_1 = FUNC_2(VAR_2);
    FUNC_4(VAR_1 != ((void*)0), "gethostbyname(\"%s\") failed: %d\n", VAR_2, FUNC_0());
}
