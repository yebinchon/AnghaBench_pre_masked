
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int bottom; int top; int right; } ;
typedef TYPE_1__ RECT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef scalar_t__ HWND ;


 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,int,int ,int,int ) ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static LRESULT FUNC_9( HWND VAR_8, WPARAM VAR_9, LPARAM VAR_10 )
{
    int VAR_11 = 0;
    RECT VAR_12;
    HWND VAR_13 = FUNC_7() ? FUNC_2(VAR_8, VAR_1) : FUNC_2(VAR_8, VAR_0);
    HWND VAR_14 = FUNC_2(VAR_8, VAR_4);
    HWND VAR_15 = FUNC_2(VAR_8, VAR_2);
    HWND VAR_16 = FUNC_2(VAR_15, VAR_3);
    int VAR_17 = 0;

    if (VAR_14)
    {
        FUNC_6(VAR_14, VAR_7, 0, 0);
        if (FUNC_3(VAR_14))
        {
            FUNC_1(VAR_14, &VAR_12);
            VAR_11 = VAR_12.bottom - VAR_12.top;
        } else
        {
            VAR_11 = 0;
        }
    }
    if (VAR_15)
    {
        VAR_17 = FUNC_6(VAR_15, VAR_5, 0, 0);

        FUNC_5(VAR_15, 0, 0, FUNC_4(VAR_10), VAR_17, VAR_6);
    }
    if (VAR_13)
    {
        FUNC_1(VAR_8, &VAR_12);
        FUNC_5(VAR_13, 0, VAR_17, VAR_12.right, VAR_12.bottom-VAR_11-VAR_17, VAR_6);
    }

    FUNC_8(VAR_16);

    return FUNC_0(VAR_8, VAR_7, VAR_9, VAR_10);
}
