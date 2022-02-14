
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char CHAR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int,char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char*,char*,int*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    BOOL VAR_6, VAR_7=VAR_5;
    CHAR VAR_8[VAR_3];
    CHAR VAR_9[VAR_3];
    CHAR VAR_10[VAR_3];
    CHAR VAR_11[VAR_3];


    FUNC_9(VAR_8, "nosuchfile.txt\0");
    FUNC_9(VAR_9, "testdir2\0");
    VAR_6 = FUNC_3(VAR_8, VAR_9, VAR_10, &VAR_7, 0);
    FUNC_8(VAR_6 == VAR_1 ||
       FUNC_4(VAR_6 == FUNC_7(VAR_10) + 1),
       "SHGetNewLinkInfoA succeeded\n");
    FUNC_8(VAR_7 == VAR_1, "mustcopy should be FALSE\n");


    FUNC_9(VAR_8, "test1.txt\0");
    FUNC_9(VAR_9, "nosuchdir\0");
    VAR_6 = FUNC_3(VAR_8, VAR_9, VAR_10, &VAR_7, 0);
    FUNC_8(VAR_6 == VAR_5 ||
       FUNC_4(VAR_6 == FUNC_7(VAR_10) + 1),
       "SHGetNewLinkInfoA failed, err=%i\n", FUNC_2());
    FUNC_8(VAR_7 == VAR_1, "mustcopy should be FALSE\n");


    FUNC_9(VAR_8, "test1.txt\0");
    FUNC_9(VAR_9, "testdir2\0");
    VAR_6 = FUNC_3(VAR_8, VAR_9, VAR_10, &VAR_7, 0);
    FUNC_8(VAR_6 == VAR_5 ||
       FUNC_4(VAR_6 == FUNC_7(VAR_10) + 1),
       "SHGetNewLinkInfoA failed, err=%i\n", FUNC_2());
    FUNC_8(VAR_7 == VAR_1, "mustcopy should be FALSE\n");
    FUNC_8(FUNC_0(VAR_2, VAR_4, VAR_9,
                      FUNC_7(VAR_9), VAR_10, FUNC_7(VAR_9)) == VAR_0,
       "%s does not start with %s\n", VAR_10, VAR_9);
    FUNC_8(FUNC_7(VAR_10) > 4 && FUNC_6(VAR_10+FUNC_7(VAR_10)-4, ".lnk") == 0,
       "%s does not end with .lnk\n", VAR_10);


    FUNC_5(VAR_10);
    VAR_6 = FUNC_3(VAR_8, VAR_9, VAR_11, &VAR_7, 0);
    FUNC_8(VAR_6 == VAR_5 ||
       FUNC_4(VAR_6 == FUNC_7(VAR_11) + 1),
       "SHGetNewLinkInfoA failed, err=%i\n", FUNC_2());
    FUNC_8(VAR_7 == VAR_1, "mustcopy should be FALSE\n");
    FUNC_8(FUNC_0(VAR_2, VAR_4, VAR_9,
                      FUNC_7(VAR_9), VAR_11, FUNC_7(VAR_9)) == VAR_0,
       "%s does not start with %s\n", VAR_11, VAR_9);
    FUNC_8(FUNC_7(VAR_11) > 4 && FUNC_6(VAR_11+FUNC_7(VAR_11)-4, ".lnk") == 0,
       "%s does not end with .lnk\n", VAR_11);
    FUNC_8(FUNC_6(VAR_10, VAR_11) != 0, "%s and %s are the same\n", VAR_10, VAR_11);
    FUNC_1(VAR_10);
}
