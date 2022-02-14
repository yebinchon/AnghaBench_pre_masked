
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(int VAR_6, char* VAR_7)
{
    int VAR_8 = 0;

    FUNC_2("performing test: %d (%s)\n", VAR_6, VAR_7);


    if (FUNC_7(FUNC_0("zerosize.foo"))) {
        FUNC_2("System unable to truncate files yet, unlinking:\n");
        FUNC_9();
    }

    switch (VAR_6) {
    case 1:
        VAR_8 = FUNC_8(FUNC_0("text.dos"), VAR_4, 166, VAR_0);
        break;
    case 2:
        VAR_8 = FUNC_3(FUNC_0("binary.dos"), VAR_4, VAR_1, 166);
        break;
    case 3:
        VAR_8 = FUNC_8(FUNC_0("text.nix"), VAR_5, 162, VAR_2);
        break;
    case 4:
        VAR_8 = FUNC_3(FUNC_0("binary.nix"), VAR_5, VAR_3, 162);
        break;
    case 5:
        VAR_8 = FUNC_5();
        break;
    case 6:
        VAR_8 = FUNC_4();
        break;
    case 7:
        VAR_8 = FUNC_6();
        break;
    case -1:
        VAR_8 = FUNC_9();
        break;
    default:
        FUNC_1(FUNC_0("no test number selected\n"));
        break;
    }
    return VAR_8;
}
