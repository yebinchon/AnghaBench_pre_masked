
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int,int *,int ,int ,char*,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5 (void)
{
    char VAR_5 [1024];
    char VAR_6 [1024];


    DWORD VAR_7;

    VAR_7 = FUNC_2(VAR_0 | VAR_1, ((void*)0),
            VAR_3, 0, VAR_5, FUNC_0(VAR_5), ((void*)0));



    FUNC_3 ((FUNC_1 (0, (unsigned char*)VAR_6) == VAR_4),
            "DceErrorInqTextA(0...)\n");

    FUNC_3 ((FUNC_1 (VAR_2, (unsigned char*)VAR_6) == VAR_4),
            "DceErrorInqTextA(valid...)\n");

    if (VAR_7)
    {




        FUNC_3 ((FUNC_1 (35, (unsigned char*)VAR_6) == VAR_4 &&
                    FUNC_4 (VAR_6, VAR_5) == 0),
                "DceErrorInqTextA(unformattable...)\n");




        FUNC_3 ((FUNC_1 (3814, (unsigned char*)VAR_6) == VAR_4 &&
                    FUNC_4 (VAR_6, VAR_5) == 0),
                "DceErrorInqTextA(deviation...)\n");
    }
    else
        FUNC_3 (0, "Cannot set up for DceErrorInqText\n");
}
