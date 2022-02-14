
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(LPWSTR VAR_3)
{

    if (FUNC_3(VAR_3) == 0xFFFFFFFF)
    {
        FUNC_1("File %s not found!\n", VAR_3);
        return;
    }


    FUNC_2(VAR_3, &VAR_2);
    if (!VAR_2)
    {
        FUNC_1("GdipLoadImageFromFile() failed\n");
        return;
    }
    FUNC_0();


    FUNC_5();


    FUNC_4(VAR_1, ((void*)0), VAR_0);
}
