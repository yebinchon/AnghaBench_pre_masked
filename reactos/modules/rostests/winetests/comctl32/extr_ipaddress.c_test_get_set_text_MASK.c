
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int HWND ;
typedef int CHAR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,char*,int *) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    HWND VAR_1;
    CHAR VAR_2[16];
    INT VAR_3;

    VAR_1 = FUNC_5();
    if (!VAR_1)
    {
        FUNC_9("IPAddress control not implemented\n");
        return;
    }


    VAR_3 = FUNC_2(VAR_1, VAR_2, FUNC_0(VAR_2));
    FUNC_6(7, VAR_3);
    FUNC_7(FUNC_8(VAR_2, "0.0.0.0") == 0, "Expected null IP address, got %s\n", VAR_2);

    FUNC_4(VAR_1, VAR_0, 0, FUNC_3(127, 0, 0, 1));
    VAR_3 = FUNC_2(VAR_1, VAR_2, FUNC_0(VAR_2));
    FUNC_6(9, VAR_3);
    FUNC_7(FUNC_8(VAR_2, "127.0.0.1") == 0, "Expected 127.0.0.1, got %s\n", VAR_2);

    FUNC_1(VAR_1);
}
