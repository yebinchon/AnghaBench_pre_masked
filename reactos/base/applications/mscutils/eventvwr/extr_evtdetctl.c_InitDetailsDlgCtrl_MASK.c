
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_3__ {scalar_t__ hMonospaceFont; scalar_t__ bDisplayWords; } ;
typedef TYPE_1__* PDETAILDATA ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static
VOID
FUNC_4(HWND VAR_26, PDETAILDATA VAR_27)
{
    DWORD VAR_28;

    HANDLE VAR_29 = FUNC_1(VAR_25, FUNC_2(VAR_19), VAR_21, 16, 16, VAR_22);
    HANDLE VAR_30 = FUNC_1(VAR_25, FUNC_2(VAR_20), VAR_21, 16, 16, VAR_22);
    HANDLE VAR_31 = FUNC_1(VAR_25, FUNC_2(VAR_18), VAR_21, 16, 16, VAR_22);

    FUNC_3(VAR_26, VAR_15, VAR_2, (WPARAM)VAR_21, (LPARAM)VAR_29);
    FUNC_3(VAR_26, VAR_16, VAR_2, (WPARAM)VAR_21, (LPARAM)VAR_30);
    FUNC_3(VAR_26, VAR_12, VAR_2, (WPARAM)VAR_21, (LPARAM)VAR_31);


    FUNC_3(VAR_26, VAR_14, VAR_7, 0, FUNC_0(VAR_4));


    VAR_28 = FUNC_3(VAR_26, VAR_14, VAR_6, 0, 0);
    FUNC_3(VAR_26, VAR_14, VAR_8, 0, VAR_28 | VAR_9 | VAR_10);







    FUNC_3(VAR_26, VAR_14, VAR_5, VAR_0 , 0);



    FUNC_3(VAR_26, VAR_27->bDisplayWords ? VAR_17 : VAR_11, VAR_1, VAR_3, 0);
    FUNC_3(VAR_26, VAR_13, VAR_24, (WPARAM)VAR_27->hMonospaceFont, (LPARAM)VAR_23);
}
