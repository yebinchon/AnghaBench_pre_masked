
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int *,int,int ,int ,int,int,int *,int *,int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    HWND VAR_7;
    DWORD VAR_8;

    VAR_7 = FUNC_0(VAR_2, ((void*)0),
                        VAR_4,
                        0, 0, 200, 60, ((void*)0), ((void*)0), VAR_6, ((void*)0));
    VAR_8 = FUNC_2(VAR_7, VAR_1, 0, 0);
    FUNC_4(VAR_8 == 0, "Incorrect options %x\n", VAR_8);
    FUNC_1(VAR_7);

    VAR_7 = FUNC_0(VAR_2, ((void*)0),
                        VAR_4|VAR_5|VAR_3,
                        0, 0, 200, 60, ((void*)0), ((void*)0), VAR_6, ((void*)0));
    VAR_8 = FUNC_2(VAR_7, VAR_1, 0, 0);
    FUNC_4(VAR_8 == VAR_0 ||
       FUNC_3(VAR_8 == 0),
       "Incorrect initial options %x\n", VAR_8);
    FUNC_1(VAR_7);
}
