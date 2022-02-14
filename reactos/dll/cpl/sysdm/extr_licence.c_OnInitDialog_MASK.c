
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ hIcon; } ;
typedef TYPE_1__* PLIC_CONTEXT ;
typedef int PCSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HRSRC ;
typedef int HGLOBAL ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static BOOL
FUNC_10(HWND VAR_13, PLIC_CONTEXT VAR_14)
{
    HRSRC VAR_15;
    HGLOBAL VAR_16;
    PCSTR VAR_17;

    VAR_14->hIcon = FUNC_2(VAR_12,
                                FUNC_5(VAR_4),
                                VAR_5,
                                16,
                                16,
                                0);

    FUNC_7(VAR_13,
                VAR_10,
                VAR_2,
                (LPARAM)VAR_14->hIcon);


    if (!(VAR_15 = FUNC_0(VAR_12,
                                  FUNC_5(VAR_6),
                                  FUNC_5(VAR_7))) ||
        !(VAR_16 = FUNC_3(VAR_12, VAR_15)) ||
        !(VAR_17 = FUNC_4(VAR_16)))
    {
        FUNC_9(VAR_13);
        return VAR_1;
    }


    FUNC_8(VAR_13,
                    VAR_3,
                    VAR_17);

    FUNC_6(FUNC_1(VAR_13, VAR_3),
                VAR_0,
                -1,
                0);
    FUNC_6(FUNC_1(VAR_13, VAR_3), VAR_11, VAR_8, 0);
    return VAR_9;
}
