
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPRECT ;
typedef int HWND ;
typedef int * HRGN ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*,char*,int,int ,int ,int,int,int *,int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int,int ,int *,int *,int *,int *,int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int,char*,int) ;

void FUNC_8()
{
 HWND VAR_8;
 HRGN VAR_9;
 int VAR_10;


 VAR_8 = FUNC_1(L"BUTTON", L"TestWindow", VAR_6 | VAR_7,
                     VAR_0, VAR_0, 100, 100,
                     ((void*)0), ((void*)0), 0, 0);
 FUNC_6(VAR_8);


 VAR_9 = FUNC_0(0,0,0,0);
 VAR_10 = FUNC_4(VAR_8, VAR_9, VAR_2);
 FUNC_7(VAR_10 == VAR_3, "Result = %d\n", VAR_10);

 VAR_10 = FUNC_5(VAR_8, 20, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0);
 FUNC_7(VAR_10 == VAR_4, "Result = %d\n", VAR_10);
 VAR_10 = FUNC_4(VAR_8, VAR_9, VAR_2);
 FUNC_7(VAR_10 == VAR_3, "Result = %d\n", VAR_10);

 VAR_10 = FUNC_5(VAR_8, 20, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_5);
 FUNC_7(VAR_10 == VAR_4, "Result = %d\n", VAR_10);
 VAR_10 = FUNC_4(VAR_8, VAR_9, VAR_2);
 FUNC_7(VAR_10 == VAR_4, "Result = %d\n", VAR_10);
 FUNC_6(VAR_8);


 FUNC_2(VAR_9);
 VAR_10 = FUNC_5(VAR_8, 20, 0, ((void*)0), ((void*)0), VAR_9, ((void*)0), VAR_5);
 FUNC_7(VAR_10 == VAR_1, "Result = %d\n", VAR_10);
 VAR_9 = FUNC_0(0,0,0,0);
 FUNC_6(VAR_8);


 VAR_10 = FUNC_5(VAR_8, 20, 0, ((void*)0), ((void*)0), ((void*)0), (LPRECT)1, VAR_5);
 FUNC_7(VAR_10 == VAR_1, "Result = %d\n", VAR_10);
 VAR_10 = FUNC_4(VAR_8, VAR_9, VAR_2);
 FUNC_7(VAR_10 == VAR_4, "Result = %d\n", VAR_10);



 FUNC_2(VAR_9);
    FUNC_3(VAR_8);
}
