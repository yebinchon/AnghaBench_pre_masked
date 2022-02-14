
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    int VAR_2, VAR_3 = FUNC_0();

    if(!&FUNC_3 || !FUNC_4(VAR_1, "chinese-traditional")) {
        FUNC_5("Skipping wctob tests\n");
        return;
    }

    VAR_2 = FUNC_3(0x8141);
    FUNC_2(VAR_2 == VAR_0, "ret = %x\n", VAR_2);

    VAR_2 = FUNC_3(0x81);
    FUNC_2(VAR_2 == VAR_0, "ret = %x\n", VAR_2);

    VAR_2 = FUNC_3(0xe0);
    FUNC_2(VAR_2 == 0x61, "ret = %x\n", VAR_2);

    FUNC_1(1250);
    VAR_2 = FUNC_3(0x81);
    FUNC_2(VAR_2 == VAR_0, "ret = %x\n", VAR_2);

    FUNC_4(VAR_1, "C");
    VAR_2 = FUNC_3(0x8141);
    FUNC_2(VAR_2 == VAR_0, "ret = %x\n", VAR_2);

    VAR_2 = FUNC_3(0x81);
    FUNC_2(VAR_2 == (int)(char)0x81, "ret = %x\n", VAR_2);

    VAR_2 = FUNC_3(0x9f);
    FUNC_2(VAR_2 == (int)(char)0x9f, "ret = %x\n", VAR_2);

    VAR_2 = FUNC_3(0xe0);
    FUNC_2(VAR_2 == (int)(char)0xe0, "ret = %x\n", VAR_2);

    FUNC_1(VAR_3);
}
